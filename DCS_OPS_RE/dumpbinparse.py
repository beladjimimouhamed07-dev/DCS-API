# Usage:
# pip install git+https://github.com/wbenny/pydemangler.git
# dumpbin /export CockpitBase.dll > dump.txt
# python dumpbinparse.py < dump.txt > could_not_parse.txt
#
# output goes to headers/ folder

import sys
import os
import re
import pydemangler

dll_name = sys.argv[1] if len(sys.argv) > 1 else "unknown.dll"

headers = {}

import re

import re

import re

import re

pattern = re.compile(
    r"(?P<access>public|protected|private)?:?\s*"  # Optional access specifier
    r"(?P<static>static\s+)?"
    r"(?P<virtual>virtual\s+)?"
    r"(?P<return_type>(?:class|struct|enum)?[\w:<>&* \t]+)?\s*"  # Type (void, int, class Foo, etc.)
    r"(?P<calling>\b__\w+\b)?\s*"  # Optional calling convention (e.g., __cdecl)
    r"(?:(?P<full_class>(?:\w+::)*\w+)::)?"  # Full class or namespace (optional for global variables)
    r"(?P<func_name>\w+)"  # Function, variable, or class name
    r"(?:\((?P<parameters>.*)\))?"  # Function parameters (optional, functions only)
    r"\s*(?P<const>const)?"  # Optional 'const' for methods
    r"(?!\()"  # Ensures it does NOT capture functions incorrectly
)


def clean_function_signature(signature):
    signature = re.sub(r"\b(class|struct) ", "", signature)
    signature = re.sub(r"\b(\w+)\s+\*\s*(\w+)", r"\1* \2", signature)
    return signature.strip()

skipping = True  # Skip headers initially

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue  # Ignore empty lines
    # Skip headers until first valid function export
    if skipping:
        if re.match(r"\d+\s+[0-9A-Fa-f]+\s+[0-9A-Fa-f]+\s+.*", line):
            skipping = False  # Found first valid entry
        else:
            continue
    # Skip summary/footer lines
    if re.match(r"^Summary", line):
        skipping = True
        continue

    match = re.match(r"\d+\s+[0-9A-Fa-f]+\s+[0-9A-Fa-f]+\s+(.*)", line)
    if not match:
        print(f'/* UNKNOWN FORMAT {line} */')
        continue
    mangled_name = match.group(1)
    demangled_name = pydemangler.demangle(mangled_name)
    if not demangled_name:
        print(f'/* DEMANGLE ERROR {mangled_name} */')
        continue
    match = pattern.match(demangled_name)
    if not match:
        print(f'/* PARSE ERROR */ {demangled_name} /// {mangled_name}')
        continue
    access = match.group("access") or "public"
    static = match.group("static") or ""
    virtual = match.group("virtual") or ""
    return_type = match.group("return_type")
    calling_convention = match.group("calling")
    full_class = match.group("full_class")
    func_name = match.group("func_name")
    parameters = match.group("parameters")
    const = match.group("const") or ""
    print(f'a:{access} s:{static} v:{virtual} ret:{return_type} cdec:{calling_convention} cls:{full_class} fn:{func_name} p:{parameters} c:{const}')
    continue


    cleaned_return_type = clean_function_signature(return_type or "")
    cleaned_parameters = parameters if parameters else "void"
    parts = full_class.split("::")
    namespace = "::".join(parts[:-1]) if len(parts) > 1 else "global"
    class_name = parts[-1]
    filename = f"{dll_name}/{namespace.replace('::', '_')}/{class_name}.h"
    file_path = os.path.join("headers", filename)
    function_declaration = f"    {static}{virtual}{cleaned_return_type} {calling_convention} {func_name}({cleaned_parameters});"

    if file_path not in headers:
        headers[file_path] = {
            "namespace": namespace,
            "class": class_name,
            "public": [],
            "protected": []
        }
    if access == "public":
        headers[file_path]["public"].append(function_declaration)
    elif access == "protected":
        headers[file_path]["protected"].append(function_declaration)

os.makedirs("headers", exist_ok=True)

for file_path, data in headers.items():
    with open(file_path, "w") as f:
        guard = file_path.replace("/", "_").replace(".", "_").upper()
        f.write(f"#ifndef {guard}\n#define {guard}\n\n")
        if data["namespace"] != "global":
            f.write(f"namespace {data['namespace']} {{\n\n")
        f.write(f"class {data['class']} {{\n")
        if data["public"]:
            f.write("public:\n")
            f.write("\n".join(data["public"]) + "\n")
        if data["protected"]:
            f.write("protected:\n")
            f.write("\n".join(data["protected"]) + "\n")
        f.write("};\n\n")
        if data["namespace"] != "global":
            f.write(f"}} // namespace {data['namespace']}\n")
        f.write(f"#endif // {guard}\n")

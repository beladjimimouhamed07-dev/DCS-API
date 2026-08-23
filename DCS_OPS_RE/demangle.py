# Usage:
# pip install git+https://github.com/wbenny/pydemangler.git
# dumpbin /export CockpitBase.dll > dump.txt
# python dumpbinparse.py < dump.txt > could_not_parse.txt
#
# output goes to headers/ folder

import sys
import re
import pydemangler

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
    mangled = match.group(1)
    demangled = pydemangler.demangle(mangled)
    if not demangled:
        print(f'/* DEMANGLE ERROR {mangled} */')
        continue
    # ignore `vftable'
    if re.search(r"`vftable'", demangled):
        continue
    print(demangled)

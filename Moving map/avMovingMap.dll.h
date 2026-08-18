typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    ImageBaseOffset32 action;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    ImageBaseOffset32 dispUnwindMap;
    uint nTryBlocks;
    ImageBaseOffset32 dispTryBlockMap;
    uint nIPMapEntries;
    ImageBaseOffset32 dispIPToStateMap;
    int dispUnwindHelp;
    ImageBaseOffset32 dispESTypeList;
    int EHFlags;
};

typedef ulonglong __uint64;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

typedef void *PVOID;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulong DWORD;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef ushort WORD;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _M128A *PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef void *HANDLE;

typedef long HRESULT;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[110];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ulong ULONG;

typedef int BOOL;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct GunHandlerAI GunHandlerAI, *PGunHandlerAI;

struct GunHandlerAI { // PlaceHolder Class Structure
};

typedef struct SimpleSightAI SimpleSightAI, *PSimpleSightAI;

struct SimpleSightAI { // PlaceHolder Class Structure
};

typedef struct AIGunnersManager AIGunnersManager, *PAIGunnersManager;

struct AIGunnersManager { // PlaceHolder Class Structure
};

typedef int PMFN;

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_ThrowInfo ThrowInfo;

typedef ulonglong uintptr_t;

typedef struct MovingObject MovingObject, *PMovingObject;

struct MovingObject { // PlaceHolder Structure
};

typedef struct ICameraSteeringPoint ICameraSteeringPoint, *PICameraSteeringPoint;

struct ICameraSteeringPoint { // PlaceHolder Structure
};

typedef struct wAirdrome wAirdrome, *PwAirdrome;

struct wAirdrome { // PlaceHolder Structure
};

typedef struct woSpot woSpot, *PwoSpot;

struct woSpot { // PlaceHolder Structure
};

typedef struct ImGuiTextFilter ImGuiTextFilter, *PImGuiTextFilter;

struct ImGuiTextFilter { // PlaceHolder Structure
};

typedef struct avRadioMeasureEquipment avRadioMeasureEquipment, *PavRadioMeasureEquipment;

struct avRadioMeasureEquipment { // PlaceHolder Structure
};

typedef struct wInputPortBase wInputPortBase, *PwInputPortBase;

struct wInputPortBase { // PlaceHolder Structure
};

typedef struct ActionTraits ActionTraits, *PActionTraits;

struct ActionTraits { // PlaceHolder Structure
};

typedef struct IDispatcher IDispatcher, *PIDispatcher;

struct IDispatcher { // PlaceHolder Structure
};

typedef struct Plane_Const Plane_Const, *PPlane_Const;

struct Plane_Const { // PlaceHolder Structure
};

typedef struct ISceneObject ISceneObject, *PISceneObject;

struct ISceneObject { // PlaceHolder Structure
};

typedef struct IwTransiver IwTransiver, *PIwTransiver;

struct IwTransiver { // PlaceHolder Structure
};

typedef struct mirrors_data mirrors_data, *Pmirrors_data;

struct mirrors_data { // PlaceHolder Structure
};

typedef struct smViewport smViewport, *PsmViewport;

struct smViewport { // PlaceHolder Structure
};

typedef struct Space Space, *PSpace;

struct Space { // PlaceHolder Structure
};

typedef struct Registered Registered, *PRegistered;

struct Registered { // PlaceHolder Structure
};

typedef struct TFrameMemoryHeap<1> TFrameMemoryHeap<1>, *PTFrameMemoryHeap<1>;

struct TFrameMemoryHeap<1> { // PlaceHolder Structure
};

typedef struct NightVisionParams NightVisionParams, *PNightVisionParams;

struct NightVisionParams { // PlaceHolder Structure
};

typedef struct ModelTimeQuantizer ModelTimeQuantizer, *PModelTimeQuantizer;

struct ModelTimeQuantizer { // PlaceHolder Structure
};

typedef struct wShellDescriptor wShellDescriptor, *PwShellDescriptor;

struct wShellDescriptor { // PlaceHolder Structure
};

typedef struct IwoLA IwoLA, *PIwoLA;

struct IwoLA { // PlaceHolder Structure
};

typedef struct ImGuiStyle ImGuiStyle, *PImGuiStyle;

struct ImGuiStyle { // PlaceHolder Structure
};

typedef struct SND_SourceParams SND_SourceParams, *PSND_SourceParams;

struct SND_SourceParams { // PlaceHolder Structure
};

typedef struct vrHand vrHand, *PvrHand;

struct vrHand { // PlaceHolder Structure
};

typedef struct waSatellite waSatellite, *PwaSatellite;

struct waSatellite { // PlaceHolder Structure
};

typedef struct HMD HMD, *PHMD;

struct HMD { // PlaceHolder Structure
};

typedef struct RWR_event RWR_event, *PRWR_event;

struct RWR_event { // PlaceHolder Structure
};

typedef struct ImVec4 ImVec4, *PImVec4;

struct ImVec4 { // PlaceHolder Structure
};

typedef struct ImVec2 ImVec2, *PImVec2;

struct ImVec2 { // PlaceHolder Structure
};

typedef struct wDetectorInfoStorage wDetectorInfoStorage, *PwDetectorInfoStorage;

struct wDetectorInfoStorage { // PlaceHolder Structure
};

typedef struct datalink_msg datalink_msg, *Pdatalink_msg;

struct datalink_msg { // PlaceHolder Structure
};

typedef struct LuaTableElement LuaTableElement, *PLuaTableElement;

struct LuaTableElement { // PlaceHolder Structure
};

typedef struct ClipVolume ClipVolume, *PClipVolume;

struct ClipVolume { // PlaceHolder Structure
};

typedef struct wPosition3<double> wPosition3<double>, *PwPosition3<double>;

struct wPosition3<double> { // PlaceHolder Structure
};

typedef enum wModulation {
} wModulation;

typedef struct Suicide Suicide, *PSuicide;

struct Suicide { // PlaceHolder Structure
};

typedef struct AnoxemiaData AnoxemiaData, *PAnoxemiaData;

struct AnoxemiaData { // PlaceHolder Structure
};

typedef struct wTerrain wTerrain, *PwTerrain;

struct wTerrain { // PlaceHolder Structure
};

typedef struct SC SC, *PSC;

struct SC { // PlaceHolder Structure
};

typedef struct LinkBase LinkBase, *PLinkBase;

struct LinkBase { // PlaceHolder Structure
};

typedef struct smSceneManager smSceneManager, *PsmSceneManager;

struct smSceneManager { // PlaceHolder Structure
};

typedef struct SND_HostParams SND_HostParams, *PSND_HostParams;

struct SND_HostParams { // PlaceHolder Structure
};

typedef struct Parameter Parameter, *PParameter;

struct Parameter { // PlaceHolder Structure
};

typedef struct lua_State lua_State, *Plua_State;

struct lua_State { // PlaceHolder Structure
};

typedef enum wControlClass {
} wControlClass;

typedef enum MouseCursorShape {
} MouseCursorShape;

typedef struct IwInfo IwInfo, *PIwInfo;

struct IwInfo { // PlaceHolder Structure
};

typedef struct wMessage wMessage, *PwMessage;

struct wMessage { // PlaceHolder Structure
};

typedef struct HeapVector<Graphics::DynamicParam> HeapVector<Graphics::DynamicParam>, *PHeapVector<Graphics::DynamicParam>;

struct HeapVector<Graphics::DynamicParam> { // PlaceHolder Structure
};

typedef struct LinkHost LinkHost, *PLinkHost;

struct LinkHost { // PlaceHolder Structure
};

typedef struct UID_base UID_base, *PUID_base;

struct UID_base { // PlaceHolder Structure
};

typedef struct TransmitterDesc TransmitterDesc, *PTransmitterDesc;

struct TransmitterDesc { // PlaceHolder Structure
};

typedef struct wDatalinkCommunicatorCmn wDatalinkCommunicatorCmn, *PwDatalinkCommunicatorCmn;

struct wDatalinkCommunicatorCmn { // PlaceHolder Structure
};

typedef struct wTVPictureSourceProvider wTVPictureSourceProvider, *PwTVPictureSourceProvider;

struct wTVPictureSourceProvider { // PlaceHolder Structure
};

typedef struct viObject viObject, *PviObject;

struct viObject { // PlaceHolder Structure
};

typedef struct FrequencyRange FrequencyRange, *PFrequencyRange;

struct FrequencyRange { // PlaceHolder Structure
};

typedef struct ILiveryManager ILiveryManager, *PILiveryManager;

struct ILiveryManager { // PlaceHolder Structure
};

typedef struct wRadioReceiver wRadioReceiver, *PwRadioReceiver;

struct wRadioReceiver { // PlaceHolder Structure
};

typedef struct IwHumanSensor IwHumanSensor, *PIwHumanSensor;

struct IwHumanSensor { // PlaceHolder Structure
};

typedef struct wRadioAntenna wRadioAntenna, *PwRadioAntenna;

struct wRadioAntenna { // PlaceHolder Structure
};

typedef struct Input Input, *PInput;

struct Input { // PlaceHolder Structure
};

typedef struct wBombSightDataDescriptor wBombSightDataDescriptor, *PwBombSightDataDescriptor;

struct wBombSightDataDescriptor { // PlaceHolder Structure
};

typedef enum wMsg {
} wMsg;

typedef struct wRadioTransmitter wRadioTransmitter, *PwRadioTransmitter;

struct wRadioTransmitter { // PlaceHolder Structure
};

typedef struct IwHumanHead IwHumanHead, *PIwHumanHead;

struct IwHumanHead { // PlaceHolder Structure
};

typedef enum InputDeviceTypes {
} InputDeviceTypes;

typedef struct IHandTracker IHandTracker, *PIHandTracker;

struct IHandTracker { // PlaceHolder Structure
};

typedef struct wTransiver wTransiver, *PwTransiver;

struct wTransiver { // PlaceHolder Structure
};

typedef struct IView IView, *PIView;

struct IView { // PlaceHolder Structure
};

typedef struct CannonSight CannonSight, *PCannonSight;

struct CannonSight { // PlaceHolder Structure
};

typedef struct ResourceManager ResourceManager, *PResourceManager;

struct ResourceManager { // PlaceHolder Structure
};

typedef struct wAmmunitionNURSDescriptor wAmmunitionNURSDescriptor, *PwAmmunitionNURSDescriptor;

struct wAmmunitionNURSDescriptor { // PlaceHolder Structure
};

typedef struct wAttributeOwner wAttributeOwner, *PwAttributeOwner;

struct wAttributeOwner { // PlaceHolder Structure
};

typedef struct DatalinkState DatalinkState, *PDatalinkState;

struct DatalinkState { // PlaceHolder Structure
};

typedef struct IwHumanPlane IwHumanPlane, *PIwHumanPlane;

struct IwHumanPlane { // PlaceHolder Structure
};

typedef struct wShape wShape, *PwShape;

struct wShape { // PlaceHolder Structure
};

typedef struct customUnitProperty customUnitProperty, *PcustomUnitProperty;

struct customUnitProperty { // PlaceHolder Structure
};

typedef struct wLineInterpolation<float> wLineInterpolation<float>, *PwLineInterpolation<float>;

struct wLineInterpolation<float> { // PlaceHolder Structure
};

typedef struct IOptions IOptions, *PIOptions;

struct IOptions { // PlaceHolder Structure
};

typedef struct wHumanCommunicator wHumanCommunicator, *PwHumanCommunicator;

struct wHumanCommunicator { // PlaceHolder Structure
};

typedef struct IwWorld IwWorld, *PIwWorld;

struct IwWorld { // PlaceHolder Structure
};

typedef struct RegisterManager RegisterManager, *PRegisterManager;

struct RegisterManager { // PlaceHolder Structure
};

typedef struct IIngameOverlay IIngameOverlay, *PIIngameOverlay;

struct IIngameOverlay { // PlaceHolder Structure
};

typedef struct WorldManager WorldManager, *PWorldManager;

struct WorldManager { // PlaceHolder Structure
};

typedef struct InputLuaBinder InputLuaBinder, *PInputLuaBinder;

struct InputLuaBinder { // PlaceHolder Structure
};

typedef struct RunwayDirection RunwayDirection, *PRunwayDirection;

struct RunwayDirection { // PlaceHolder Structure
};

typedef struct wAircraftGunMount wAircraftGunMount, *PwAircraftGunMount;

struct wAircraftGunMount { // PlaceHolder Structure
};

typedef struct wAmmunitionDescriptor wAmmunitionDescriptor, *PwAmmunitionDescriptor;

struct wAmmunitionDescriptor { // PlaceHolder Structure
};

typedef struct cPointerTemplate<MovingObject> cPointerTemplate<MovingObject>, *PcPointerTemplate<MovingObject>;

struct cPointerTemplate<MovingObject> { // PlaceHolder Structure
};

typedef struct GaussProcess GaussProcess, *PGaussProcess;

struct GaussProcess { // PlaceHolder Structure
};

typedef struct WorldPlugin WorldPlugin, *PWorldPlugin;

struct WorldPlugin { // PlaceHolder Structure
};

typedef struct viObjectNode viObjectNode, *PviObjectNode;

struct viObjectNode { // PlaceHolder Structure
};

typedef struct RandomObject RandomObject, *PRandomObject;

struct RandomObject { // PlaceHolder Structure
};

typedef struct IwWorldIFF IwWorldIFF, *PIwWorldIFF;

struct IwWorldIFF { // PlaceHolder Structure
};

typedef struct IExternalCargo IExternalCargo, *PIExternalCargo;

struct IExternalCargo { // PlaceHolder Structure
};

typedef struct IWing IWing, *PIWing;

struct IWing { // PlaceHolder Structure
};

typedef struct FEDS_point FEDS_point, *PFEDS_point;

struct FEDS_point { // PlaceHolder Structure
};

typedef struct wPosition3<float> wPosition3<float>, *PwPosition3<float>;

struct wPosition3<float> { // PlaceHolder Structure
};

typedef struct Ammo Ammo, *PAmmo;

struct Ammo { // PlaceHolder Structure
};

typedef struct ICockpitMT ICockpitMT, *PICockpitMT;

struct ICockpitMT { // PlaceHolder Structure
};

typedef struct DataGuidanceInfo DataGuidanceInfo, *PDataGuidanceInfo;

struct DataGuidanceInfo { // PlaceHolder Structure
};

typedef struct Rocket_Const Rocket_Const, *PRocket_Const;

struct Rocket_Const { // PlaceHolder Structure
};

typedef struct IMeteoDispatcher IMeteoDispatcher, *PIMeteoDispatcher;

struct IMeteoDispatcher { // PlaceHolder Structure
};

typedef struct wBombSight wBombSight, *PwBombSight;

struct wBombSight { // PlaceHolder Structure
};

typedef struct SatelliteStorage SatelliteStorage, *PSatelliteStorage;

struct SatelliteStorage { // PlaceHolder Structure
};

typedef struct AircraftTransponderInfo AircraftTransponderInfo, *PAircraftTransponderInfo;

struct AircraftTransponderInfo { // PlaceHolder Structure
};

typedef struct wAmmunitionGuided wAmmunitionGuided, *PwAmmunitionGuided;

struct wAmmunitionGuided { // PlaceHolder Structure
};

typedef struct wBombSightAdv wBombSightAdv, *PwBombSightAdv;

struct wBombSightAdv { // PlaceHolder Structure
};

typedef struct MouseLocker MouseLocker, *PMouseLocker;

struct MouseLocker { // PlaceHolder Structure
};

typedef struct wAmmunitionCbu wAmmunitionCbu, *PwAmmunitionCbu;

struct wAmmunitionCbu { // PlaceHolder Structure
};

typedef struct wsPlaneJump wsPlaneJump, *PwsPlaneJump;

struct wsPlaneJump { // PlaceHolder Structure
};

typedef struct wCommunicator wCommunicator, *PwCommunicator;

struct wCommunicator { // PlaceHolder Structure
};

typedef struct waPartsPhysics waPartsPhysics, *PwaPartsPhysics;

struct waPartsPhysics { // PlaceHolder Structure
};

typedef struct MirrorRenderParams MirrorRenderParams, *PMirrorRenderParams;

struct MirrorRenderParams { // PlaceHolder Structure
};

typedef struct ILabels ILabels, *PILabels;

struct ILabels { // PlaceHolder Structure
};

typedef struct ReceiverDesc ReceiverDesc, *PReceiverDesc;

struct ReceiverDesc { // PlaceHolder Structure
};

typedef struct DlinkNetSendTransiverStatusCmn DlinkNetSendTransiverStatusCmn, *PDlinkNetSendTransiverStatusCmn;

struct DlinkNetSendTransiverStatusCmn { // PlaceHolder Structure
};

typedef struct viSearch viSearch, *PviSearch;

struct viSearch { // PlaceHolder Structure
};

typedef struct WorldPluginManager WorldPluginManager, *PWorldPluginManager;

struct WorldPluginManager { // PlaceHolder Structure
};

typedef struct wSimulationSystem wSimulationSystem, *PwSimulationSystem;

struct wSimulationSystem { // PlaceHolder Structure
};

typedef struct IcClickable IcClickable, *PIcClickable;

struct IcClickable { // PlaceHolder Structure
};

typedef enum DatalinkTypes {
} DatalinkTypes;

typedef struct IWorldNet IWorldNet, *PIWorldNet;

struct IWorldNet { // PlaceHolder Structure
};

typedef struct wDetectorInfo wDetectorInfo, *PwDetectorInfo;

struct wDetectorInfo { // PlaceHolder Structure
};

typedef struct SceneObject SceneObject, *PSceneObject;

struct SceneObject { // PlaceHolder Structure
};

typedef struct Itrigger Itrigger, *PItrigger;

struct Itrigger { // PlaceHolder Structure
};

typedef struct ActionEntry ActionEntry, *PActionEntry;

struct ActionEntry { // PlaceHolder Structure
};

typedef struct woRunWay woRunWay, *PwoRunWay;

struct woRunWay { // PlaceHolder Structure
};

typedef struct uiBaseFontManager uiBaseFontManager, *PuiBaseFontManager;

struct uiBaseFontManager { // PlaceHolder Structure
};

typedef struct wTime wTime, *PwTime;

struct wTime { // PlaceHolder Structure
};

typedef struct wRadioDevice wRadioDevice, *PwRadioDevice;

struct wRadioDevice { // PlaceHolder Structure
};

typedef struct wDatalinkCommunicator wDatalinkCommunicator, *PwDatalinkCommunicator;

struct wDatalinkCommunicator { // PlaceHolder Structure
};

typedef struct wsInitData wsInitData, *PwsInitData;

struct wsInitData { // PlaceHolder Structure
};

typedef struct MouseCursorManager MouseCursorManager, *PMouseCursorManager;

struct MouseCursorManager { // PlaceHolder Structure
};

typedef struct wTargetDetectionStatus wTargetDetectionStatus, *PwTargetDetectionStatus;

struct wTargetDetectionStatus { // PlaceHolder Structure
};

typedef struct wNURSSight wNURSSight, *PwNURSSight;

struct wNURSSight { // PlaceHolder Structure
};

typedef enum AllocType {
} AllocType;

typedef struct ActionDispatcher ActionDispatcher, *PActionDispatcher;

struct ActionDispatcher { // PlaceHolder Structure
};

typedef struct wWeaponSystemManager wWeaponSystemManager, *PwWeaponSystemManager;

struct wWeaponSystemManager { // PlaceHolder Structure
};

typedef struct MouseCursorOwner MouseCursorOwner, *PMouseCursorOwner;

struct MouseCursorOwner { // PlaceHolder Structure
};

typedef struct ImPlotPoint ImPlotPoint, *PImPlotPoint;

struct ImPlotPoint { // PlaceHolder Structure
};

typedef struct wDetector wDetector, *PwDetector;

struct wDetector { // PlaceHolder Structure
};

typedef struct wControl wControl, *PwControl;

struct wControl { // PlaceHolder Structure
};

typedef struct uiBaseRenderer uiBaseRenderer, *PuiBaseRenderer;

struct uiBaseRenderer { // PlaceHolder Structure
};

typedef struct AlmanacGPS AlmanacGPS, *PAlmanacGPS;

struct AlmanacGPS { // PlaceHolder Structure
};

typedef struct wsType wsType, *PwsType;

struct wsType { // PlaceHolder Structure
};

typedef struct wTransiverOwner wTransiverOwner, *PwTransiverOwner;

struct wTransiverOwner { // PlaceHolder Structure
};

typedef struct Aircraft_Descriptor Aircraft_Descriptor, *PAircraft_Descriptor;

struct Aircraft_Descriptor { // PlaceHolder Structure
};

typedef struct IwHumanPayload IwHumanPayload, *PIwHumanPayload;

struct IwHumanPayload { // PlaceHolder Structure
};

typedef struct Waypoint Waypoint, *PWaypoint;

struct Waypoint { // PlaceHolder Structure
};

typedef enum ActionOrigin {
} ActionOrigin;

typedef struct ICommandDialogsPanel ICommandDialogsPanel, *PICommandDialogsPanel;

struct ICommandDialogsPanel { // PlaceHolder Structure
};

typedef struct TimedActionBuffer TimedActionBuffer, *PTimedActionBuffer;

struct TimedActionBuffer { // PlaceHolder Structure
};

typedef struct uiBaseFont uiBaseFont, *PuiBaseFont;

struct uiBaseFont { // PlaceHolder Structure
};

typedef struct IFFresponse IFFresponse, *PIFFresponse;

struct IFFresponse { // PlaceHolder Structure
};

typedef struct ImDrawList ImDrawList, *PImDrawList;

struct ImDrawList { // PlaceHolder Structure
};

typedef struct viObjectManager viObjectManager, *PviObjectManager;

struct viObjectManager { // PlaceHolder Structure
};

typedef enum TVScreenCondition {
} TVScreenCondition;

typedef enum wcCoalitionName {
} wcCoalitionName;

typedef enum wIFFtype {
} wIFFtype;

typedef struct CSignalInfo CSignalInfo, *PCSignalInfo;

struct CSignalInfo { // PlaceHolder Structure
};

typedef struct Vec2i Vec2i, *PVec2i;

struct Vec2i { // PlaceHolder Structure
};

typedef struct BoundingBoxImpl<class_osg::Vec3f> BoundingBoxImpl<class_osg::Vec3f>, *PBoundingBoxImpl<class_osg::Vec3f>;

struct BoundingBoxImpl<class_osg::Vec3f> { // PlaceHolder Structure
};

typedef struct Vec2f Vec2f, *PVec2f;

struct Vec2f { // PlaceHolder Structure
};

typedef struct Vec3f Vec3f, *PVec3f;

struct Vec3f { // PlaceHolder Structure
};

typedef struct Vec2d Vec2d, *PVec2d;

struct Vec2d { // PlaceHolder Structure
};

typedef struct Vec4f Vec4f, *PVec4f;

struct Vec4f { // PlaceHolder Structure
};

typedef struct Vec3d Vec3d, *PVec3d;

struct Vec3d { // PlaceHolder Structure
};

typedef struct Matrixd Matrixd, *PMatrixd;

struct Matrixd { // PlaceHolder Structure
};

typedef struct BoundingBoxImpl<osg::Vec3f> BoundingBoxImpl<osg::Vec3f>, *PBoundingBoxImpl<osg::Vec3f>;

struct BoundingBoxImpl<osg::Vec3f> { // PlaceHolder Structure
};

typedef struct IVoiceChat IVoiceChat, *PIVoiceChat;

struct IVoiceChat { // PlaceHolder Structure
};

typedef struct Measurement Measurement, *PMeasurement;

struct Measurement { // PlaceHolder Structure
};

typedef struct ILS_Deviation ILS_Deviation, *PILS_Deviation;

struct ILS_Deviation { // PlaceHolder Structure
};

typedef struct Receiver Receiver, *PReceiver;

struct Receiver { // PlaceHolder Structure
};

typedef struct CheckSignal CheckSignal, *PCheckSignal;

struct CheckSignal { // PlaceHolder Structure
};

typedef struct Functor Functor, *PFunctor;

struct Functor { // PlaceHolder Structure
};

typedef struct Range Range, *PRange;

struct Range { // PlaceHolder Structure
};

typedef struct Simple Simple, *PSimple;

struct Simple { // PlaceHolder Structure
};

typedef struct MagneticBearing MagneticBearing, *PMagneticBearing;

struct MagneticBearing { // PlaceHolder Structure
};

typedef struct BackAzimuth BackAzimuth, *PBackAzimuth;

struct BackAzimuth { // PlaceHolder Structure
};

typedef struct BackElevation BackElevation, *PBackElevation;

struct BackElevation { // PlaceHolder Structure
};

typedef struct Polar Polar, *PPolar;

struct Polar { // PlaceHolder Structure
};

typedef struct Matrix<3,double> Matrix<3,double>, *PMatrix<3,double>;

struct Matrix<3,double> { // PlaceHolder Structure
};

typedef struct Matrix<2,double> Matrix<2,double>, *PMatrix<2,double>;

struct Matrix<2,double> { // PlaceHolder Structure
};

typedef struct Matrix<4,double> Matrix<4,double>, *PMatrix<4,double>;

struct Matrix<4,double> { // PlaceHolder Structure
};

typedef enum IIR_FilterPrototypes {
} IIR_FilterPrototypes;

typedef struct Rotation3<double> Rotation3<double>, *PRotation3<double>;

struct Rotation3<double> { // PlaceHolder Structure
};

typedef struct PolarNormalized PolarNormalized, *PPolarNormalized;

struct PolarNormalized { // PlaceHolder Structure
};

typedef struct Matrix<3,float> Matrix<3,float>, *PMatrix<3,float>;

struct Matrix<3,float> { // PlaceHolder Structure
};

typedef struct Vector<3,float> Vector<3,float>, *PVector<3,float>;

struct Vector<3,float> { // PlaceHolder Structure
};

typedef struct Matrix<4,float> Matrix<4,float>, *PMatrix<4,float>;

struct Matrix<4,float> { // PlaceHolder Structure
};

typedef struct Matrix<2,float> Matrix<2,float>, *PMatrix<2,float>;

struct Matrix<2,float> { // PlaceHolder Structure
};

typedef struct Vector<3,double> Vector<3,double>, *PVector<3,double>;

struct Vector<3,double> { // PlaceHolder Structure
};

typedef struct Vector<2,double> Vector<2,double>, *PVector<2,double>;

struct Vector<2,double> { // PlaceHolder Structure
};

typedef struct IIR_Filter IIR_Filter, *PIIR_Filter;

struct IIR_Filter { // PlaceHolder Structure
};

typedef struct Rotation3<float> Rotation3<float>, *PRotation3<float>;

struct Rotation3<float> { // PlaceHolder Structure
};

typedef struct ReceivingMessageHandler ReceivingMessageHandler, *PReceivingMessageHandler;

struct ReceivingMessageHandler { // PlaceHolder Structure
};

typedef struct AI_Gunner AI_Gunner, *PAI_Gunner;

struct AI_Gunner { // PlaceHolder Structure
};

typedef enum AI_Burst {
} AI_Burst;

typedef struct ISightAI ISightAI, *PISightAI;

struct ISightAI { // PlaceHolder Structure
};

typedef enum AI_ROE {
} AI_ROE;

typedef struct _ExceptionHolder _ExceptionHolder, *P_ExceptionHolder;

struct _ExceptionHolder { // PlaceHolder Structure
};

typedef enum MechanismTargetStates {
} MechanismTargetStates;

typedef enum Mechanisms {
} Mechanisms;

typedef struct CallTiming CallTiming, *PCallTiming;

struct CallTiming { // PlaceHolder Structure
};

typedef struct Config Config, *PConfig;

struct Config { // PlaceHolder Structure
};

typedef struct CheckedLoader CheckedLoader, *PCheckedLoader;

struct CheckedLoader { // PlaceHolder Structure
};

typedef struct SlipBall SlipBall, *PSlipBall;

struct SlipBall { // PlaceHolder Structure
};

typedef struct AerodyneFM AerodyneFM, *PAerodyneFM;

struct AerodyneFM { // PlaceHolder Structure
};

typedef struct DynamicBody DynamicBody, *PDynamicBody;

struct DynamicBody { // PlaceHolder Structure
};

typedef struct ProbabilityChecker ProbabilityChecker, *PProbabilityChecker;

struct ProbabilityChecker { // PlaceHolder Structure
};

typedef struct EffectManager EffectManager, *PEffectManager;

struct EffectManager { // PlaceHolder Structure
};

typedef struct Relay Relay, *PRelay;

struct Relay { // PlaceHolder Structure
};

typedef struct Consumer Consumer, *PConsumer;

struct Consumer { // PlaceHolder Structure
};

typedef struct Adapter Adapter, *PAdapter;

struct Adapter { // PlaceHolder Structure
};

typedef struct Wire Wire, *PWire;

struct Wire { // PlaceHolder Structure
};

typedef struct VoltageRegulator VoltageRegulator, *PVoltageRegulator;

struct VoltageRegulator { // PlaceHolder Structure
};

typedef struct Source Source, *PSource;

struct Source { // PlaceHolder Structure
};

typedef struct ItemBase ItemBase, *PItemBase;

struct ItemBase { // PlaceHolder Structure
};

typedef struct Switch Switch, *PSwitch;

struct Switch { // PlaceHolder Structure
};

typedef struct Lamp Lamp, *PLamp;

struct Lamp { // PlaceHolder Structure
};

typedef struct ElectricMotorDC ElectricMotorDC, *PElectricMotorDC;

struct ElectricMotorDC { // PlaceHolder Structure
};

typedef struct ConsumerParams ConsumerParams, *PConsumerParams;

struct ConsumerParams { // PlaceHolder Structure
};

typedef struct LampParams LampParams, *PLampParams;

struct LampParams { // PlaceHolder Structure
};

typedef struct MultiThrowSwitch MultiThrowSwitch, *PMultiThrowSwitch;

struct MultiThrowSwitch { // PlaceHolder Structure
};

typedef struct AutoTransferSwitch AutoTransferSwitch, *PAutoTransferSwitch;

struct AutoTransferSwitch { // PlaceHolder Structure
};

typedef enum LoadUnits {
} LoadUnits;

typedef struct Parameters Parameters, *PParameters;

struct Parameters { // PlaceHolder Structure
};

typedef struct HeatBody HeatBody, *PHeatBody;

struct HeatBody { // PlaceHolder Structure
};

typedef struct HeatGroup HeatGroup, *PHeatGroup;

struct HeatGroup { // PlaceHolder Structure
};

typedef struct HeatExchangeManager HeatExchangeManager, *PHeatExchangeManager;

struct HeatExchangeManager { // PlaceHolder Structure
};

typedef struct BodyGroupImpl BodyGroupImpl, *PBodyGroupImpl;

struct BodyGroupImpl { // PlaceHolder Structure
};

typedef struct woLA_LightCollection woLA_LightCollection, *PwoLA_LightCollection;

struct woLA_LightCollection { // PlaceHolder Structure
};

typedef enum Type {
} Type;

typedef struct Place Place, *PPlace;

struct Place { // PlaceHolder Structure
};

typedef struct Action Action, *PAction;

struct Action { // PlaceHolder Structure
};

typedef struct Callback Callback, *PCallback;

struct Callback { // PlaceHolder Structure
};

typedef enum Event {
} Event;

typedef struct ModelCookie ModelCookie, *PModelCookie;

struct ModelCookie { // PlaceHolder Structure
};

typedef struct IModel IModel, *PIModel;

struct IModel { // PlaceHolder Structure
};

typedef struct MissionPackage MissionPackage, *PMissionPackage;

struct MissionPackage { // PlaceHolder Structure
};

typedef struct NetSendTransiverStatus NetSendTransiverStatus, *PNetSendTransiverStatus;

struct NetSendTransiverStatus { // PlaceHolder Structure
};

typedef struct wGun wGun, *PwGun;

struct wGun { // PlaceHolder Structure
};

typedef struct ITextureManager ITextureManager, *PITextureManager;

struct ITextureManager { // PlaceHolder Structure
};

typedef struct IRenderAPI IRenderAPI, *PIRenderAPI;

struct IRenderAPI { // PlaceHolder Structure
};

typedef enum MSAA_ENUM {
} MSAA_ENUM;

typedef struct Texture Texture, *PTexture;

struct Texture { // PlaceHolder Structure
};

typedef struct PostEffect PostEffect, *PPostEffect;

struct PostEffect { // PlaceHolder Structure
};

typedef enum PostEffectType {
} PostEffectType;

typedef struct VR_options VR_options, *PVR_options;

struct VR_options { // PlaceHolder Structure
};

typedef struct avCrewIndicatorBase avCrewIndicatorBase, *PavCrewIndicatorBase;

struct avCrewIndicatorBase { // PlaceHolder Structure
};

typedef struct ceBoundingTexBox ceBoundingTexBox, *PceBoundingTexBox;

struct ceBoundingTexBox { // PlaceHolder Structure
};

typedef struct ccCockpitContext ccCockpitContext, *PccCockpitContext;

struct ccCockpitContext { // PlaceHolder Structure
};

typedef struct ccDrawable_BasicTimer ccDrawable_BasicTimer, *PccDrawable_BasicTimer;

struct ccDrawable_BasicTimer { // PlaceHolder Structure
};

typedef struct avUHF_ARC_164 avUHF_ARC_164, *PavUHF_ARC_164;

struct avUHF_ARC_164 { // PlaceHolder Structure
};

typedef struct frame_info frame_info, *Pframe_info;

struct frame_info { // PlaceHolder Structure
};

typedef enum ImuAlignmentScenarios {
} ImuAlignmentScenarios;

typedef struct GunWeaponCommon GunWeaponCommon, *PGunWeaponCommon;

struct GunWeaponCommon { // PlaceHolder Structure
};

typedef struct GSV_message GSV_message, *PGSV_message;

struct GSV_message { // PlaceHolder Structure
};

typedef struct page_meta page_meta, *Ppage_meta;

struct page_meta { // PlaceHolder Structure
};

typedef struct IavEmbeddedNavigation IavEmbeddedNavigation, *PIavEmbeddedNavigation;

struct IavEmbeddedNavigation { // PlaceHolder Structure
};

typedef struct IavIMU IavIMU, *PIavIMU;

struct IavIMU { // PlaceHolder Structure
};

typedef struct arcade_target_validator arcade_target_validator, *Parcade_target_validator;

struct arcade_target_validator { // PlaceHolder Structure
};

typedef struct ceSCircle ceSCircle, *PceSCircle;

struct ceSCircle { // PlaceHolder Structure
};

typedef struct indicator_geometry indicator_geometry, *Pindicator_geometry;

struct indicator_geometry { // PlaceHolder Structure
};

typedef struct ceHint ceHint, *PceHint;

struct ceHint { // PlaceHolder Structure
};

typedef struct avHelmet avHelmet, *PavHelmet;

struct avHelmet { // PlaceHolder Structure
};

typedef struct acqusition_cache acqusition_cache, *Pacqusition_cache;

struct acqusition_cache { // PlaceHolder Structure
};

typedef struct avBaseIKP avBaseIKP, *PavBaseIKP;

struct avBaseIKP { // PlaceHolder Structure
};

typedef struct avRadio_MAC avRadio_MAC, *PavRadio_MAC;

struct avRadio_MAC { // PlaceHolder Structure
};

typedef struct ceTMultiLine ceTMultiLine, *PceTMultiLine;

struct ceTMultiLine { // PlaceHolder Structure
};

typedef struct MechCockpitFan MechCockpitFan, *PMechCockpitFan;

struct MechCockpitFan { // PlaceHolder Structure
};

typedef struct avNightVisionGoggles avNightVisionGoggles, *PavNightVisionGoggles;

struct avNightVisionGoggles { // PlaceHolder Structure
};

typedef struct avDeviceModeNames avDeviceModeNames, *PavDeviceModeNames;

struct avDeviceModeNames { // PlaceHolder Structure
};

typedef struct FrequencyDial_Model FrequencyDial_Model, *PFrequencyDial_Model;

struct FrequencyDial_Model { // PlaceHolder Structure
};

typedef struct avDamageData avDamageData, *PavDamageData;

struct avDamageData { // PlaceHolder Structure
};

typedef struct avSensorLimits avSensorLimits, *PavSensorLimits;

struct avSensorLimits { // PlaceHolder Structure
};

typedef enum crewman_level_test {
} crewman_level_test;

typedef struct avVHF_ARC_186 avVHF_ARC_186, *PavVHF_ARC_186;

struct avVHF_ARC_186 { // PlaceHolder Structure
};

typedef struct Device_Mode Device_Mode, *PDevice_Mode;

struct Device_Mode { // PlaceHolder Structure
};

typedef struct SimpleOctTreeNodePreferences SimpleOctTreeNodePreferences, *PSimpleOctTreeNodePreferences;

struct SimpleOctTreeNodePreferences { // PlaceHolder Structure
};

typedef struct avSimpleElectricSystem avSimpleElectricSystem, *PavSimpleElectricSystem;

struct avSimpleElectricSystem { // PlaceHolder Structure
};

typedef struct ccSound ccSound, *PccSound;

struct ccSound { // PlaceHolder Structure
};

typedef struct avDirectionalGyro_AN5735 avDirectionalGyro_AN5735, *PavDirectionalGyro_AN5735;

struct avDirectionalGyro_AN5735 { // PlaceHolder Structure
};

typedef struct ceHWLine ceHWLine, *PceHWLine;

struct ceHWLine { // PlaceHolder Structure
};

typedef struct ceSimple ceSimple, *PceSimple;

struct ceSimple { // PlaceHolder Structure
};

typedef struct ceHWSector ceHWSector, *PceHWSector;

struct ceHWSector { // PlaceHolder Structure
};

typedef struct avILS_AN_ARN108 avILS_AN_ARN108, *PavILS_AN_ARN108;

struct avILS_AN_ARN108 { // PlaceHolder Structure
};

typedef struct avSimpleAirspeedIndicator avSimpleAirspeedIndicator, *PavSimpleAirspeedIndicator;

struct avSimpleAirspeedIndicator { // PlaceHolder Structure
};

typedef struct ccChart ccChart, *PccChart;

struct ccChart { // PlaceHolder Structure
};

typedef struct view_changes view_changes, *Pview_changes;

struct view_changes { // PlaceHolder Structure
};

typedef struct ceSVarLenLine ceSVarLenLine, *PceSVarLenLine;

struct ceSVarLenLine { // PlaceHolder Structure
};

typedef struct GaugeOrient GaugeOrient, *PGaugeOrient;

struct GaugeOrient { // PlaceHolder Structure
};

typedef struct genericCommandReceiver genericCommandReceiver, *PgenericCommandReceiver;

struct genericCommandReceiver { // PlaceHolder Structure
};

typedef struct avAChS_1 avAChS_1, *PavAChS_1;

struct avAChS_1 { // PlaceHolder Structure
};

typedef struct avMotor avMotor, *PavMotor;

struct avMotor { // PlaceHolder Structure
};

typedef struct avIntercom_FC avIntercom_FC, *PavIntercom_FC;

struct avIntercom_FC { // PlaceHolder Structure
};

typedef struct scan_contact scan_contact, *Pscan_contact;

struct scan_contact { // PlaceHolder Structure
};

typedef enum radar_work_mode {
} radar_work_mode;

typedef struct trail<class_osg::Vec3f> trail<class_osg::Vec3f>, *Ptrail<class_osg::Vec3f>;

struct trail<class_osg::Vec3f> { // PlaceHolder Structure
};

typedef struct avVHF_ARC_186v2 avVHF_ARC_186v2, *PavVHF_ARC_186v2;

struct avVHF_ARC_186v2 { // PlaceHolder Structure
};

typedef struct SimpleGyroSight SimpleGyroSight, *PSimpleGyroSight;

struct SimpleGyroSight { // PlaceHolder Structure
};

typedef struct avSimpleRWR avSimpleRWR, *PavSimpleRWR;

struct avSimpleRWR { // PlaceHolder Structure
};

typedef struct avMLWS avMLWS, *PavMLWS;

struct avMLWS { // PlaceHolder Structure
};

typedef struct avBaseASP_3 avBaseASP_3, *PavBaseASP_3;

struct avBaseASP_3 { // PlaceHolder Structure
};

typedef struct GunHeatProxyModelDesc3 GunHeatProxyModelDesc3, *PGunHeatProxyModelDesc3;

struct GunHeatProxyModelDesc3 { // PlaceHolder Structure
};

typedef struct MWS_Threat MWS_Threat, *PMWS_Threat;

struct MWS_Threat { // PlaceHolder Structure
};

typedef struct ccIndicator ccIndicator, *PccIndicator;

struct ccIndicator { // PlaceHolder Structure
};

typedef struct avDefaultLuaRadio avDefaultLuaRadio, *PavDefaultLuaRadio;

struct avDefaultLuaRadio { // PlaceHolder Structure
};

typedef struct clickableElementActionData clickableElementActionData, *PclickableElementActionData;

struct clickableElementActionData { // PlaceHolder Structure
};

typedef struct external_light_controller external_light_controller, *Pexternal_light_controller;

struct external_light_controller { // PlaceHolder Structure
};

typedef struct SimpleOctTree_check_object SimpleOctTree_check_object, *PSimpleOctTree_check_object;

struct SimpleOctTree_check_object { // PlaceHolder Structure
};

typedef struct MLWS_contact MLWS_contact, *PMLWS_contact;

struct MLWS_contact { // PlaceHolder Structure
};

typedef struct avLaserSpotDetector avLaserSpotDetector, *PavLaserSpotDetector;

struct avLaserSpotDetector { // PlaceHolder Structure
};

typedef struct GyroPowerSource GyroPowerSource, *PGyroPowerSource;

struct GyroPowerSource { // PlaceHolder Structure
};

typedef struct avMotor_Additive avMotor_Additive, *PavMotor_Additive;

struct avMotor_Additive { // PlaceHolder Structure
};

typedef struct limits<double> limits<double>, *Plimits<double>;

struct limits<double> { // PlaceHolder Structure
};

typedef struct FreqRange FreqRange, *PFreqRange;

struct FreqRange { // PlaceHolder Structure
};

typedef struct ccDrawable ccDrawable, *PccDrawable;

struct ccDrawable { // PlaceHolder Structure
};

typedef struct avActuator avActuator, *PavActuator;

struct avActuator { // PlaceHolder Structure
};

typedef struct avRadarSource avRadarSource, *PavRadarSource;

struct avRadarSource { // PlaceHolder Structure
};

typedef struct DynamicLaunchZone DynamicLaunchZone, *PDynamicLaunchZone;

struct DynamicLaunchZone { // PlaceHolder Structure
};

typedef struct avLuaDevice avLuaDevice, *PavLuaDevice;

struct avLuaDevice { // PlaceHolder Structure
};

typedef struct SounderHolder SounderHolder, *PSounderHolder;

struct SounderHolder { // PlaceHolder Structure
};

typedef struct VTG_message VTG_message, *PVTG_message;

struct VTG_message { // PlaceHolder Structure
};

typedef struct avCommunicator avCommunicator, *PavCommunicator;

struct avCommunicator { // PlaceHolder Structure
};

typedef struct avSatelliteSystemStatus avSatelliteSystemStatus, *PavSatelliteSystemStatus;

struct avSatelliteSystemStatus { // PlaceHolder Structure
};

typedef struct GyroSound GyroSound, *PGyroSound;

struct GyroSound { // PlaceHolder Structure
};

typedef struct avSensorEye avSensorEye, *PavSensorEye;

struct avSensorEye { // PlaceHolder Structure
};

typedef struct kneeboard_map_page kneeboard_map_page, *Pkneeboard_map_page;

struct kneeboard_map_page { // PlaceHolder Structure
};

typedef struct ccK14GunSight ccK14GunSight, *PccK14GunSight;

struct ccK14GunSight { // PlaceHolder Structure
};

typedef struct ccEkranIndicator ccEkranIndicator, *PccEkranIndicator;

struct ccEkranIndicator { // PlaceHolder Structure
};

typedef struct ceStringSLineOutlined ceStringSLineOutlined, *PceStringSLineOutlined;

struct ceStringSLineOutlined { // PlaceHolder Structure
};

typedef struct SightingData SightingData, *PSightingData;

struct SightingData { // PlaceHolder Structure
};

typedef struct GSA_message GSA_message, *PGSA_message;

struct GSA_message { // PlaceHolder Structure
};

typedef struct avMechCompass avMechCompass, *PavMechCompass;

struct avMechCompass { // PlaceHolder Structure
};

typedef struct ccMainPanelAccessor ccMainPanelAccessor, *PccMainPanelAccessor;

struct ccMainPanelAccessor { // PlaceHolder Structure
};

typedef struct avRWRradarParams avRWRradarParams, *PavRWRradarParams;

struct avRWRradarParams { // PlaceHolder Structure
};

typedef struct avAPN_209 avAPN_209, *PavAPN_209;

struct avAPN_209 { // PlaceHolder Structure
};

typedef struct avSNSchannelStatus avSNSchannelStatus, *PavSNSchannelStatus;

struct avSNSchannelStatus { // PlaceHolder Structure
};

typedef enum ADF_Range {
} ADF_Range;

typedef struct ccKneeboard ccKneeboard, *PccKneeboard;

struct ccKneeboard { // PlaceHolder Structure
};

typedef struct detect_status detect_status, *Pdetect_status;

struct detect_status { // PlaceHolder Structure
};

typedef struct scan_pattern_data scan_pattern_data, *Pscan_pattern_data;

struct scan_pattern_data { // PlaceHolder Structure
};

typedef struct avSNS_GPS_GNSS_Listener avSNS_GPS_GNSS_Listener, *PavSNS_GPS_GNSS_Listener;

struct avSNS_GPS_GNSS_Listener { // PlaceHolder Structure
};

typedef struct indicator_viewport indicator_viewport, *Pindicator_viewport;

struct indicator_viewport { // PlaceHolder Structure
};

typedef struct avHideChecker avHideChecker, *PavHideChecker;

struct avHideChecker { // PlaceHolder Structure
};

typedef struct search_item search_item, *Psearch_item;

struct search_item { // PlaceHolder Structure
};

typedef struct gauge_input_adapter gauge_input_adapter, *Pgauge_input_adapter;

struct gauge_input_adapter { // PlaceHolder Structure
};

typedef struct sensor_frame sensor_frame, *Psensor_frame;

struct sensor_frame { // PlaceHolder Structure
};

typedef struct ceMeshPoly ceMeshPoly, *PceMeshPoly;

struct ceMeshPoly { // PlaceHolder Structure
};

typedef struct ccAIHelperBase ccAIHelperBase, *PccAIHelperBase;

struct ccAIHelperBase { // PlaceHolder Structure
};

typedef struct fictional_value fictional_value, *Pfictional_value;

struct fictional_value { // PlaceHolder Structure
};

typedef enum AlignGrade {
} AlignGrade;

typedef struct ceSimpleLineObject ceSimpleLineObject, *PceSimpleLineObject;

struct ceSimpleLineObject { // PlaceHolder Structure
};

typedef struct ceSMultiLine ceSMultiLine, *PceSMultiLine;

struct ceSMultiLine { // PlaceHolder Structure
};

typedef struct avPadlock avPadlock, *PavPadlock;

struct avPadlock { // PlaceHolder Structure
};

typedef struct avSimpleRadar avSimpleRadar, *PavSimpleRadar;

struct avSimpleRadar { // PlaceHolder Structure
};

typedef struct avDevice avDevice, *PavDevice;

struct avDevice { // PlaceHolder Structure
};

typedef struct ceCircle ceCircle, *PceCircle;

struct ceCircle { // PlaceHolder Structure
};

typedef enum enum_GPS_Range_Measure_Method {
} enum_GPS_Range_Measure_Method;

typedef struct CustomTumbSound CustomTumbSound, *PCustomTumbSound;

struct CustomTumbSound { // PlaceHolder Structure
};

typedef struct avILS avILS, *PavILS;

struct avILS { // PlaceHolder Structure
};

typedef struct ceBoundingMeshBox ceBoundingMeshBox, *PceBoundingMeshBox;

struct ceBoundingMeshBox { // PlaceHolder Structure
};

typedef struct avSimpleWeaponSystem avSimpleWeaponSystem, *PavSimpleWeaponSystem;

struct avSimpleWeaponSystem { // PlaceHolder Structure
};

typedef struct avA11Clock avA11Clock, *PavA11Clock;

struct avA11Clock { // PlaceHolder Structure
};

typedef struct GunHeatProxy3 GunHeatProxy3, *PGunHeatProxy3;

struct GunHeatProxy3 { // PlaceHolder Structure
};

typedef struct ceGeometryClone ceGeometryClone, *PceGeometryClone;

struct ceGeometryClone { // PlaceHolder Structure
};

typedef struct GaugeBias GaugeBias, *PGaugeBias;

struct GaugeBias { // PlaceHolder Structure
};

typedef struct Element Element, *PElement;

struct Element { // PlaceHolder Structure
};

typedef struct indicationMaterialCreationData indicationMaterialCreationData, *PindicationMaterialCreationData;

struct indicationMaterialCreationData { // PlaceHolder Structure
};

typedef struct avBasicSensor avBasicSensor, *PavBasicSensor;

struct avBasicSensor { // PlaceHolder Structure
};

typedef struct avDate avDate, *PavDate;

struct avDate { // PlaceHolder Structure
};

typedef struct ccCrewIndicatorBase ccCrewIndicatorBase, *PccCrewIndicatorBase;

struct ccCrewIndicatorBase { // PlaceHolder Structure
};

typedef struct avGregorianDate avGregorianDate, *PavGregorianDate;

struct avGregorianDate { // PlaceHolder Structure
};

typedef struct ZDA_message ZDA_message, *PZDA_message;

struct ZDA_message { // PlaceHolder Structure
};

typedef struct RepeaterData RepeaterData, *PRepeaterData;

struct RepeaterData { // PlaceHolder Structure
};

typedef struct avSimpleMachIndicator avSimpleMachIndicator, *PavSimpleMachIndicator;

struct avSimpleMachIndicator { // PlaceHolder Structure
};

typedef struct RWR_Emitter RWR_Emitter, *PRWR_Emitter;

struct RWR_Emitter { // PlaceHolder Structure
};

typedef struct avKneeboard avKneeboard, *PavKneeboard;

struct avKneeboard { // PlaceHolder Structure
};

typedef enum IndBakePostEff {
} IndBakePostEff;

typedef union fictional_value.conflict fictional_value.conflict, *Pfictional_value.conflict;

union fictional_value.conflict {
};

typedef struct SimpleOctTreeNode SimpleOctTreeNode, *PSimpleOctTreeNode;

struct SimpleOctTreeNode { // PlaceHolder Structure
};

typedef struct trail<osg::Vec3f> trail<osg::Vec3f>, *Ptrail<osg::Vec3f>;

struct trail<osg::Vec3f> { // PlaceHolder Structure
};

typedef enum chart_abscissa_source {
} chart_abscissa_source;

typedef struct SNSinterface SNSinterface, *PSNSinterface;

struct SNSinterface { // PlaceHolder Structure
};

typedef struct avAirDrivenTurnIndicator avAirDrivenTurnIndicator, *PavAirDrivenTurnIndicator;

struct avAirDrivenTurnIndicator { // PlaceHolder Structure
};

typedef struct avExternalCargoSpeech avExternalCargoSpeech, *PavExternalCargoSpeech;

struct avExternalCargoSpeech { // PlaceHolder Structure
};

typedef struct avNightVisionGogglesV2 avNightVisionGogglesV2, *PavNightVisionGogglesV2;

struct avNightVisionGogglesV2 { // PlaceHolder Structure
};

typedef enum NavMods_MAC {
} NavMods_MAC;

typedef struct avNavigation_FC avNavigation_FC, *PavNavigation_FC;

struct avNavigation_FC { // PlaceHolder Structure
};

typedef struct avK14GunSight avK14GunSight, *PavK14GunSight;

struct avK14GunSight { // PlaceHolder Structure
};

typedef struct ccMainPanel ccMainPanel, *PccMainPanel;

struct ccMainPanel { // PlaceHolder Structure
};

typedef struct avTACAN_ARN118_CtrlPanel avTACAN_ARN118_CtrlPanel, *PavTACAN_ARN118_CtrlPanel;

struct avTACAN_ARN118_CtrlPanel { // PlaceHolder Structure
};

typedef struct avRemoteCompass_AN5730 avRemoteCompass_AN5730, *PavRemoteCompass_AN5730;

struct avRemoteCompass_AN5730 { // PlaceHolder Structure
};

typedef struct LaserGuidedWeaponState LaserGuidedWeaponState, *PLaserGuidedWeaponState;

struct LaserGuidedWeaponState { // PlaceHolder Structure
};

typedef struct avInitData avInitData, *PavInitData;

struct avInitData { // PlaceHolder Structure
};

typedef struct bakeDeclareData bakeDeclareData, *PbakeDeclareData;

struct bakeDeclareData { // PlaceHolder Structure
};

typedef struct ceTexPoly ceTexPoly, *PceTexPoly;

struct ceTexPoly { // PlaceHolder Structure
};

typedef struct avIntercom avIntercom, *PavIntercom;

struct avIntercom { // PlaceHolder Structure
};

typedef struct avSatelliteInfo avSatelliteInfo, *PavSatelliteInfo;

struct avSatelliteInfo { // PlaceHolder Structure
};

typedef struct range_result range_result, *Prange_result;

struct range_result { // PlaceHolder Structure
};

typedef struct avRadio_FC avRadio_FC, *PavRadio_FC;

struct avRadio_FC { // PlaceHolder Structure
};

typedef struct avAutostartDevice avAutostartDevice, *PavAutostartDevice;

struct avAutostartDevice { // PlaceHolder Structure
};

typedef enum enum_MissilesLock {
} enum_MissilesLock;

typedef struct avNavigation_MAC avNavigation_MAC, *PavNavigation_MAC;

struct avNavigation_MAC { // PlaceHolder Structure
};

typedef struct track_simulation track_simulation, *Ptrack_simulation;

struct track_simulation { // PlaceHolder Structure
};

typedef struct opacity_material opacity_material, *Popacity_material;

struct opacity_material { // PlaceHolder Structure
};

typedef struct avArcadeTargetSelector avArcadeTargetSelector, *PavArcadeTargetSelector;

struct avArcadeTargetSelector { // PlaceHolder Structure
};

typedef struct avSimpleRadarTimer avSimpleRadarTimer, *PavSimpleRadarTimer;

struct avSimpleRadarTimer { // PlaceHolder Structure
};

typedef struct avTelephone avTelephone, *PavTelephone;

struct avTelephone { // PlaceHolder Structure
};

typedef enum CargoViewPos {
} CargoViewPos;

typedef struct avSNSSettings avSNSSettings, *PavSNSSettings;

struct avSNSSettings { // PlaceHolder Structure
};

typedef enum ImuValidityFlag {
} ImuValidityFlag;

typedef struct ccStreamingHelp ccStreamingHelp, *PccStreamingHelp;

struct ccStreamingHelp { // PlaceHolder Structure
};

typedef struct avIntercom_MAC avIntercom_MAC, *PavIntercom_MAC;

struct avIntercom_MAC { // PlaceHolder Structure
};

typedef struct avSimpleVariometer avSimpleVariometer, *PavSimpleVariometer;

struct avSimpleVariometer { // PlaceHolder Structure
};

typedef enum TGP_STATUS {
} TGP_STATUS;

typedef struct ccControlsIndicatorBase ccControlsIndicatorBase, *PccControlsIndicatorBase;

struct ccControlsIndicatorBase { // PlaceHolder Structure
};

typedef struct ccIndicationRenderParser ccIndicationRenderParser, *PccIndicationRenderParser;

struct ccIndicationRenderParser { // PlaceHolder Structure
};

typedef enum IGLA_STATUS {
} IGLA_STATUS;

typedef enum enum_satellites_qty_type {
} enum_satellites_qty_type;

typedef struct ceStringPoly ceStringPoly, *PceStringPoly;

struct ceStringPoly { // PlaceHolder Structure
};

typedef struct avTrackData avTrackData, *PavTrackData;

struct avTrackData { // PlaceHolder Structure
};

typedef struct avEkranMessage avEkranMessage, *PavEkranMessage;

struct avEkranMessage { // PlaceHolder Structure
};

typedef struct avArtificialHorizont_AN5736 avArtificialHorizont_AN5736, *PavArtificialHorizont_AN5736;

struct avArtificialHorizont_AN5736 { // PlaceHolder Structure
};

typedef struct avUHF_ARC_164v2 avUHF_ARC_164v2, *PavUHF_ARC_164v2;

struct avUHF_ARC_164v2 { // PlaceHolder Structure
};

typedef struct avSimpleAltimeter avSimpleAltimeter, *PavSimpleAltimeter;

struct avSimpleAltimeter { // PlaceHolder Structure
};

typedef struct ccPanelEffect ccPanelEffect, *PccPanelEffect;

struct ccPanelEffect { // PlaceHolder Structure
};

typedef enum avDNS_modes {
} avDNS_modes;

typedef struct indicators_keeper indicators_keeper, *Pindicators_keeper;

struct indicators_keeper { // PlaceHolder Structure
};

typedef struct ccBaseASP_3 ccBaseASP_3, *PccBaseASP_3;

struct ccBaseASP_3 { // PlaceHolder Structure
};

typedef struct ccArcadeRadar ccArcadeRadar, *PccArcadeRadar;

struct ccArcadeRadar { // PlaceHolder Structure
};

typedef struct avABU11Clock avABU11Clock, *PavABU11Clock;

struct avABU11Clock { // PlaceHolder Structure
};

typedef struct avIntercomV2 avIntercomV2, *PavIntercomV2;

struct avIntercomV2 { // PlaceHolder Structure
};

typedef struct avADI avADI, *PavADI;

struct avADI { // PlaceHolder Structure
};

typedef struct SimpleOctTree SimpleOctTree, *PSimpleOctTree;

struct SimpleOctTree { // PlaceHolder Structure
};

typedef struct VR_capture_holder VR_capture_holder, *PVR_capture_holder;

struct VR_capture_holder { // PlaceHolder Structure
};

typedef struct ccPrivateChart ccPrivateChart, *PccPrivateChart;

struct ccPrivateChart { // PlaceHolder Structure
};

typedef struct devices_keeper devices_keeper, *Pdevices_keeper;

struct devices_keeper { // PlaceHolder Structure
};

typedef enum ClickState {
} ClickState;

typedef enum sharedStatesEnum {
} sharedStatesEnum;

typedef struct IffTransceiver IffTransceiver, *PIffTransceiver;

struct IffTransceiver { // PlaceHolder Structure
};

typedef struct avBasicHearingSensitivityInterface avBasicHearingSensitivityInterface, *PavBasicHearingSensitivityInterface;

struct avBasicHearingSensitivityInterface { // PlaceHolder Structure
};

typedef struct avVOR avVOR, *PavVOR;

struct avVOR { // PlaceHolder Structure
};

typedef struct avSNS_GPS_Listener avSNS_GPS_Listener, *PavSNS_GPS_Listener;

struct avSNS_GPS_Listener { // PlaceHolder Structure
};

typedef enum enum_GPS_Using_Frequencies {
} enum_GPS_Using_Frequencies;

typedef struct avIntercomWWII avIntercomWWII, *PavIntercomWWII;

struct avIntercomWWII { // PlaceHolder Structure
};

typedef enum RadioGUI_Type_P {
} RadioGUI_Type_P;

typedef struct state state, *Pstate;

struct state { // PlaceHolder Structure
};

typedef struct AGC AGC, *PAGC;

struct AGC { // PlaceHolder Structure
};

typedef struct LFSignals LFSignals, *PLFSignals;

struct LFSignals { // PlaceHolder Structure
};

typedef struct State State, *PState;

struct State { // PlaceHolder Structure
};

typedef struct SystemStatus SystemStatus, *PSystemStatus;

struct SystemStatus { // PlaceHolder Structure
};

typedef struct ChannelStatus ChannelStatus, *PChannelStatus;

struct ChannelStatus { // PlaceHolder Structure
};

typedef enum UV_26_board {
} UV_26_board;

typedef enum UV_26_modes_of_indication {
} UV_26_modes_of_indication;

typedef struct RadarSig RadarSig, *PRadarSig;

struct RadarSig { // PlaceHolder Structure
};

typedef enum avSPO15_power_level {
} avSPO15_power_level;

typedef enum avSPO15_freq {
} avSPO15_freq;

typedef enum avSPO15_type {
} avSPO15_type;

typedef struct avSPO15Signal avSPO15Signal, *PavSPO15Signal;

struct avSPO15Signal { // PlaceHolder Structure
};

typedef enum eSPO15_sync {
} eSPO15_sync;

typedef enum avSPO15_prf {
} avSPO15_prf;

typedef enum avSPO15_pw {
} avSPO15_pw;

typedef struct SensorsAccuracies SensorsAccuracies, *PSensorsAccuracies;

struct SensorsAccuracies { // PlaceHolder Structure
};

typedef struct UpdateHandler UpdateHandler, *PUpdateHandler;

struct UpdateHandler { // PlaceHolder Structure
};

typedef enum VHF_186_digits {
} VHF_186_digits;

typedef struct event_listener event_listener, *Pevent_listener;

struct event_listener { // PlaceHolder Structure
};

typedef struct double_param_proxy double_param_proxy, *Pdouble_param_proxy;

struct double_param_proxy { // PlaceHolder Structure
};

typedef struct input_listener input_listener, *Pinput_listener;

struct input_listener { // PlaceHolder Structure
};

typedef struct string_param_proxy string_param_proxy, *Pstring_param_proxy;

struct string_param_proxy { // PlaceHolder Structure
};

typedef struct double_lambda_proxy double_lambda_proxy, *Pdouble_lambda_proxy;

struct double_lambda_proxy { // PlaceHolder Structure
};

typedef struct ShaderLineParams ShaderLineParams, *PShaderLineParams;

struct ShaderLineParams { // PlaceHolder Structure
};

typedef enum APN209_Digit {
} APN209_Digit;

typedef struct Coords Coords, *PCoords;

struct Coords { // PlaceHolder Structure
};

typedef struct avNavigationSystem avNavigationSystem, *PavNavigationSystem;

struct avNavigationSystem { // PlaceHolder Structure
};

typedef struct NavigationState NavigationState, *PNavigationState;

struct NavigationState { // PlaceHolder Structure
};

typedef struct NavSystemSettings NavSystemSettings, *PNavSystemSettings;

struct NavSystemSettings { // PlaceHolder Structure
};

typedef enum enum_figure_of_merit {
} enum_figure_of_merit;

typedef enum enum_IMU_generation {
} enum_IMU_generation;

typedef enum IMU_realismGrade {
} IMU_realismGrade;

typedef struct NavSystemINSsettings NavSystemINSsettings, *PNavSystemINSsettings;

struct NavSystemINSsettings { // PlaceHolder Structure
};

typedef struct speechDataSteering speechDataSteering, *PspeechDataSteering;

struct speechDataSteering { // PlaceHolder Structure
};

typedef struct UpdateTimer UpdateTimer, *PUpdateTimer;

struct UpdateTimer { // PlaceHolder Structure
};

typedef struct RadioEntry RadioEntry, *PRadioEntry;

struct RadioEntry { // PlaceHolder Structure
};

typedef struct Preset Preset, *PPreset;

struct Preset { // PlaceHolder Structure
};

typedef enum RADIO_PARAMETERS {
} RADIO_PARAMETERS;

typedef enum RADIO_TYPES {
} RADIO_TYPES;

typedef enum RADIO_CAPABILITIES {
} RADIO_CAPABILITIES;

typedef struct FrequencyRanges FrequencyRanges, *PFrequencyRanges;

struct FrequencyRanges { // PlaceHolder Structure
};

typedef enum RadioGUI_Type {
} RadioGUI_Type;

typedef struct view_adjustment view_adjustment, *Pview_adjustment;

struct view_adjustment { // PlaceHolder Structure
};

typedef enum PilotNumberForHeadControl {
} PilotNumberForHeadControl;

typedef enum ChangeOfLimits {
} ChangeOfLimits;

typedef struct desired_view_adjustment desired_view_adjustment, *Pdesired_view_adjustment;

struct desired_view_adjustment { // PlaceHolder Structure
};

typedef enum RALTIMETER_MODES {
} RALTIMETER_MODES;

typedef enum avIntercom_communicator {
} avIntercom_communicator;

typedef struct vector<cockpit::avSNSchannel,ed::allocator<cockpit::avSNSchannel>_> vector<cockpit::avSNSchannel,ed::allocator<cockpit::avSNSchannel>_>, *Pvector<cockpit::avSNSchannel,ed::allocator<cockpit::avSNSchannel>_>;

struct vector<cockpit::avSNSchannel,ed::allocator<cockpit::avSNSchannel>_> { // PlaceHolder Structure
};

typedef struct array<ed::vector<cockpit::avSPO_15::avSPO15Hit,ed::allocator<cockpit::avSPO_15::avSPO15Hit>_>,16> array<ed::vector<cockpit::avSPO_15::avSPO15Hit,ed::allocator<cockpit::avSPO_15::avSPO15Hit>_>,16>, *Parray<ed::vector<cockpit::avSPO_15::avSPO15Hit,ed::allocator<cockpit::avSPO_15::avSPO15Hit>_>,16>;

struct array<ed::vector<cockpit::avSPO_15::avSPO15Hit,ed::allocator<cockpit::avSPO_15::avSPO15Hit>_>,16> { // PlaceHolder Structure
};

typedef struct vector<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>_>_> vector<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>_>_>, *Pvector<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>_>_>;

struct vector<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,std::pair<double,double>_>,ed::allocator<std::pair<double,std::pair<double,double>_>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::avExternalCargoSpeech::speechDataSteering,ed::allocator<cockpit::avExternalCargoSpeech::speechDataSteering>_> vector<cockpit::avExternalCargoSpeech::speechDataSteering,ed::allocator<cockpit::avExternalCargoSpeech::speechDataSteering>_>, *Pvector<cockpit::avExternalCargoSpeech::speechDataSteering,ed::allocator<cockpit::avExternalCargoSpeech::speechDataSteering>_>;

struct vector<cockpit::avExternalCargoSpeech::speechDataSteering,ed::allocator<cockpit::avExternalCargoSpeech::speechDataSteering>_> { // PlaceHolder Structure
};

typedef struct Ptr<cockpit::clickableElementData,ed::DefaultDeleter> Ptr<cockpit::clickableElementData,ed::DefaultDeleter>, *PPtr<cockpit::clickableElementData,ed::DefaultDeleter>;

struct Ptr<cockpit::clickableElementData,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_> vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_>, *Pvector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_>;

struct vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_> { // PlaceHolder Structure
};

typedef struct vector<osg::Vec2f,ed::allocator<osg::Vec2f>_> vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>, *Pvector<osg::Vec2f,ed::allocator<osg::Vec2f>_>;

struct vector<osg::Vec2f,ed::allocator<osg::Vec2f>_> { // PlaceHolder Structure
};

typedef struct basic_string<char> basic_string<char>, *Pbasic_string<char>;

struct basic_string<char> { // PlaceHolder Structure
};

typedef struct vector<cockpit::ImuAlignmentStepType,ed::allocator<cockpit::ImuAlignmentStepType>_> vector<cockpit::ImuAlignmentStepType,ed::allocator<cockpit::ImuAlignmentStepType>_>, *Pvector<cockpit::ImuAlignmentStepType,ed::allocator<cockpit::ImuAlignmentStepType>_>;

struct vector<cockpit::ImuAlignmentStepType,ed::allocator<cockpit::ImuAlignmentStepType>_> { // PlaceHolder Structure
};

typedef struct list<datalink_msg,ed::allocator<datalink_msg>_> list<datalink_msg,ed::allocator<datalink_msg>_>, *Plist<datalink_msg,ed::allocator<datalink_msg>_>;

struct list<datalink_msg,ed::allocator<datalink_msg>_> { // PlaceHolder Structure
};

typedef struct vector<ed::basic_string<char>,ed::allocator<ed::basic_string<char>_>_> vector<ed::basic_string<char>,ed::allocator<ed::basic_string<char>_>_>, *Pvector<ed::basic_string<char>,ed::allocator<ed::basic_string<char>_>_>;

struct vector<ed::basic_string<char>,ed::allocator<ed::basic_string<char>_>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::GPSKalmanFilterv2::GPSSatData,ed::allocator<cockpit::GPSKalmanFilterv2::GPSSatData>_> vector<cockpit::GPSKalmanFilterv2::GPSSatData,ed::allocator<cockpit::GPSKalmanFilterv2::GPSSatData>_>, *Pvector<cockpit::GPSKalmanFilterv2::GPSSatData,ed::allocator<cockpit::GPSKalmanFilterv2::GPSSatData>_>;

struct vector<cockpit::GPSKalmanFilterv2::GPSSatData,ed::allocator<cockpit::GPSKalmanFilterv2::GPSSatData>_> { // PlaceHolder Structure
};

typedef struct vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_> vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>, *Pvector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>;

struct vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_> { // PlaceHolder Structure
};

typedef struct vector<FrequencyRange,ed::allocator<FrequencyRange>_> vector<FrequencyRange,ed::allocator<FrequencyRange>_>, *Pvector<FrequencyRange,ed::allocator<FrequencyRange>_>;

struct vector<FrequencyRange,ed::allocator<FrequencyRange>_> { // PlaceHolder Structure
};

typedef struct vector<float,ed::allocator128<float>_> vector<float,ed::allocator128<float>_>, *Pvector<float,ed::allocator128<float>_>;

struct vector<float,ed::allocator128<float>_> { // PlaceHolder Structure
};

typedef struct array<std::multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>,16> array<std::multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>,16>, *Parray<std::multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>,16>;

struct array<std::multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>,16> { // PlaceHolder Structure
};

typedef struct Ptr<gunner_AI::IGunHandler,ed::DefaultDeleter> Ptr<gunner_AI::IGunHandler,ed::DefaultDeleter>, *PPtr<gunner_AI::IGunHandler,ed::DefaultDeleter>;

struct Ptr<gunner_AI::IGunHandler,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<cockpit::RWR_Emitter,ed::allocator<cockpit::RWR_Emitter>_> vector<cockpit::RWR_Emitter,ed::allocator<cockpit::RWR_Emitter>_>, *Pvector<cockpit::RWR_Emitter,ed::allocator<cockpit::RWR_Emitter>_>;

struct vector<cockpit::RWR_Emitter,ed::allocator<cockpit::RWR_Emitter>_> { // PlaceHolder Structure
};

typedef struct vector<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>,ed::allocator<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>_>_> vector<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>,ed::allocator<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>_>_>, *Pvector<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>,ed::allocator<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>_>_>;

struct vector<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>,ed::allocator<ed::vector<osg::Vec2f,ed::allocator<osg::Vec2f>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::Element*___ptr64,ed::allocator<cockpit::Element*___ptr64>_> vector<cockpit::Element*___ptr64,ed::allocator<cockpit::Element*___ptr64>_>, *Pvector<cockpit::Element*___ptr64,ed::allocator<cockpit::Element*___ptr64>_>;

struct vector<cockpit::Element*___ptr64,ed::allocator<cockpit::Element*___ptr64>_> { // PlaceHolder Structure
};

typedef struct vector<float,ed::allocator<float>_> vector<float,ed::allocator<float>_>, *Pvector<float,ed::allocator<float>_>;

struct vector<float,ed::allocator<float>_> { // PlaceHolder Structure
};

typedef struct vector<unsigned_int,ed::allocator<unsigned_int>_> vector<unsigned_int,ed::allocator<unsigned_int>_>, *Pvector<unsigned_int,ed::allocator<unsigned_int>_>;

struct vector<unsigned_int,ed::allocator<unsigned_int>_> { // PlaceHolder Structure
};

typedef struct list<wControl*___ptr64,ed::allocator<wControl*___ptr64>_> list<wControl*___ptr64,ed::allocator<wControl*___ptr64>_>, *Plist<wControl*___ptr64,ed::allocator<wControl*___ptr64>_>;

struct list<wControl*___ptr64,ed::allocator<wControl*___ptr64>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::SNSv2::Channel,ed::allocator<cockpit::SNSv2::Channel>_> vector<cockpit::SNSv2::Channel,ed::allocator<cockpit::SNSv2::Channel>_>, *Pvector<cockpit::SNSv2::Channel,ed::allocator<cockpit::SNSv2::Channel>_>;

struct vector<cockpit::SNSv2::Channel,ed::allocator<cockpit::SNSv2::Channel>_> { // PlaceHolder Structure
};

typedef struct vector<osg::Vec3f,ed::allocator<osg::Vec3f>_> vector<osg::Vec3f,ed::allocator<osg::Vec3f>_>, *Pvector<osg::Vec3f,ed::allocator<osg::Vec3f>_>;

struct vector<osg::Vec3f,ed::allocator<osg::Vec3f>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::avEkranMsgProperties,ed::allocator<cockpit::avEkranMsgProperties>_> vector<cockpit::avEkranMsgProperties,ed::allocator<cockpit::avEkranMsgProperties>_>, *Pvector<cockpit::avEkranMsgProperties,ed::allocator<cockpit::avEkranMsgProperties>_>;

struct vector<cockpit::avEkranMsgProperties,ed::allocator<cockpit::avEkranMsgProperties>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::SNSv2::ChannelStatus,ed::allocator<cockpit::SNSv2::ChannelStatus>_> vector<cockpit::SNSv2::ChannelStatus,ed::allocator<cockpit::SNSv2::ChannelStatus>_>, *Pvector<cockpit::SNSv2::ChannelStatus,ed::allocator<cockpit::SNSv2::ChannelStatus>_>;

struct vector<cockpit::SNSv2::ChannelStatus,ed::allocator<cockpit::SNSv2::ChannelStatus>_> { // PlaceHolder Structure
};

typedef struct Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter> Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>, *PPtr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>;

struct Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct base_fixed_string<char,12> base_fixed_string<char,12>, *Pbase_fixed_string<char,12>;

struct base_fixed_string<char,12> { // PlaceHolder Structure
};

typedef struct vector<unsigned_short,ed::allocator<unsigned_short>_> vector<unsigned_short,ed::allocator<unsigned_short>_>, *Pvector<unsigned_short,ed::allocator<unsigned_short>_>;

struct vector<unsigned_short,ed::allocator<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct Ptr<wMessage,ed::DefaultDeleter> Ptr<wMessage,ed::DefaultDeleter>, *PPtr<wMessage,ed::DefaultDeleter>;

struct Ptr<wMessage,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<ProbableTarget,ed::allocator<ProbableTarget>_> vector<ProbableTarget,ed::allocator<ProbableTarget>_>, *Pvector<ProbableTarget,ed::allocator<ProbableTarget>_>;

struct vector<ProbableTarget,ed::allocator<ProbableTarget>_> { // PlaceHolder Structure
};

typedef struct mutex mutex, *Pmutex;

struct mutex { // PlaceHolder Structure
};

typedef struct span<float_const_,-1> span<float_const_,-1>, *Pspan<float_const_,-1>;

struct span<float_const_,-1> { // PlaceHolder Structure
};

typedef struct list<cockpit::mission_target,ed::allocator<cockpit::mission_target>_> list<cockpit::mission_target,ed::allocator<cockpit::mission_target>_>, *Plist<cockpit::mission_target,ed::allocator<cockpit::mission_target>_>;

struct list<cockpit::mission_target,ed::allocator<cockpit::mission_target>_> { // PlaceHolder Structure
};

typedef struct Ptr<ed::SharedGroupBarrier,ed::SharedGroupBarrier::Deleter> Ptr<ed::SharedGroupBarrier,ed::SharedGroupBarrier::Deleter>, *PPtr<ed::SharedGroupBarrier,ed::SharedGroupBarrier::Deleter>;

struct Ptr<ed::SharedGroupBarrier,ed::SharedGroupBarrier::Deleter> { // PlaceHolder Structure
};

typedef struct vector<int,ed::allocator<int>_> vector<int,ed::allocator<int>_>, *Pvector<int,ed::allocator<int>_>;

struct vector<int,ed::allocator<int>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::avDevice*___ptr64,ed::allocator<cockpit::avDevice*___ptr64>_> vector<cockpit::avDevice*___ptr64,ed::allocator<cockpit::avDevice*___ptr64>_>, *Pvector<cockpit::avDevice*___ptr64,ed::allocator<cockpit::avDevice*___ptr64>_>;

struct vector<cockpit::avDevice*___ptr64,ed::allocator<cockpit::avDevice*___ptr64>_> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t> basic_string<wchar_t>, *Pbasic_string<wchar_t>;

struct basic_string<wchar_t> { // PlaceHolder Structure
};

typedef struct array<std::map<ed::basic_string<char>,std::bitset<14>,std::less<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::bitset<14>_>_>_>,7> array<std::map<ed::basic_string<char>,std::bitset<14>,std::less<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::bitset<14>_>_>_>,7>, *Parray<std::map<ed::basic_string<char>,std::bitset<14>,std::less<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::bitset<14>_>_>_>,7>;

struct array<std::map<ed::basic_string<char>,std::bitset<14>,std::less<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::bitset<14>_>_>_>,7> { // PlaceHolder Structure
};

typedef struct vector<cockpit::HumanRadiosKeeper::RadioEntry,ed::allocator<cockpit::HumanRadiosKeeper::RadioEntry>_> vector<cockpit::HumanRadiosKeeper::RadioEntry,ed::allocator<cockpit::HumanRadiosKeeper::RadioEntry>_>, *Pvector<cockpit::HumanRadiosKeeper::RadioEntry,ed::allocator<cockpit::HumanRadiosKeeper::RadioEntry>_>;

struct vector<cockpit::HumanRadiosKeeper::RadioEntry,ed::allocator<cockpit::HumanRadiosKeeper::RadioEntry>_> { // PlaceHolder Structure
};

typedef struct vector<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>,ed::allocator<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>_>_> vector<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>,ed::allocator<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>_>_>, *Pvector<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>,ed::allocator<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>_>_>;

struct vector<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>,ed::allocator<ed::vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::avSNSchannelStatus,ed::allocator<cockpit::avSNSchannelStatus>_> vector<cockpit::avSNSchannelStatus,ed::allocator<cockpit::avSNSchannelStatus>_>, *Pvector<cockpit::avSNSchannelStatus,ed::allocator<cockpit::avSNSchannelStatus>_>;

struct vector<cockpit::avSNSchannelStatus,ed::allocator<cockpit::avSNSchannelStatus>_> { // PlaceHolder Structure
};

typedef struct array<double,4> array<double,4>, *Parray<double,4>;

struct array<double,4> { // PlaceHolder Structure
};

typedef struct IDynamicLibrary IDynamicLibrary, *PIDynamicLibrary;

struct IDynamicLibrary { // PlaceHolder Structure
};

typedef struct vector<double,ed::allocator<double>_> vector<double,ed::allocator<double>_>, *Pvector<double,ed::allocator<double>_>;

struct vector<double,ed::allocator<double>_> { // PlaceHolder Structure
};

typedef struct vector<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>,ed::allocator<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>_>_> vector<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>,ed::allocator<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>_>_>, *Pvector<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>,ed::allocator<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>_>_>;

struct vector<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>,ed::allocator<std::function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>_>_> { // PlaceHolder Structure
};

typedef struct list<cockpit::avBreakable*___ptr64,ed::allocator<cockpit::avBreakable*___ptr64>_> list<cockpit::avBreakable*___ptr64,ed::allocator<cockpit::avBreakable*___ptr64>_>, *Plist<cockpit::avBreakable*___ptr64,ed::allocator<cockpit::avBreakable*___ptr64>_>;

struct list<cockpit::avBreakable*___ptr64,ed::allocator<cockpit::avBreakable*___ptr64>_> { // PlaceHolder Structure
};

typedef struct Ptr<gunner_AI::TargetState,ed::DefaultDeleter> Ptr<gunner_AI::TargetState,ed::DefaultDeleter>, *PPtr<gunner_AI::TargetState,ed::DefaultDeleter>;

struct Ptr<gunner_AI::TargetState,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>_>_> vector<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>_>_>, *Pvector<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>_>_>;

struct vector<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>,ed::allocator<std::pair<double,ed::vector<std::pair<double,double>,ed::allocator<std::pair<double,double>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>,ed::allocator<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>_>_> vector<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>,ed::allocator<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>_>_>, *Pvector<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>,ed::allocator<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>_>_>;

struct vector<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>,ed::allocator<std::function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>_>_> { // PlaceHolder Structure
};

typedef struct SounderRef SounderRef, *PSounderRef;

struct SounderRef { // PlaceHolder Structure
};

typedef struct list<cockpit::LaserGuidedWeaponState,ed::allocator<cockpit::LaserGuidedWeaponState>_> list<cockpit::LaserGuidedWeaponState,ed::allocator<cockpit::LaserGuidedWeaponState>_>, *Plist<cockpit::LaserGuidedWeaponState,ed::allocator<cockpit::LaserGuidedWeaponState>_>;

struct list<cockpit::LaserGuidedWeaponState,ed::allocator<cockpit::LaserGuidedWeaponState>_> { // PlaceHolder Structure
};

typedef struct set<cockpit::LuaCoroutine*___ptr64,std::less<cockpit::LuaCoroutine*___ptr64>,ed::allocator<cockpit::LuaCoroutine*___ptr64>_> set<cockpit::LuaCoroutine*___ptr64,std::less<cockpit::LuaCoroutine*___ptr64>,ed::allocator<cockpit::LuaCoroutine*___ptr64>_>, *Pset<cockpit::LuaCoroutine*___ptr64,std::less<cockpit::LuaCoroutine*___ptr64>,ed::allocator<cockpit::LuaCoroutine*___ptr64>_>;

struct set<cockpit::LuaCoroutine*___ptr64,std::less<cockpit::LuaCoroutine*___ptr64>,ed::allocator<cockpit::LuaCoroutine*___ptr64>_> { // PlaceHolder Structure
};

typedef struct Ptr<Graphics::Geometry,ed::DefaultDeleter> Ptr<Graphics::Geometry,ed::DefaultDeleter>, *PPtr<Graphics::Geometry,ed::DefaultDeleter>;

struct Ptr<Graphics::Geometry,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_> vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>, *Pvector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_>;

struct vector<cockpit::HumanRadiosKeeper::CustomSample,ed::allocator<cockpit::HumanRadiosKeeper::CustomSample>_> { // PlaceHolder Structure
};

typedef struct vector<wControl::Target,ed::allocator<wControl::Target>_> vector<wControl::Target,ed::allocator<wControl::Target>_>, *Pvector<wControl::Target,ed::allocator<wControl::Target>_>;

struct vector<wControl::Target,ed::allocator<wControl::Target>_> { // PlaceHolder Structure
};

typedef struct list<cockpit::arcade_target,ed::allocator<cockpit::arcade_target>_> list<cockpit::arcade_target,ed::allocator<cockpit::arcade_target>_>, *Plist<cockpit::arcade_target,ed::allocator<cockpit::arcade_target>_>;

struct list<cockpit::arcade_target,ed::allocator<cockpit::arcade_target>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::avMovingMapPoint*___ptr64,ed::allocator<cockpit::avMovingMapPoint*___ptr64>_> vector<cockpit::avMovingMapPoint*___ptr64,ed::allocator<cockpit::avMovingMapPoint*___ptr64>_>, *Pvector<cockpit::avMovingMapPoint*___ptr64,ed::allocator<cockpit::avMovingMapPoint*___ptr64>_>;

struct vector<cockpit::avMovingMapPoint*___ptr64,ed::allocator<cockpit::avMovingMapPoint*___ptr64>_> { // PlaceHolder Structure
};

typedef struct vector<cockpit::ccDrawable*___ptr64,ed::allocator<cockpit::ccDrawable*___ptr64>_> vector<cockpit::ccDrawable*___ptr64,ed::allocator<cockpit::ccDrawable*___ptr64>_>, *Pvector<cockpit::ccDrawable*___ptr64,ed::allocator<cockpit::ccDrawable*___ptr64>_>;

struct vector<cockpit::ccDrawable*___ptr64,ed::allocator<cockpit::ccDrawable*___ptr64>_> { // PlaceHolder Structure
};

typedef struct array<unsigned_char,32> array<unsigned_char,32>, *Parray<unsigned_char,32>;

struct array<unsigned_char,32> { // PlaceHolder Structure
};

typedef struct vector<class_cockpit::Element*___ptr64,class_ed::allocator<class_cockpit::Element*___ptr64>_> vector<class_cockpit::Element*___ptr64,class_ed::allocator<class_cockpit::Element*___ptr64>_>, *Pvector<class_cockpit::Element*___ptr64,class_ed::allocator<class_cockpit::Element*___ptr64>_>;

struct vector<class_cockpit::Element*___ptr64,class_ed::allocator<class_cockpit::Element*___ptr64>_> { // PlaceHolder Structure
};

typedef struct span<unsigned_int_const_,-1> span<unsigned_int_const_,-1>, *Pspan<unsigned_int_const_,-1>;

struct span<unsigned_int_const_,-1> { // PlaceHolder Structure
};

typedef struct vector<cockpit::ccPanelEffect*___ptr64,ed::allocator<cockpit::ccPanelEffect*___ptr64>_> vector<cockpit::ccPanelEffect*___ptr64,ed::allocator<cockpit::ccPanelEffect*___ptr64>_>, *Pvector<cockpit::ccPanelEffect*___ptr64,ed::allocator<cockpit::ccPanelEffect*___ptr64>_>;

struct vector<cockpit::ccPanelEffect*___ptr64,ed::allocator<cockpit::ccPanelEffect*___ptr64>_> { // PlaceHolder Structure
};

typedef struct array<double,16> array<double,16>, *Parray<double,16>;

struct array<double,16> { // PlaceHolder Structure
};

typedef struct Sender Sender, *PSender;

struct Sender { // PlaceHolder Structure
};

typedef struct Object Object, *PObject;

struct Object { // PlaceHolder Structure
};

typedef enum PlayMode {
} PlayMode;

typedef struct shared_ptr<cockpit::GestureComplex> shared_ptr<cockpit::GestureComplex>, *Pshared_ptr<cockpit::GestureComplex>;

struct shared_ptr<cockpit::GestureComplex> { // PlaceHolder Structure
};

typedef struct initializer_list<float> initializer_list<float>, *Pinitializer_list<float>;

struct initializer_list<float> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>_>_>_> unordered_map<ed::basic_string<char>,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>_>_>_>, *Punordered_map<ed::basic_string<char>,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>_>_>_>;

struct unordered_map<ed::basic_string<char>,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,std::function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>_>_>_> { // PlaceHolder Structure
};

typedef struct _Iosb<int> _Iosb<int>, *P_Iosb<int>;

struct _Iosb<int> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)> function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>, *Pfunction<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>;

struct function<void___cdecl(cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)> { // PlaceHolder Structure
};

typedef struct function<float___cdecl(void)> function<float___cdecl(void)>, *Pfunction<float___cdecl(void)>;

struct function<float___cdecl(void)> { // PlaceHolder Structure
};

typedef struct multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_> multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>, *Pmultiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_>;

struct multiset<cockpit::avSPO_15::avSPO15Signal,cockpit::avSPO_15::avSPO15SignalPowerComperator,std::allocator<cockpit::avSPO_15::avSPO15Signal>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_channel_mode,unsigned___int64,std::less<cockpit::avSPO_15::avSPO15_channel_mode>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_channel_mode_const_,unsigned___int64>_>_> map<cockpit::avSPO_15::avSPO15_channel_mode,unsigned___int64,std::less<cockpit::avSPO_15::avSPO15_channel_mode>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_channel_mode_const_,unsigned___int64>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_channel_mode,unsigned___int64,std::less<cockpit::avSPO_15::avSPO15_channel_mode>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_channel_mode_const_,unsigned___int64>_>_>;

struct map<cockpit::avSPO_15::avSPO15_channel_mode,unsigned___int64,std::less<cockpit::avSPO_15::avSPO15_channel_mode>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_channel_mode_const_,unsigned___int64>_>_> { // PlaceHolder Structure
};

typedef struct multimap<int,cockpit::avEkranMessage,std::less<int>,std::allocator<std::pair<int_const_,cockpit::avEkranMessage>_>_> multimap<int,cockpit::avEkranMessage,std::less<int>,std::allocator<std::pair<int_const_,cockpit::avEkranMessage>_>_>, *Pmultimap<int,cockpit::avEkranMessage,std::less<int>,std::allocator<std::pair<int_const_,cockpit::avEkranMessage>_>_>;

struct multimap<int,cockpit::avEkranMessage,std::less<int>,std::allocator<std::pair<int_const_,cockpit::avEkranMessage>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,cockpit::HumanRadiosKeeper::Preset,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::HumanRadiosKeeper::Preset>_>_> unordered_map<ed::basic_string<char>,cockpit::HumanRadiosKeeper::Preset,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::HumanRadiosKeeper::Preset>_>_>, *Punordered_map<ed::basic_string<char>,cockpit::HumanRadiosKeeper::Preset,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::HumanRadiosKeeper::Preset>_>_>;

struct unordered_map<ed::basic_string<char>,cockpit::HumanRadiosKeeper::Preset,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::HumanRadiosKeeper::Preset>_>_> { // PlaceHolder Structure
};

typedef struct basic_iostream<wchar_t,std::char_traits<wchar_t>_> basic_iostream<wchar_t,std::char_traits<wchar_t>_>, *Pbasic_iostream<wchar_t,std::char_traits<wchar_t>_>;

struct basic_iostream<wchar_t,std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct array<std::function<void___cdecl(ed::deque<unsigned_int,ed::allocator<unsigned_int>_>&___ptr64,double,int,int)>,3> array<std::function<void___cdecl(ed::deque<unsigned_int,ed::allocator<unsigned_int>_>&___ptr64,double,int,int)>,3>, *Parray<std::function<void___cdecl(ed::deque<unsigned_int,ed::allocator<unsigned_int>_>&___ptr64,double,int,int)>,3>;

struct array<std::function<void___cdecl(ed::deque<unsigned_int,ed::allocator<unsigned_int>_>&___ptr64,double,int,int)>,3> { // PlaceHolder Structure
};

typedef struct map<double,unsigned_int,std::less<double>,ed::allocator<std::pair<double_const_,unsigned_int>_>_> map<double,unsigned_int,std::less<double>,ed::allocator<std::pair<double_const_,unsigned_int>_>_>, *Pmap<double,unsigned_int,std::less<double>,ed::allocator<std::pair<double_const_,unsigned_int>_>_>;

struct map<double,unsigned_int,std::less<double>,ed::allocator<std::pair<double_const_,unsigned_int>_>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_type,int,std::less<cockpit::avSPO_15::avSPO15_type>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_type_const_,int>_>_> map<cockpit::avSPO_15::avSPO15_type,int,std::less<cockpit::avSPO_15::avSPO15_type>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_type_const_,int>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_type,int,std::less<cockpit::avSPO_15::avSPO15_type>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_type_const_,int>_>_>;

struct map<cockpit::avSPO_15::avSPO15_type,int,std::less<cockpit::avSPO_15::avSPO15_type>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_type_const_,int>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<class_ed::basic_string<char>,class_cockpit::Element*___ptr64,struct_std::hash<class_ed::basic_string<char>_>,struct_std::equal_to<class_ed::basic_string<char>_>,class_ed::allocator<struct_std::pair<class_ed::basic_string<char>_const_,class_cockpit::Element*___ptr64>_>_> unordered_map<class_ed::basic_string<char>,class_cockpit::Element*___ptr64,struct_std::hash<class_ed::basic_string<char>_>,struct_std::equal_to<class_ed::basic_string<char>_>,class_ed::allocator<struct_std::pair<class_ed::basic_string<char>_const_,class_cockpit::Element*___ptr64>_>_>, *Punordered_map<class_ed::basic_string<char>,class_cockpit::Element*___ptr64,struct_std::hash<class_ed::basic_string<char>_>,struct_std::equal_to<class_ed::basic_string<char>_>,class_ed::allocator<struct_std::pair<class_ed::basic_string<char>_const_,class_cockpit::Element*___ptr64>_>_>;

struct unordered_map<class_ed::basic_string<char>,class_cockpit::Element*___ptr64,struct_std::hash<class_ed::basic_string<char>_>,struct_std::equal_to<class_ed::basic_string<char>_>,class_ed::allocator<struct_std::pair<class_ed::basic_string<char>_const_,class_cockpit::Element*___ptr64>_>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(void)> function<void___cdecl(void)>, *Pfunction<void___cdecl(void)>;

struct function<void___cdecl(void)> { // PlaceHolder Structure
};

typedef struct basic_ios<unsigned_short,std::char_traits<unsigned_short>_> basic_ios<unsigned_short,std::char_traits<unsigned_short>_>, *Pbasic_ios<unsigned_short,std::char_traits<unsigned_short>_>;

struct basic_ios<unsigned_short,std::char_traits<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct vector<double,std::allocator<double>_> vector<double,std::allocator<double>_>, *Pvector<double,std::allocator<double>_>;

struct vector<double,std::allocator<double>_> { // PlaceHolder Structure
};

typedef struct unordered_map<int,cockpit::avReceiver*___ptr64,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,cockpit::avReceiver*___ptr64>_>_> unordered_map<int,cockpit::avReceiver*___ptr64,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,cockpit::avReceiver*___ptr64>_>_>, *Punordered_map<int,cockpit::avReceiver*___ptr64,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,cockpit::avReceiver*___ptr64>_>_>;

struct unordered_map<int,cockpit::avReceiver*___ptr64,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,cockpit::avReceiver*___ptr64>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<cockpit::avReceiver*___ptr64,int,std::hash<cockpit::avReceiver*___ptr64>,std::equal_to<cockpit::avReceiver*___ptr64>,ed::allocator<std::pair<cockpit::avReceiver*___ptr64_const,int>_>_> unordered_map<cockpit::avReceiver*___ptr64,int,std::hash<cockpit::avReceiver*___ptr64>,std::equal_to<cockpit::avReceiver*___ptr64>,ed::allocator<std::pair<cockpit::avReceiver*___ptr64_const,int>_>_>, *Punordered_map<cockpit::avReceiver*___ptr64,int,std::hash<cockpit::avReceiver*___ptr64>,std::equal_to<cockpit::avReceiver*___ptr64>,ed::allocator<std::pair<cockpit::avReceiver*___ptr64_const,int>_>_>;

struct unordered_map<cockpit::avReceiver*___ptr64,int,std::hash<cockpit::avReceiver*___ptr64>,std::equal_to<cockpit::avReceiver*___ptr64>,ed::allocator<std::pair<cockpit::avReceiver*___ptr64_const,int>_>_> { // PlaceHolder Structure
};

typedef struct map<void*___ptr64,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64),std::less<void*___ptr64>,ed::allocator<std::pair<void*___ptr64_const,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64)>_>_> map<void*___ptr64,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64),std::less<void*___ptr64>,ed::allocator<std::pair<void*___ptr64_const,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64)>_>_>, *Pmap<void*___ptr64,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64),std::less<void*___ptr64>,ed::allocator<std::pair<void*___ptr64_const,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64)>_>_>;

struct map<void*___ptr64,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64),std::less<void*___ptr64>,ed::allocator<std::pair<void*___ptr64_const,class_cockpit::avReceiver*___ptr64_(__cdecl*)(lua_State*___ptr64)>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>_>_>_> unordered_map<ed::basic_string<char>,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>_>_>_>, *Punordered_map<ed::basic_string<char>,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>_>_>_>;

struct unordered_map<ed::basic_string<char>,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,ed::Ptr<cockpit::ceFont,ed::DefaultDeleter>_>_>_> { // PlaceHolder Structure
};

typedef struct map<unsigned_int,cockpit::mov_ptr_mark,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::mov_ptr_mark>_>_> map<unsigned_int,cockpit::mov_ptr_mark,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::mov_ptr_mark>_>_>, *Pmap<unsigned_int,cockpit::mov_ptr_mark,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::mov_ptr_mark>_>_>;

struct map<unsigned_int,cockpit::mov_ptr_mark,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::mov_ptr_mark>_>_> { // PlaceHolder Structure
};

typedef struct pair<int,cockpit::avEkranMessage> pair<int,cockpit::avEkranMessage>, *Ppair<int,cockpit::avEkranMessage>;

struct pair<int,cockpit::avEkranMessage> { // PlaceHolder Structure
};

typedef struct map<unsigned_int,cockpit::MLWS_contact,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::MLWS_contact>_>_> map<unsigned_int,cockpit::MLWS_contact,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::MLWS_contact>_>_>, *Pmap<unsigned_int,cockpit::MLWS_contact,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::MLWS_contact>_>_>;

struct map<unsigned_int,cockpit::MLWS_contact,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::MLWS_contact>_>_> { // PlaceHolder Structure
};

typedef struct unique_ptr<model::ModelCookie,model::ModelCookieDeleter> unique_ptr<model::ModelCookie,model::ModelCookieDeleter>, *Punique_ptr<model::ModelCookie,model::ModelCookieDeleter>;

struct unique_ptr<model::ModelCookie,model::ModelCookieDeleter> { // PlaceHolder Structure
};

typedef struct pair<double,double> pair<double,double>, *Ppair<double,double>;

struct pair<double,double> { // PlaceHolder Structure
};

typedef struct map<cockpit::ccContextRelatedObject*___ptr64,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>,std::less<cockpit::ccContextRelatedObject*___ptr64>,ed::allocator<std::pair<cockpit::ccContextRelatedObject*___ptr64_const,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>_>_>_> map<cockpit::ccContextRelatedObject*___ptr64,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>,std::less<cockpit::ccContextRelatedObject*___ptr64>,ed::allocator<std::pair<cockpit::ccContextRelatedObject*___ptr64_const,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>_>_>_>, *Pmap<cockpit::ccContextRelatedObject*___ptr64,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>,std::less<cockpit::ccContextRelatedObject*___ptr64>,ed::allocator<std::pair<cockpit::ccContextRelatedObject*___ptr64_const,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>_>_>_>;

struct map<cockpit::ccContextRelatedObject*___ptr64,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>,std::less<cockpit::ccContextRelatedObject*___ptr64>,ed::allocator<std::pair<cockpit::ccContextRelatedObject*___ptr64_const,std::unordered_map<ed::basic_string<char>,cockpit::device_link_data,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::device_link_data>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64),std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64)>_>_> unordered_map<ed::basic_string<char>,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64),std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64)>_>_>, *Punordered_map<ed::basic_string<char>,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64),std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64)>_>_>;

struct unordered_map<ed::basic_string<char>,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64),std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,void_(__cdecl*)(cockpit::Element*___ptr64,cockpit::ccDrawable*___ptr64,HeapVector<Graphics::DynamicParam>_const&___ptr64)>_>_> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,struct_std::char_traits<char>_> basic_streambuf<char,struct_std::char_traits<char>_>, *Pbasic_streambuf<char,struct_std::char_traits<char>_>;

struct basic_streambuf<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,cockpit::Element*___ptr64,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::Element*___ptr64>_>_> unordered_map<ed::basic_string<char>,cockpit::Element*___ptr64,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::Element*___ptr64>_>_>, *Punordered_map<ed::basic_string<char>,cockpit::Element*___ptr64,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::Element*___ptr64>_>_>;

struct unordered_map<ed::basic_string<char>,cockpit::Element*___ptr64,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,cockpit::Element*___ptr64>_>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(unsigned_short,ed::span<unsigned_int_const_,-1>)> function<void___cdecl(unsigned_short,ed::span<unsigned_int_const_,-1>)>, *Pfunction<void___cdecl(unsigned_short,ed::span<unsigned_int_const_,-1>)>;

struct function<void___cdecl(unsigned_short,ed::span<unsigned_int_const_,-1>)> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,struct_std::char_traits<char>_> basic_ostream<char,struct_std::char_traits<char>_>, *Pbasic_ostream<char,struct_std::char_traits<char>_>;

struct basic_ostream<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct function<float___cdecl(ed::vector<float,ed::allocator<float>_>_const&___ptr64)> function<float___cdecl(ed::vector<float,ed::allocator<float>_>_const&___ptr64)>, *Pfunction<float___cdecl(ed::vector<float,ed::allocator<float>_>_const&___ptr64)>;

struct function<float___cdecl(ed::vector<float,ed::allocator<float>_>_const&___ptr64)> { // PlaceHolder Structure
};

typedef struct shared_ptr<EagleFM::Elec::PtrKeeper<EagleFM::Elec::ItemBase>_> shared_ptr<EagleFM::Elec::PtrKeeper<EagleFM::Elec::ItemBase>_>, *Pshared_ptr<EagleFM::Elec::PtrKeeper<EagleFM::Elec::ItemBase>_>;

struct shared_ptr<EagleFM::Elec::PtrKeeper<EagleFM::Elec::ItemBase>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_prf,int,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,int>_>_> map<cockpit::avSPO_15::avSPO15_prf,int,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,int>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_prf,int,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,int>_>_>;

struct map<cockpit::avSPO_15::avSPO15_prf,int,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,int>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<ed::basic_string<char>,Graphics::MaterialPtr,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,Graphics::MaterialPtr>_>_> unordered_map<ed::basic_string<char>,Graphics::MaterialPtr,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,Graphics::MaterialPtr>_>_>, *Punordered_map<ed::basic_string<char>,Graphics::MaterialPtr,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,Graphics::MaterialPtr>_>_>;

struct unordered_map<ed::basic_string<char>,Graphics::MaterialPtr,std::hash<ed::basic_string<char>_>,std::equal_to<ed::basic_string<char>_>,ed::allocator<std::pair<ed::basic_string<char>_const_,Graphics::MaterialPtr>_>_> { // PlaceHolder Structure
};

typedef struct unordered_map<int,int,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,int>_>_> unordered_map<int,int,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,int>_>_>, *Punordered_map<int,int,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,int>_>_>;

struct unordered_map<int,int,std::hash<int>,std::equal_to<int>,ed::allocator<std::pair<int_const_,int>_>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_prf,double,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,double>_>_> map<cockpit::avSPO_15::avSPO15_prf,double,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,double>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_prf,double,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,double>_>_>;

struct map<cockpit::avSPO_15::avSPO15_prf,double,std::less<cockpit::avSPO_15::avSPO15_prf>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_prf_const_,double>_>_> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>_> basic_ostream<char,std::char_traits<char>_>, *Pbasic_ostream<char,std::char_traits<char>_>;

struct basic_ostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_> map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>, *Pmap<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>;

struct map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_> { // PlaceHolder Structure
};

typedef struct unique_ptr<cockpit::GestureComplex,std::default_delete<cockpit::GestureComplex>_> unique_ptr<cockpit::GestureComplex,std::default_delete<cockpit::GestureComplex>_>, *Punique_ptr<cockpit::GestureComplex,std::default_delete<cockpit::GestureComplex>_>;

struct unique_ptr<cockpit::GestureComplex,std::default_delete<cockpit::GestureComplex>_> { // PlaceHolder Structure
};

typedef struct bitset<32> bitset<32>, *Pbitset<32>;

struct bitset<32> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_pw,double,std::less<cockpit::avSPO_15::avSPO15_pw>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_pw_const_,double>_>_> map<cockpit::avSPO_15::avSPO15_pw,double,std::less<cockpit::avSPO_15::avSPO15_pw>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_pw_const_,double>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_pw,double,std::less<cockpit::avSPO_15::avSPO15_pw>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_pw_const_,double>_>_>;

struct map<cockpit::avSPO_15::avSPO15_pw,double,std::less<cockpit::avSPO_15::avSPO15_pw>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_pw_const_,double>_>_> { // PlaceHolder Structure
};

typedef struct basic_streambuf<wchar_t,std::char_traits<wchar_t>_> basic_streambuf<wchar_t,std::char_traits<wchar_t>_>, *Pbasic_streambuf<wchar_t,std::char_traits<wchar_t>_>;

struct basic_streambuf<wchar_t,std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15DB_H,double,std::less<cockpit::avSPO_15::avSPO15DB_H>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15DB_H_const_,double>_>_> map<cockpit::avSPO_15::avSPO15DB_H,double,std::less<cockpit::avSPO_15::avSPO15DB_H>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15DB_H_const_,double>_>_>, *Pmap<cockpit::avSPO_15::avSPO15DB_H,double,std::less<cockpit::avSPO_15::avSPO15DB_H>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15DB_H_const_,double>_>_>;

struct map<cockpit::avSPO_15::avSPO15DB_H,double,std::less<cockpit::avSPO_15::avSPO15DB_H>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15DB_H_const_,double>_>_> { // PlaceHolder Structure
};

typedef struct function<double___cdecl(void)> function<double___cdecl(void)>, *Pfunction<double___cdecl(void)>;

struct function<double___cdecl(void)> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(Graphics::ModelInstance*___ptr64,wPosition3<double>_const&___ptr64,Graphics::effectState*___ptr64)> function<void___cdecl(Graphics::ModelInstance*___ptr64,wPosition3<double>_const&___ptr64,Graphics::effectState*___ptr64)>, *Pfunction<void___cdecl(Graphics::ModelInstance*___ptr64,wPosition3<double>_const&___ptr64,Graphics::effectState*___ptr64)>;

struct function<void___cdecl(Graphics::ModelInstance*___ptr64,wPosition3<double>_const&___ptr64,Graphics::effectState*___ptr64)> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)> function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>, *Pfunction<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)>;

struct function<void___cdecl(cockpit::Element*___ptr64,HeapVector<Graphics::DynamicParam>&___ptr64)> { // PlaceHolder Structure
};

typedef struct basic_string<unsigned_int,std::char_traits<unsigned_int>,std::allocator<unsigned_int>_> basic_string<unsigned_int,std::char_traits<unsigned_int>,std::allocator<unsigned_int>_>, *Pbasic_string<unsigned_int,std::char_traits<unsigned_int>,std::allocator<unsigned_int>_>;

struct basic_string<unsigned_int,std::char_traits<unsigned_int>,std::allocator<unsigned_int>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::avSPO_15::avSPO15_freq,double,std::less<cockpit::avSPO_15::avSPO15_freq>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_freq_const_,double>_>_> map<cockpit::avSPO_15::avSPO15_freq,double,std::less<cockpit::avSPO_15::avSPO15_freq>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_freq_const_,double>_>_>, *Pmap<cockpit::avSPO_15::avSPO15_freq,double,std::less<cockpit::avSPO_15::avSPO15_freq>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_freq_const_,double>_>_>;

struct map<cockpit::avSPO_15::avSPO15_freq,double,std::less<cockpit::avSPO_15::avSPO15_freq>,ed::allocator<std::pair<cockpit::avSPO_15::avSPO15_freq_const_,double>_>_> { // PlaceHolder Structure
};

typedef struct unique_ptr<cockpit::GyroPowerSource,std::default_delete<cockpit::GyroPowerSource>_> unique_ptr<cockpit::GyroPowerSource,std::default_delete<cockpit::GyroPowerSource>_>, *Punique_ptr<cockpit::GyroPowerSource,std::default_delete<cockpit::GyroPowerSource>_>;

struct unique_ptr<cockpit::GyroPowerSource,std::default_delete<cockpit::GyroPowerSource>_> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct basic_ios<char,std::char_traits<char>_> basic_ios<char,std::char_traits<char>_>, *Pbasic_ios<char,std::char_traits<char>_>;

struct basic_ios<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct function<void___cdecl(void*___ptr64,wsType_const&___ptr64)> function<void___cdecl(void*___ptr64,wsType_const&___ptr64)>, *Pfunction<void___cdecl(void*___ptr64,wsType_const&___ptr64)>;

struct function<void___cdecl(void*___ptr64,wsType_const&___ptr64)> { // PlaceHolder Structure
};

typedef struct initializer_list<unsigned_int> initializer_list<unsigned_int>, *Pinitializer_list<unsigned_int>;

struct initializer_list<unsigned_int> { // PlaceHolder Structure
};

typedef struct basic_iostream<char,std::char_traits<char>_> basic_iostream<char,std::char_traits<char>_>, *Pbasic_iostream<char,std::char_traits<char>_>;

struct basic_iostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)> function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>, *Pfunction<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>;

struct function<void___cdecl(unsigned___int64,cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)> { // PlaceHolder Structure
};

typedef struct basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_>, *Pbasic_streambuf<unsigned_short,std::char_traits<unsigned_short>_>;

struct basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct codecvt<char16_t,char,_Mbstatet> codecvt<char16_t,char,_Mbstatet>, *Pcodecvt<char16_t,char,_Mbstatet>;

struct codecvt<char16_t,char,_Mbstatet> { // PlaceHolder Structure
};

typedef struct unique_ptr<enlight::RayCursor,std::default_delete<enlight::RayCursor>_> unique_ptr<enlight::RayCursor,std::default_delete<enlight::RayCursor>_>, *Punique_ptr<enlight::RayCursor,std::default_delete<enlight::RayCursor>_>;

struct unique_ptr<enlight::RayCursor,std::default_delete<enlight::RayCursor>_> { // PlaceHolder Structure
};

typedef struct map<cockpit::FreqRange,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>,std::less<cockpit::FreqRange>,ed::allocator<std::pair<cockpit::FreqRange_const_,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>_>_>_> map<cockpit::FreqRange,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>,std::less<cockpit::FreqRange>,ed::allocator<std::pair<cockpit::FreqRange_const_,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>_>_>_>, *Pmap<cockpit::FreqRange,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>,std::less<cockpit::FreqRange>,ed::allocator<std::pair<cockpit::FreqRange_const_,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>_>_>_>;

struct map<cockpit::FreqRange,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>,std::less<cockpit::FreqRange>,ed::allocator<std::pair<cockpit::FreqRange_const_,std::map<unsigned_int,cockpit::avRWRradarParams,std::less<unsigned_int>,ed::allocator<std::pair<unsigned_int_const_,cockpit::avRWRradarParams>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct map<int,osg::Vec3d,std::less<int>,ed::allocator<std::pair<int_const_,osg::Vec3d>_>_> map<int,osg::Vec3d,std::less<int>,ed::allocator<std::pair<int_const_,osg::Vec3d>_>_>, *Pmap<int,osg::Vec3d,std::less<int>,ed::allocator<std::pair<int_const_,osg::Vec3d>_>_>;

struct map<int,osg::Vec3d,std::less<int>,ed::allocator<std::pair<int_const_,osg::Vec3d>_>_> { // PlaceHolder Structure
};

typedef struct function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)> function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)>, *Pfunction<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)>;

struct function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)> { // PlaceHolder Structure
};

typedef struct basic_string_view<wchar_t,std::char_traits<wchar_t>_> basic_string_view<wchar_t,std::char_traits<wchar_t>_>, *Pbasic_string_view<wchar_t,std::char_traits<wchar_t>_>;

struct basic_string_view<wchar_t,std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(unsigned_int,float)> function<void___cdecl(unsigned_int,float)>, *Pfunction<void___cdecl(unsigned_int,float)>;

struct function<void___cdecl(unsigned_int,float)> { // PlaceHolder Structure
};

typedef struct basic_ios<wchar_t,std::char_traits<wchar_t>_> basic_ios<wchar_t,std::char_traits<wchar_t>_>, *Pbasic_ios<wchar_t,std::char_traits<wchar_t>_>;

struct basic_ios<wchar_t,std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<uiBaseFont> shared_ptr<uiBaseFont>, *Pshared_ptr<uiBaseFont>;

struct shared_ptr<uiBaseFont> { // PlaceHolder Structure
};

typedef struct basic_string_view<char,std::char_traits<char>_> basic_string_view<char,std::char_traits<char>_>, *Pbasic_string_view<char,std::char_traits<char>_>;

struct basic_string_view<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Structure
};

typedef struct facet facet, *Pfacet;

struct facet { // PlaceHolder Structure
};

typedef struct id id, *Pid;

struct id { // PlaceHolder Structure
};

typedef struct Task Task, *PTask;

struct Task { // PlaceHolder Structure
};

typedef struct AttackGroup AttackGroup, *PAttackGroup;

struct AttackGroup { // PlaceHolder Structure
};

typedef struct Refueling Refueling, *PRefueling;

struct Refueling { // PlaceHolder Structure
};

typedef struct Follow Follow, *PFollow;

struct Follow { // PlaceHolder Structure
};

typedef struct TargetFilterState TargetFilterState, *PTargetFilterState;

struct TargetFilterState { // PlaceHolder Structure
};

typedef struct Bombing Bombing, *PBombing;

struct Bombing { // PlaceHolder Structure
};

typedef struct wPlayerTaskIndicator wPlayerTaskIndicator, *PwPlayerTaskIndicator;

struct wPlayerTaskIndicator { // PlaceHolder Structure
};

typedef struct AttackMapObject AttackMapObject, *PAttackMapObject;

struct AttackMapObject { // PlaceHolder Structure
};

typedef struct BombingRunway BombingRunway, *PBombingRunway;

struct BombingRunway { // PlaceHolder Structure
};

typedef struct Escort Escort, *PEscort;

struct Escort { // PlaceHolder Structure
};

typedef struct AttackUnit AttackUnit, *PAttackUnit;

struct AttackUnit { // PlaceHolder Structure
};

typedef struct Orbit Orbit, *POrbit;

struct Orbit { // PlaceHolder Structure
};

typedef struct NegativeFilter NegativeFilter, *PNegativeFilter;

struct NegativeFilter { // PlaceHolder Structure
};

typedef struct Command Command, *PCommand;

struct Command { // PlaceHolder Structure
};

typedef struct TaskState TaskState, *PTaskState;

struct TaskState { // PlaceHolder Structure
};

typedef struct Controller Controller, *PController;

struct Controller { // PlaceHolder Structure
};

typedef struct Land Land, *PLand;

struct Land { // PlaceHolder Structure
};

typedef struct Descriptor Descriptor, *PDescriptor;

struct Descriptor { // PlaceHolder Structure
};

typedef struct Interphone Interphone, *PInterphone;

struct Interphone { // PlaceHolder Structure
};

typedef struct Radio Radio, *PRadio;

struct Radio { // PlaceHolder Structure
};

typedef enum ContextID {
} ContextID;

typedef struct Host Host, *PHost;

struct Host { // PlaceHolder Structure
};

typedef struct PointOnSurface PointOnSurface, *PPointOnSurface;

struct PointOnSurface { // PlaceHolder Structure
};

typedef struct ITerrain ITerrain, *PITerrain;

struct ITerrain { // PlaceHolder Structure
};

typedef enum Blur {
} Blur;

typedef struct Glyph Glyph, *PGlyph;

struct Glyph { // PlaceHolder Structure
};

typedef struct Regulator Regulator, *PRegulator;

struct Regulator { // PlaceHolder Structure
};

typedef struct MessagesSource MessagesSource, *PMessagesSource;

struct MessagesSource { // PlaceHolder Structure
};

typedef struct ParentElement ParentElement, *PParentElement;

struct ParentElement { // PlaceHolder Structure
};

typedef struct Switcher Switcher, *PSwitcher;

struct Switcher { // PlaceHolder Structure
};

typedef struct FakeUnknown<class_Common::Identifiable> FakeUnknown<class_Common::Identifiable>, *PFakeUnknown<class_Common::Identifiable>;

struct FakeUnknown<class_Common::Identifiable> { // PlaceHolder Structure
};

typedef struct Factory Factory, *PFactory;

struct Factory { // PlaceHolder Structure
};

typedef struct Identifier Identifier, *PIdentifier;

struct Identifier { // PlaceHolder Structure
};

typedef struct FactoryManager FactoryManager, *PFactoryManager;

struct FactoryManager { // PlaceHolder Structure
};

typedef struct FakeUnknown<Common::Identifiable> FakeUnknown<Common::Identifiable>, *PFakeUnknown<Common::Identifiable>;

struct FakeUnknown<Common::Identifiable> { // PlaceHolder Structure
};

typedef struct Material Material, *PMaterial;

struct Material { // PlaceHolder Structure
};

typedef struct RenderObject RenderObject, *PRenderObject;

struct RenderObject { // PlaceHolder Structure
};

typedef struct Materials Materials, *PMaterials;

struct Materials { // PlaceHolder Structure
};

typedef struct ModelPtr ModelPtr, *PModelPtr;

struct ModelPtr { // PlaceHolder Structure
};

typedef struct RenderObjectDyn RenderObjectDyn, *PRenderObjectDyn;

struct RenderObjectDyn { // PlaceHolder Structure
};

typedef struct AirscrewProxy AirscrewProxy, *PAirscrewProxy;

struct AirscrewProxy { // PlaceHolder Structure
};

typedef struct MaterialPtr MaterialPtr, *PMaterialPtr;

struct MaterialPtr { // PlaceHolder Structure
};

typedef enum Pass {
} Pass;

typedef struct Light Light, *PLight;

struct Light { // PlaceHolder Structure
};

typedef struct ModelParser ModelParser, *PModelParser;

struct ModelParser { // PlaceHolder Structure
};

typedef struct CustomGeometry CustomGeometry, *PCustomGeometry;

struct CustomGeometry { // PlaceHolder Structure
};

typedef struct Camera Camera, *PCamera;

struct Camera { // PlaceHolder Structure
};

typedef struct effectState effectState, *PeffectState;

struct effectState { // PlaceHolder Structure
};

typedef struct Models Models, *PModels;

struct Models { // PlaceHolder Structure
};

typedef struct Context Context, *PContext;

struct Context { // PlaceHolder Structure
};

typedef struct RendererCallback RendererCallback, *PRendererCallback;

struct RendererCallback { // PlaceHolder Structure
};

typedef enum RendererCallbackEvent {
} RendererCallbackEvent;

typedef struct Geometry Geometry, *PGeometry;

struct Geometry { // PlaceHolder Structure
};

typedef struct Renderer Renderer, *PRenderer;

struct Renderer { // PlaceHolder Structure
};

typedef struct ModelInstance ModelInstance, *PModelInstance;

struct ModelInstance { // PlaceHolder Structure
};

typedef struct ModelLight ModelLight, *PModelLight;

struct ModelLight { // PlaceHolder Structure
};

typedef struct IAtmosphere IAtmosphere, *PIAtmosphere;

struct IAtmosphere { // PlaceHolder Structure
};

typedef enum Interruption {
} Interruption;

typedef struct Stream Stream, *PStream;

struct Stream { // PlaceHolder Structure
};

typedef struct WMM_Data WMM_Data, *PWMM_Data;

struct WMM_Data { // PlaceHolder Structure
};

typedef struct WindowBase WindowBase, *PWindowBase;

struct WindowBase { // PlaceHolder Structure
};

typedef struct Window Window, *PWindow;

struct Window { // PlaceHolder Structure
};

typedef struct WindowsManager WindowsManager, *PWindowsManager;

struct WindowsManager { // PlaceHolder Structure
};

typedef struct Tooltip Tooltip, *PTooltip;

struct Tooltip { // PlaceHolder Structure
};

typedef struct UpdateTarget UpdateTarget, *PUpdateTarget;

struct UpdateTarget { // PlaceHolder Structure
};

typedef struct OffscreenWindow OffscreenWindow, *POffscreenWindow;

struct OffscreenWindow { // PlaceHolder Structure
};

typedef struct Application Application, *PApplication;

struct Application { // PlaceHolder Structure
};

typedef struct GUI GUI, *PGUI;

struct GUI { // PlaceHolder Structure
};

typedef struct UpdateManager UpdateManager, *PUpdateManager;

struct UpdateManager { // PlaceHolder Structure
};

typedef struct Data Data, *PData;

struct Data { // PlaceHolder Structure
};

typedef struct TooltipSkin TooltipSkin, *PTooltipSkin;

struct TooltipSkin { // PlaceHolder Structure
};

typedef enum InteractiveState {
} InteractiveState;

typedef struct MouseListener MouseListener, *PMouseListener;

struct MouseListener { // PlaceHolder Structure
};

typedef struct Info Info, *PInfo;

struct Info { // PlaceHolder Structure
};

typedef struct Stat Stat, *PStat;

struct Stat { // PlaceHolder Structure
};

typedef struct small_vector<unsigned_char,8,ed::allocator<unsigned_char>,void> small_vector<unsigned_char,8,ed::allocator<unsigned_char>,void>, *Psmall_vector<unsigned_char,8,ed::allocator<unsigned_char>,void>;

struct small_vector<unsigned_char,8,ed::allocator<unsigned_char>,void> { // PlaceHolder Structure
};

typedef struct targeting_data targeting_data, *Ptargeting_data;

struct targeting_data { // PlaceHolder Structure
};

typedef enum AimType {
} AimType;

typedef struct IWindTable<float,Math::Vector<3,float>_> IWindTable<float,Math::Vector<3,float>_>, *PIWindTable<float,Math::Vector<3,float>_>;

struct IWindTable<float,Math::Vector<3,float>_> { // PlaceHolder Structure
};

typedef struct WindTableProxy_<float> WindTableProxy_<float>, *PWindTableProxy_<float>;

struct WindTableProxy_<float> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef struct avAvionicsDataProxyDefault avAvionicsDataProxyDefault, *PavAvionicsDataProxyDefault;

struct avAvionicsDataProxyDefault { // PlaceHolder Class Structure
};

typedef struct avBasicElectricInterface avBasicElectricInterface, *PavBasicElectricInterface;

struct avBasicElectricInterface { // PlaceHolder Class Structure
};

typedef struct ccIndicatorPage ccIndicatorPage, *PccIndicatorPage;

struct ccIndicatorPage { // PlaceHolder Class Structure
};

typedef struct avImuStateVectorV2 avImuStateVectorV2, *PavImuStateVectorV2;

struct avImuStateVectorV2 { // PlaceHolder Class Structure
};

typedef struct ccLambdaGauge ccLambdaGauge, *PccLambdaGauge;

struct ccLambdaGauge { // PlaceHolder Class Structure
};

typedef struct gauge gauge, *Pgauge;

struct gauge { // PlaceHolder Class Structure
};

typedef struct avChaffFlareContainer avChaffFlareContainer, *PavChaffFlareContainer;

struct avChaffFlareContainer { // PlaceHolder Class Structure
};

typedef struct avLuaRegistrable avLuaRegistrable, *PavLuaRegistrable;

struct avLuaRegistrable { // PlaceHolder Class Structure
};

typedef struct avRippReleaseCapable avRippReleaseCapable, *PavRippReleaseCapable;

struct avRippReleaseCapable { // PlaceHolder Class Structure
};

typedef struct TransferFunctionDifferential TransferFunctionDifferential, *PTransferFunctionDifferential;

struct TransferFunctionDifferential { // PlaceHolder Class Structure
};

typedef struct eqTVGuidedWeapon_V2 eqTVGuidedWeapon_V2, *PeqTVGuidedWeapon_V2;

struct eqTVGuidedWeapon_V2 { // PlaceHolder Class Structure
};

typedef struct LuaCoroutine LuaCoroutine, *PLuaCoroutine;

struct LuaCoroutine { // PlaceHolder Class Structure
};

typedef struct avKneeboardZoneObject avKneeboardZoneObject, *PavKneeboardZoneObject;

struct avKneeboardZoneObject { // PlaceHolder Class Structure
};

typedef struct avMissionTargetManager avMissionTargetManager, *PavMissionTargetManager;

struct avMissionTargetManager { // PlaceHolder Class Structure
};

typedef struct ccMapObjectsBuffer ccMapObjectsBuffer, *PccMapObjectsBuffer;

struct ccMapObjectsBuffer { // PlaceHolder Class Structure
};

typedef struct avIMUv2 avIMUv2, *PavIMUv2;

struct avIMUv2 { // PlaceHolder Class Structure
};

typedef struct avAIHelperBase avAIHelperBase, *PavAIHelperBase;

struct avAIHelperBase { // PlaceHolder Class Structure
};

typedef struct avBaseRadio avBaseRadio, *PavBaseRadio;

struct avBaseRadio { // PlaceHolder Class Structure
};

typedef struct avRadarAltimeterBase avRadarAltimeterBase, *PavRadarAltimeterBase;

struct avRadarAltimeterBase { // PlaceHolder Class Structure
};

typedef struct eqIAM eqIAM, *PeqIAM;

struct eqIAM { // PlaceHolder Class Structure
};

typedef struct eqLitening_TGP eqLitening_TGP, *PeqLitening_TGP;

struct eqLitening_TGP { // PlaceHolder Class Structure
};

typedef struct avRWRearly avRWRearly, *PavRWRearly;

struct avRWRearly { // PlaceHolder Class Structure
};

typedef struct avBiruzaGuidanceModule avBiruzaGuidanceModule, *PavBiruzaGuidanceModule;

struct avBiruzaGuidanceModule { // PlaceHolder Class Structure
};

typedef struct avUGR_4K avUGR_4K, *PavUGR_4K;

struct avUGR_4K { // PlaceHolder Class Structure
};

typedef struct avJammerInterface avJammerInterface, *PavJammerInterface;

struct avJammerInterface { // PlaceHolder Class Structure
};

typedef struct GyroAirSource GyroAirSource, *PGyroAirSource;

struct GyroAirSource { // PlaceHolder Class Structure
};

typedef struct avEkranControl avEkranControl, *PavEkranControl;

struct avEkranControl { // PlaceHolder Class Structure
};

typedef struct avIRSensor avIRSensor, *PavIRSensor;

struct avIRSensor { // PlaceHolder Class Structure
};

typedef struct avAirDrivenDirectionalGyro avAirDrivenDirectionalGyro, *PavAirDrivenDirectionalGyro;

struct avAirDrivenDirectionalGyro { // PlaceHolder Class Structure
};

typedef struct eqR60 eqR60, *PeqR60;

struct eqR60 { // PlaceHolder Class Structure
};

typedef struct avYawGyro avYawGyro, *PavYawGyro;

struct avYawGyro { // PlaceHolder Class Structure
};

typedef struct avArtificialHorizon avArtificialHorizon, *PavArtificialHorizon;

struct avArtificialHorizon { // PlaceHolder Class Structure
};

typedef struct avIgla_seeker avIgla_seeker, *PavIgla_seeker;

struct avIgla_seeker { // PlaceHolder Class Structure
};

typedef struct avDispenseProgram avDispenseProgram, *PavDispenseProgram;

struct avDispenseProgram { // PlaceHolder Class Structure
};

typedef struct ccAN_ALR69V ccAN_ALR69V, *PccAN_ALR69V;

struct ccAN_ALR69V { // PlaceHolder Class Structure
};

typedef struct ccMovingMap ccMovingMap, *PccMovingMap;

struct ccMovingMap { // PlaceHolder Class Structure
};

typedef struct avLinkToTargetResponder avLinkToTargetResponder, *PavLinkToTargetResponder;

struct avLinkToTargetResponder { // PlaceHolder Class Structure
};

typedef struct avMovingMap avMovingMap, *PavMovingMap;

struct avMovingMap { // PlaceHolder Class Structure
};

typedef struct avMarkerReceiver avMarkerReceiver, *PavMarkerReceiver;

struct avMarkerReceiver { // PlaceHolder Class Structure
};

typedef struct avTVSensor avTVSensor, *PavTVSensor;

struct avTVSensor { // PlaceHolder Class Structure
};

typedef struct avReceiver avReceiver, *PavReceiver;

struct avReceiver { // PlaceHolder Class Structure
};

typedef struct ccIndicationTemplateBuffer ccIndicationTemplateBuffer, *PccIndicationTemplateBuffer;

struct ccIndicationTemplateBuffer { // PlaceHolder Class Structure
};

typedef struct avSyncable avSyncable, *PavSyncable;

struct avSyncable { // PlaceHolder Class Structure
};

typedef struct avTransponder avTransponder, *PavTransponder;

struct avTransponder { // PlaceHolder Class Structure
};

typedef struct avR60Seeker avR60Seeker, *PavR60Seeker;

struct avR60Seeker { // PlaceHolder Class Structure
};

typedef struct avFMProxyBase avFMProxyBase, *PavFMProxyBase;

struct avFMProxyBase { // PlaceHolder Class Structure
};

typedef struct eqR73 eqR73, *PeqR73;

struct eqR73 { // PlaceHolder Class Structure
};

typedef struct GestureComplex GestureComplex, *PGestureComplex;

struct GestureComplex { // PlaceHolder Class Structure
};

typedef struct gear_handle gear_handle, *Pgear_handle;

struct gear_handle { // PlaceHolder Class Structure
};

typedef struct avRemoteMagnetCompass avRemoteMagnetCompass, *PavRemoteMagnetCompass;

struct avRemoteMagnetCompass { // PlaceHolder Class Structure
};

typedef struct ccElementAutoUpdater ccElementAutoUpdater, *PccElementAutoUpdater;

struct ccElementAutoUpdater { // PlaceHolder Class Structure
};

typedef struct TransferFunctionForce TransferFunctionForce, *PTransferFunctionForce;

struct TransferFunctionForce { // PlaceHolder Class Structure
};

typedef struct avBasicOxygenSystemInterface avBasicOxygenSystemInterface, *PavBasicOxygenSystemInterface;

struct avBasicOxygenSystemInterface { // PlaceHolder Class Structure
};

typedef struct avElectricallyHeldSwitch avElectricallyHeldSwitch, *PavElectricallyHeldSwitch;

struct avElectricallyHeldSwitch { // PlaceHolder Class Structure
};

typedef struct avRangefinder avRangefinder, *PavRangefinder;

struct avRangefinder { // PlaceHolder Class Structure
};

typedef struct avAGB_3K avAGB_3K, *PavAGB_3K;

struct avAGB_3K { // PlaceHolder Class Structure
};

typedef struct eqTVGuidedWeapon eqTVGuidedWeapon, *PeqTVGuidedWeapon;

struct eqTVGuidedWeapon { // PlaceHolder Class Structure
};

typedef struct SightDevice SightDevice, *PSightDevice;

struct SightDevice { // PlaceHolder Class Structure
};

typedef struct avTACAN avTACAN, *PavTACAN;

struct avTACAN { // PlaceHolder Class Structure
};

typedef struct SNSv2 SNSv2, *PSNSv2;

struct SNSv2 { // PlaceHolder Class Structure
};

typedef struct avMechanicClock avMechanicClock, *PavMechanicClock;

struct avMechanicClock { // PlaceHolder Class Structure
};

typedef struct avAHRS avAHRS, *PavAHRS;

struct avAHRS { // PlaceHolder Class Structure
};

typedef struct avImuStateVector avImuStateVector, *PavImuStateVector;

struct avImuStateVector { // PlaceHolder Class Structure
};

typedef struct avA_RV_Altimeter avA_RV_Altimeter, *PavA_RV_Altimeter;

struct avA_RV_Altimeter { // PlaceHolder Class Structure
};

typedef struct TransferFunctionIntegral TransferFunctionIntegral, *PTransferFunctionIntegral;

struct TransferFunctionIntegral { // PlaceHolder Class Structure
};

typedef struct GyroElectricSource GyroElectricSource, *PGyroElectricSource;

struct GyroElectricSource { // PlaceHolder Class Structure
};

typedef struct avVMS_ALMAZ_UP avVMS_ALMAZ_UP, *PavVMS_ALMAZ_UP;

struct avVMS_ALMAZ_UP { // PlaceHolder Class Structure
};

typedef struct avUV_26 avUV_26, *PavUV_26;

struct avUV_26 { // PlaceHolder Class Structure
};

typedef struct avA2GRadar avA2GRadar, *PavA2GRadar;

struct avA2GRadar { // PlaceHolder Class Structure
};

typedef struct avRollPitchGyro avRollPitchGyro, *PavRollPitchGyro;

struct avRollPitchGyro { // PlaceHolder Class Structure
};

typedef struct avArcadeRadar avArcadeRadar, *PavArcadeRadar;

struct avArcadeRadar { // PlaceHolder Class Structure
};

typedef struct avElectricSourceParamDriven avElectricSourceParamDriven, *PavElectricSourceParamDriven;

struct avElectricSourceParamDriven { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avDevice> avBasicTimer<cockpit::avDevice>, *PavBasicTimer<cockpit::avDevice>;

struct avBasicTimer<cockpit::avDevice> { // PlaceHolder Class Structure
};

typedef struct eqSidewinderNew eqSidewinderNew, *PeqSidewinderNew;

struct eqSidewinderNew { // PlaceHolder Class Structure
};

typedef struct avVHF_FuG16ZY avVHF_FuG16ZY, *PavVHF_FuG16ZY;

struct avVHF_FuG16ZY { // PlaceHolder Class Structure
};

typedef struct ccPanelGaugeCycled ccPanelGaugeCycled, *PccPanelGaugeCycled;

struct ccPanelGaugeCycled { // PlaceHolder Class Structure
};

typedef struct DynamicBaseRadio DynamicBaseRadio, *PDynamicBaseRadio;

struct DynamicBaseRadio { // PlaceHolder Class Structure
};

typedef struct eqAGM_65E eqAGM_65E, *PeqAGM_65E;

struct eqAGM_65E { // PlaceHolder Class Structure
};

typedef struct avSNS avSNS, *PavSNS;

struct avSNS { // PlaceHolder Class Structure
};

typedef struct avMechanicAccelerometer avMechanicAccelerometer, *PavMechanicAccelerometer;

struct avMechanicAccelerometer { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avSimpleWeaponSystem> avBasicTimer<cockpit::avSimpleWeaponSystem>, *PavBasicTimer<cockpit::avSimpleWeaponSystem>;

struct avBasicTimer<cockpit::avSimpleWeaponSystem> { // PlaceHolder Class Structure
};

typedef struct arcade_target arcade_target, *Parcade_target;

struct arcade_target { // PlaceHolder Class Structure
};

typedef struct BombSight BombSight, *PBombSight;

struct BombSight { // PlaceHolder Class Structure
};

typedef struct IAvionicsDataProxy IAvionicsDataProxy, *PIAvionicsDataProxy;

struct IAvionicsDataProxy { // PlaceHolder Class Structure
};

typedef struct ccPanelGaugeForParameter ccPanelGaugeForParameter, *PccPanelGaugeForParameter;

struct ccPanelGaugeForParameter { // PlaceHolder Class Structure
};

typedef struct ccPanelGaugeExternalArgToCockpit ccPanelGaugeExternalArgToCockpit, *PccPanelGaugeExternalArgToCockpit;

struct ccPanelGaugeExternalArgToCockpit { // PlaceHolder Class Structure
};

typedef struct avHSI avHSI, *PavHSI;

struct avHSI { // PlaceHolder Class Structure
};

typedef struct avIMU avIMU, *PavIMU;

struct avIMU { // PlaceHolder Class Structure
};

typedef struct ClusterBombSightV2 ClusterBombSightV2, *PClusterBombSightV2;

struct ClusterBombSightV2 { // PlaceHolder Class Structure
};

typedef struct TransferFunction TransferFunction, *PTransferFunction;

struct TransferFunction { // PlaceHolder Class Structure
};

typedef struct avEmbeddedNavigation avEmbeddedNavigation, *PavEmbeddedNavigation;

struct avEmbeddedNavigation { // PlaceHolder Class Structure
};

typedef struct avIFF_APX_72 avIFF_APX_72, *PavIFF_APX_72;

struct avIFF_APX_72 { // PlaceHolder Class Structure
};

typedef struct ccIndicatorBake ccIndicatorBake, *PccIndicatorBake;

struct ccIndicatorBake { // PlaceHolder Class Structure
};

typedef struct avHUD avHUD, *PavHUD;

struct avHUD { // PlaceHolder Class Structure
};

typedef struct SimpleWeaponSystemSightUpdate SimpleWeaponSystemSightUpdate, *PSimpleWeaponSystemSightUpdate;

struct SimpleWeaponSystemSightUpdate { // PlaceHolder Class Structure
};

typedef struct avDirAntenna avDirAntenna, *PavDirAntenna;

struct avDirAntenna { // PlaceHolder Class Structure
};

typedef struct avR_828 avR_828, *PavR_828;

struct avR_828 { // PlaceHolder Class Structure
};

typedef struct avExternalCargoView avExternalCargoView, *PavExternalCargoView;

struct avExternalCargoView { // PlaceHolder Class Structure
};

typedef struct chart_item chart_item, *Pchart_item;

struct chart_item { // PlaceHolder Class Structure
};

typedef struct avChaffFlareDispencer avChaffFlareDispencer, *PavChaffFlareDispencer;

struct avChaffFlareDispencer { // PlaceHolder Class Structure
};

typedef struct avSPO_15 avSPO_15, *PavSPO_15;

struct avSPO_15 { // PlaceHolder Class Structure
};

typedef struct ccArcade_template_buffer ccArcade_template_buffer, *PccArcade_template_buffer;

struct ccArcade_template_buffer { // PlaceHolder Class Structure
};

typedef struct avDevice_BasicTimer avDevice_BasicTimer, *PavDevice_BasicTimer;

struct avDevice_BasicTimer { // PlaceHolder Class Structure
};

typedef struct GestureComplexImpl GestureComplexImpl, *PGestureComplexImpl;

struct GestureComplexImpl { // PlaceHolder Class Structure
};

typedef struct IavINS IavINS, *PIavINS;

struct IavINS { // PlaceHolder Class Structure
};

typedef struct avDrawCachedObj avDrawCachedObj, *PavDrawCachedObj;

struct avDrawCachedObj { // PlaceHolder Class Structure
};

typedef struct avBaseARC avBaseARC, *PavBaseARC;

struct avBaseARC { // PlaceHolder Class Structure
};

typedef struct avAN_ALE_40V avAN_ALE_40V, *PavAN_ALE_40V;

struct avAN_ALE_40V { // PlaceHolder Class Structure
};

typedef struct avR73seeker avR73seeker, *PavR73seeker;

struct avR73seeker { // PlaceHolder Class Structure
};

typedef struct ccMouseHandler ccMouseHandler, *PccMouseHandler;

struct ccMouseHandler { // PlaceHolder Class Structure
};

typedef struct TransferFunctionIntegralLimited TransferFunctionIntegralLimited, *PTransferFunctionIntegralLimited;

struct TransferFunctionIntegralLimited { // PlaceHolder Class Structure
};

typedef struct avTW_Prime avTW_Prime, *PavTW_Prime;

struct avTW_Prime { // PlaceHolder Class Structure
};

typedef struct avVHF_SCR_522A avVHF_SCR_522A, *PavVHF_SCR_522A;

struct avVHF_SCR_522A { // PlaceHolder Class Structure
};

typedef struct gauge_linear gauge_linear, *Pgauge_linear;

struct gauge_linear { // PlaceHolder Class Structure
};

typedef struct avBreakable avBreakable, *PavBreakable;

struct avBreakable { // PlaceHolder Class Structure
};

typedef struct avINS avINS, *PavINS;

struct avINS { // PlaceHolder Class Structure
};

typedef struct avADF avADF, *PavADF;

struct avADF { // PlaceHolder Class Structure
};

typedef struct avBasicSAI avBasicSAI, *PavBasicSAI;

struct avBasicSAI { // PlaceHolder Class Structure
};

typedef struct MissileSight MissileSight, *PMissileSight;

struct MissileSight { // PlaceHolder Class Structure
};

typedef struct avSpot_SearchTimer avSpot_SearchTimer, *PavSpot_SearchTimer;

struct avSpot_SearchTimer { // PlaceHolder Class Structure
};

typedef struct ccCachedElementsBuffer ccCachedElementsBuffer, *PccCachedElementsBuffer;

struct ccCachedElementsBuffer { // PlaceHolder Class Structure
};

typedef struct avPlayerTaskHandler avPlayerTaskHandler, *PavPlayerTaskHandler;

struct avPlayerTaskHandler { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avBasicSensor> avBasicTimer<cockpit::avBasicSensor>, *PavBasicTimer<cockpit::avBasicSensor>;

struct avBasicTimer<cockpit::avBasicSensor> { // PlaceHolder Class Structure
};

typedef struct SNS_GPS_GLONASS SNS_GPS_GLONASS, *PSNS_GPS_GLONASS;

struct SNS_GPS_GLONASS { // PlaceHolder Class Structure
};

typedef struct avVMS avVMS, *PavVMS;

struct avVMS { // PlaceHolder Class Structure
};

typedef struct ccPanelGauge_internal ccPanelGauge_internal, *PccPanelGauge_internal;

struct ccPanelGauge_internal { // PlaceHolder Class Structure
};

typedef struct avTACAN_ARN118 avTACAN_ARN118, *PavTACAN_ARN118;

struct avTACAN_ARN118 { // PlaceHolder Class Structure
};

typedef struct avBasicLightSystem avBasicLightSystem, *PavBasicLightSystem;

struct avBasicLightSystem { // PlaceHolder Class Structure
};

typedef struct avActuator_BasicTimer avActuator_BasicTimer, *PavActuator_BasicTimer;

struct avActuator_BasicTimer { // PlaceHolder Class Structure
};

typedef struct avSlipBall avSlipBall, *PavSlipBall;

struct avSlipBall { // PlaceHolder Class Structure
};

typedef struct ClusterBombSight ClusterBombSight, *PClusterBombSight;

struct ClusterBombSight { // PlaceHolder Class Structure
};

typedef struct avMagneticCompass avMagneticCompass, *PavMagneticCompass;

struct avMagneticCompass { // PlaceHolder Class Structure
};

typedef struct gauge_periodic gauge_periodic, *Pgauge_periodic;

struct gauge_periodic { // PlaceHolder Class Structure
};

typedef struct avMovingMapPoint avMovingMapPoint, *PavMovingMapPoint;

struct avMovingMapPoint { // PlaceHolder Class Structure
};

typedef struct avMovingMap_Cursor avMovingMap_Cursor, *PavMovingMap_Cursor;

struct avMovingMap_Cursor { // PlaceHolder Class Structure
};

typedef struct ccPanelGauge ccPanelGauge, *PccPanelGauge;

struct ccPanelGauge { // PlaceHolder Class Structure
};

typedef struct avBasicSensor_SearchTimer avBasicSensor_SearchTimer, *PavBasicSensor_SearchTimer;

struct avBasicSensor_SearchTimer { // PlaceHolder Class Structure
};

typedef struct RocketSight RocketSight, *PRocketSight;

struct RocketSight { // PlaceHolder Class Structure
};

typedef struct GunSight GunSight, *PGunSight;

struct GunSight { // PlaceHolder Class Structure
};

typedef struct ceFont ceFont, *PceFont;

struct ceFont { // PlaceHolder Class Structure
};

typedef struct avDNS avDNS, *PavDNS;

struct avDNS { // PlaceHolder Class Structure
};

typedef struct ambient_controller ambient_controller, *Pambient_controller;

struct ambient_controller { // PlaceHolder Class Structure
};

typedef struct avPlatform avPlatform, *PavPlatform;

struct avPlatform { // PlaceHolder Class Structure
};

typedef struct avWeap_ReleaseTimer_Activity avWeap_ReleaseTimer_Activity, *PavWeap_ReleaseTimer_Activity;

struct avWeap_ReleaseTimer_Activity { // PlaceHolder Class Structure
};

typedef struct avIFF_FuG25 avIFF_FuG25, *PavIFF_FuG25;

struct avIFF_FuG25 { // PlaceHolder Class Structure
};

typedef struct eqSidewinder eqSidewinder, *PeqSidewinder;

struct eqSidewinder { // PlaceHolder Class Structure
};

typedef struct SNS_GPS SNS_GPS, *PSNS_GPS;

struct SNS_GPS { // PlaceHolder Class Structure
};

typedef struct avSidewinderSeeker avSidewinderSeeker, *PavSidewinderSeeker;

struct avSidewinderSeeker { // PlaceHolder Class Structure
};

typedef struct ccContextRelatedObject ccContextRelatedObject, *PccContextRelatedObject;

struct ccContextRelatedObject { // PlaceHolder Class Structure
};

typedef struct eqIgla eqIgla, *PeqIgla;

struct eqIgla { // PlaceHolder Class Structure
};

typedef struct clickableElementData clickableElementData, *PclickableElementData;

struct clickableElementData { // PlaceHolder Class Structure
};

typedef struct TransferFunctionRealDifferential TransferFunctionRealDifferential, *PTransferFunctionRealDifferential;

struct TransferFunctionRealDifferential { // PlaceHolder Class Structure
};

typedef struct light_arg_controller light_arg_controller, *Plight_arg_controller;

struct light_arg_controller { // PlaceHolder Class Structure
};

typedef struct avINSv2 avINSv2, *PavINSv2;

struct avINSv2 { // PlaceHolder Class Structure
};

typedef struct gauge_limited gauge_limited, *Pgauge_limited;

struct gauge_limited { // PlaceHolder Class Structure
};

typedef struct mov_ptr_mark mov_ptr_mark, *Pmov_ptr_mark;

struct mov_ptr_mark { // PlaceHolder Class Structure
};

typedef struct flood_light_controller flood_light_controller, *Pflood_light_controller;

struct flood_light_controller { // PlaceHolder Class Structure
};

typedef struct SimpleOctTreeLoad SimpleOctTreeLoad, *PSimpleOctTreeLoad;

struct SimpleOctTreeLoad { // PlaceHolder Class Structure
};

typedef struct MechCanopyCrank MechCanopyCrank, *PMechCanopyCrank;

struct MechCanopyCrank { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avSimpleRadar> avBasicTimer<cockpit::avSimpleRadar>, *PavBasicTimer<cockpit::avSimpleRadar>;

struct avBasicTimer<cockpit::avSimpleRadar> { // PlaceHolder Class Structure
};

typedef struct TransferFunctionAperiodic TransferFunctionAperiodic, *PTransferFunctionAperiodic;

struct TransferFunctionAperiodic { // PlaceHolder Class Structure
};

typedef struct avElectroMagneticDetector avElectroMagneticDetector, *PavElectroMagneticDetector;

struct avElectroMagneticDetector { // PlaceHolder Class Structure
};

typedef struct avBasicElectric avBasicElectric, *PavBasicElectric;

struct avBasicElectric { // PlaceHolder Class Structure
};

typedef struct mission_target mission_target, *Pmission_target;

struct mission_target { // PlaceHolder Class Structure
};

typedef struct avHUD_SEI31 avHUD_SEI31, *PavHUD_SEI31;

struct avHUD_SEI31 { // PlaceHolder Class Structure
};

typedef struct avSPO_10base avSPO_10base, *PavSPO_10base;

struct avSPO_10base { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avLaserSpotDetector> avBasicTimer<cockpit::avLaserSpotDetector>, *PavBasicTimer<cockpit::avLaserSpotDetector>;

struct avBasicTimer<cockpit::avLaserSpotDetector> { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::avActuator> avBasicTimer<cockpit::avActuator>, *PavBasicTimer<cockpit::avActuator>;

struct avBasicTimer<cockpit::avActuator> { // PlaceHolder Class Structure
};

typedef struct avSimpleTurnSlipIndicator avSimpleTurnSlipIndicator, *PavSimpleTurnSlipIndicator;

struct avSimpleTurnSlipIndicator { // PlaceHolder Class Structure
};

typedef struct avSlipBallExternalSensors avSlipBallExternalSensors, *PavSlipBallExternalSensors;

struct avSlipBallExternalSensors { // PlaceHolder Class Structure
};

typedef struct ceParsedElement ceParsedElement, *PceParsedElement;

struct ceParsedElement { // PlaceHolder Class Structure
};

typedef struct avBasicTimer<cockpit::ccDrawable> avBasicTimer<cockpit::ccDrawable>, *PavBasicTimer<cockpit::ccDrawable>;

struct avBasicTimer<cockpit::ccDrawable> { // PlaceHolder Class Structure
};

typedef struct avRWR avRWR, *PavRWR;

struct avRWR { // PlaceHolder Class Structure
};

typedef struct avAN_ALR69V avAN_ALR69V, *PavAN_ALR69V;

struct avAN_ALR69V { // PlaceHolder Class Structure
};

typedef struct IntercomImplement IntercomImplement, *PIntercomImplement;

struct IntercomImplement { // PlaceHolder Class Structure
};

typedef struct avINSinterface avINSinterface, *PavINSinterface;

struct avINSinterface { // PlaceHolder Class Structure
};

typedef struct IavImuStateVector IavImuStateVector, *PIavImuStateVector;

struct IavImuStateVector { // PlaceHolder Class Structure
};




float __thiscall cockpit::avMovingMap_Cursor::getX(avMovingMap_Cursor *this);
wPosition3<double> * __thiscall cockpit::avMovingMapPoint::getPosition(avMovingMapPoint *this);
avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this,avMovingMap *param_1);
avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this,avMovingMapPoint *param_1);
avMovingMap_Cursor * __thiscall cockpit::avMovingMap_Cursor::avMovingMap_Cursor(avMovingMap_Cursor *this,avMovingMap_Cursor *param_1);
void __thiscall cockpit::avMovingMap::~avMovingMap(avMovingMap *this);
avMovingMap * __thiscall cockpit::avMovingMap::operator=(avMovingMap *this,avMovingMap *param_1);
avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::operator=(avMovingMapPoint *this,avMovingMapPoint *param_1);
avMovingMap_Cursor * __thiscall cockpit::avMovingMap_Cursor::operator=(avMovingMap_Cursor *this,avMovingMap_Cursor *param_1);
basic_string<char> * __thiscall cockpit::avMovingMapPoint::getName(avMovingMapPoint *this);
int __thiscall cockpit::avMovingMapPoint::getNumber(avMovingMapPoint *this);
Vec3d * __thiscall cockpit::avMovingMapPoint::getPoint(avMovingMapPoint *this);
uint __thiscall cockpit::avMovingMapPoint::getSubType(avMovingMapPoint *this);
uint __thiscall cockpit::avMovingMapPoint::getType(avMovingMapPoint *this);
float __thiscall cockpit::avMovingMap_Cursor::getY(avMovingMap_Cursor *this);
Camera * __thiscall cockpit::avMovingMap::get_camera(avMovingMap *this);
bool __thiscall cockpit::avMovingMap_Cursor::in_slew(avMovingMap_Cursor *this);
void __thiscall cockpit::avMovingMapPoint::setName(avMovingMapPoint *this,basic_string<char> *param_1);
void __thiscall cockpit::avMovingMapPoint::setNameRaw(avMovingMapPoint *this,undefined8 *param_2);
void __thiscall cockpit::avMovingMapPoint::setNumber(avMovingMapPoint *this,int param_1);
void __thiscall cockpit::avMovingMapPoint::setOrientedBox(avMovingMapPoint *this,BoundingBoxImpl<osg::Vec3f> *param_1);
void __thiscall cockpit::avMovingMapPoint::setSubType(avMovingMapPoint *this,uint param_1);
void __thiscall cockpit::avMovingMapPoint::setType(avMovingMapPoint *this,uint param_1);
void __thiscall cockpit::avMovingMap_Cursor::setX(avMovingMap_Cursor *this,float param_1);
void __thiscall cockpit::avMovingMap_Cursor::setY(avMovingMap_Cursor *this,float param_1);
void __thiscall cockpit::avMovingMap_Cursor::set_limits_X(avMovingMap_Cursor *this,float param_1,float param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_limits_X(avMovingMap_Cursor *this,avMovingMap_Cursor *param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_limits_Y(avMovingMap_Cursor *this,float param_1,float param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_limits_Y(avMovingMap_Cursor *this,avMovingMap_Cursor *param_2);
void __thiscall cockpit::avMovingMap_Cursor::start_X(avMovingMap_Cursor *this,double param_1);
void __thiscall cockpit::avMovingMap_Cursor::start_Y(avMovingMap_Cursor *this,double param_1);
void __thiscall cockpit::avMovingMap_Cursor::stop_X(avMovingMap_Cursor *this);
void __thiscall cockpit::avMovingMap_Cursor::stop_Y(avMovingMap_Cursor *this);
avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this);
avMovingMap_Cursor * __thiscall cockpit::avMovingMap_Cursor::avMovingMap_Cursor(avMovingMap_Cursor *this);
void __thiscall cockpit::avMovingMap_Cursor::~avMovingMap_Cursor(avMovingMap_Cursor *this);
void __thiscall cockpit::avMovingMap::check_camera_orientation(avMovingMap *this);
void __thiscall cockpit::avMovingMap::check_camera_volume(avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5);
void __thiscall cockpit::avMovingMap_Cursor::clear(avMovingMap_Cursor *this);
void __thiscall cockpit::avMovingMap_Cursor::clear_moving(avMovingMap_Cursor *this);
Camera * __thiscall cockpit::avMovingMap::get_camera(avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5);
void __thiscall cockpit::avMovingMap::get_map_center(avMovingMap *this);
bool __thiscall cockpit::avMovingMap_Cursor::in_limit(avMovingMap_Cursor *this);
Vec3f * __thiscall cockpit::avMovingMap::relative_position_map(avMovingMap *this,Vec3f *param_1);
void __thiscall cockpit::avMovingMap_Cursor::set_from_axis_absolute_X(avMovingMap_Cursor *this,float param_1,bool param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_from_axis_absolute_Y(avMovingMap_Cursor *this,float param_1,bool param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_from_axis_relative_X(avMovingMap_Cursor *this,float param_1,bool param_2);
void __thiscall cockpit::avMovingMap_Cursor::set_from_axis_relative_Y(avMovingMap_Cursor *this,float param_1,bool param_2);
void __thiscall cockpit::avMovingMap_Cursor::to_limit(avMovingMap_Cursor *this);
bool __thiscall cockpit::avMovingMap_Cursor::update_X(avMovingMap_Cursor *this,double param_1,bool param_2);
bool __thiscall cockpit::avMovingMap_Cursor::update_Y(avMovingMap_Cursor *this,double param_1,bool param_2);
avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this);
void __thiscall cockpit::avMovingMapPoint::~avMovingMapPoint(avMovingMapPoint *this);
void __thiscall cockpit::avMovingMapPoint::setNameByNumber(avMovingMapPoint *this,int param_1,char *param_2);
void __thiscall cockpit::avMovingMapPoint::setPoint(avMovingMapPoint *this,Vec3d *param_1);
void __thiscall cockpit::avMovingMapPoint::setPosition(avMovingMapPoint *this,wPosition3<double> *param_1);
void __thiscall cockpit::avMovingMapPoint::setRotate(avMovingMapPoint *this,float param_1);
void __thiscall cockpit::avMovingMapPoint::setRotatePoint(avMovingMapPoint *this,Vec3d *param_1,float param_2);


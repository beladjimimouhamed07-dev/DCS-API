#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QProcess
{
public:

    // RVA: 0x1B5 | Ordinal: 438
        void QProcess(class QObject *);

    // RVA: 0x8A4 | Ordinal: 2213
        void arguments(void) const;

    // RVA: 0x8BD | Ordinal: 2238
        void atEnd(void) const;

    // RVA: 0x937 | Ordinal: 2360
        void bytesAvailable(void) const;

    // RVA: 0x93C | Ordinal: 2365
        void bytesToWrite(void) const;

    // RVA: 0x959 | Ordinal: 2394
        void canReadLine(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void close(void);

    // RVA: 0xA07 | Ordinal: 2568
        void closeReadChannel(enum QProcess::ProcessChannel);

    // RVA: 0xA08 | Ordinal: 2569
        void closeWriteChannel(void);

    // RVA: 0xBC4 | Ordinal: 3013
        void d_func(void);

    // RVA: 0xBC5 | Ordinal: 3014
        void d_func(void) const;

    // RVA: 0xD6E | Ordinal: 3439
        void environment(void) const;

    // RVA: 0xD82 | Ordinal: 3459
        void error(enum QProcess::ProcessError);

    // RVA: 0xD83 | Ordinal: 3460
        void error(void) const;

    // RVA: 0xD88 | Ordinal: 3465
        void errorOccurred(enum QProcess::ProcessError);

    // RVA: 0xDC9 | Ordinal: 3530
        void execute(class QString const &);

    // RVA: 0xDCA | Ordinal: 3531
        void execute(class QString const &, class QStringList const &);

    // RVA: 0xDD5 | Ordinal: 3542
        void exitCode(void) const;

    // RVA: 0xDD8 | Ordinal: 3545
        void exitStatus(void) const;

    // RVA: 0xE4E | Ordinal: 3663
        void finished(int);

    // RVA: 0xE4F | Ordinal: 3664
        void finished(int, enum QProcess::ExitStatus);

    // RVA: 0xFF5 | Ordinal: 4086
        void inputChannelMode(void) const;

    // RVA: 0x11A6 | Ordinal: 4519
        void isSequential(void) const;

    // RVA: 0x1252 | Ordinal: 4691
        void kill(void);

    // RVA: 0x1366 | Ordinal: 4967
        void metaObject(void) const;

    // RVA: 0x141F | Ordinal: 5152
        void nativeArguments(void) const;

    // RVA: 0x1456 | Ordinal: 5207
        void nullDevice(void);

    // RVA: 0x148B | Ordinal: 5260
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x14E1 | Ordinal: 5346
        void pid(void) const;

    // RVA: 0x1534 | Ordinal: 5429
        void processChannelMode(void) const;

    // RVA: 0x1536 | Ordinal: 5431
        void processEnvironment(void) const;

    // RVA: 0x153D | Ordinal: 5438
        void processId(void) const;

    // RVA: 0x1545 | Ordinal: 5446
        void program(void) const;

    // RVA: 0x164E | Ordinal: 5711
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x168B | Ordinal: 5772
        void qt_metacast(char const *);

    // RVA: 0x16D2 | Ordinal: 5843
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1722 | Ordinal: 5923
        void readAllStandardError(void);

    // RVA: 0x1723 | Ordinal: 5924
        void readAllStandardOutput(void);

    // RVA: 0x1727 | Ordinal: 5928
        void readChannel(void) const;

    // RVA: 0x172A | Ordinal: 5931
        void readChannelMode(void) const;

    // RVA: 0x172D | Ordinal: 5934
        void readData(char *, __int64);

    // RVA: 0x1749 | Ordinal: 5962
        void readyReadStandardError(struct QProcess::QPrivateSignal);

    // RVA: 0x174A | Ordinal: 5963
        void readyReadStandardOutput(struct QProcess::QPrivateSignal);

    // RVA: 0x192D | Ordinal: 6446
        void setArguments(class QStringList const &);

    // RVA: 0x1959 | Ordinal: 6490
        void setCreateProcessArgumentsModifier(class std::function<void __cdecl(struct QProcess::CreateProcessArguments *)>);

    // RVA: 0x199E | Ordinal: 6559
        void setEnvironment(class QStringList const &);

    // RVA: 0x19E9 | Ordinal: 6634
        void setInputChannelMode(enum QProcess::InputChannelMode);

    // RVA: 0x1A11 | Ordinal: 6674
        void setNativeArguments(class QString const &);

    // RVA: 0x1A58 | Ordinal: 6745
        void setProcessChannelMode(enum QProcess::ProcessChannelMode);

    // RVA: 0x1A59 | Ordinal: 6746
        void setProcessEnvironment(class QProcessEnvironment const &);

    // RVA: 0x1A5A | Ordinal: 6747
        void setProcessState(enum QProcess::ProcessState);

    // RVA: 0x1A5B | Ordinal: 6748
        void setProgram(class QString const &);

    // RVA: 0x1A6B | Ordinal: 6764
        void setReadChannel(enum QProcess::ProcessChannel);

    // RVA: 0x1A6D | Ordinal: 6766
        void setReadChannelMode(enum QProcess::ProcessChannelMode);

    // RVA: 0x1A9F | Ordinal: 6816
        void setStandardErrorFile(class QString const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1AA0 | Ordinal: 6817
        void setStandardInputFile(class QString const &);

    // RVA: 0x1AA1 | Ordinal: 6818
        void setStandardOutputFile(class QString const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1AA2 | Ordinal: 6819
        void setStandardOutputProcess(class QProcess *);

    // RVA: 0x1AE0 | Ordinal: 6881
        void setWorkingDirectory(class QString const &);

    // RVA: 0x1AED | Ordinal: 6894
        void setupChildProcess(void);

    // RVA: 0x1B7A | Ordinal: 7035
        void splitCommand(class QStringView);

    // RVA: 0x1B9B | Ordinal: 7068
        void start(class QString const &, class QStringList const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1B9C | Ordinal: 7069
        void start(class QString const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1B9D | Ordinal: 7070
        void start(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1BAC | Ordinal: 7085
        void startDetached(__int64 *);

    // RVA: 0x1BAD | Ordinal: 7086
        void startDetached(class QString const &);

    // RVA: 0x1BAE | Ordinal: 7087
        void startDetached(class QString const &, class QStringList const &, class QString const &, __int64 *);

    // RVA: 0x1BAF | Ordinal: 7088
        void startDetached(class QString const &, class QStringList const &);

    // RVA: 0x1BC0 | Ordinal: 7105
        void started(struct QProcess::QPrivateSignal);

    // RVA: 0x1BDF | Ordinal: 7136
        void state(void) const;

    // RVA: 0x1BE2 | Ordinal: 7139
        void stateChanged(enum QProcess::ProcessState, struct QProcess::QPrivateSignal);

    // RVA: 0x1C98 | Ordinal: 7321
        void systemEnvironment(void);

    // RVA: 0x1CC4 | Ordinal: 7365
        void terminate(void);

    // RVA: 0x1E97 | Ordinal: 7832
        void tr(char const *, char const *, int);

    // RVA: 0x1ED6 | Ordinal: 7895
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FE2 | Ordinal: 8163
        void waitForBytesWritten(int);

    // RVA: 0x1FE8 | Ordinal: 8169
        void waitForFinished(int);

    // RVA: 0x1FEE | Ordinal: 8175
        void waitForReadyRead(int);

    // RVA: 0x1FF2 | Ordinal: 8179
        void waitForStarted(int);

    // RVA: 0x2015 | Ordinal: 8214
        void workingDirectory(void) const;

    // RVA: 0x202D | Ordinal: 8238
        void writeData(char const *, __int64);

    // RVA: 0x347 | Ordinal: 840
        void _QProcess(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QPROCESS_HPP

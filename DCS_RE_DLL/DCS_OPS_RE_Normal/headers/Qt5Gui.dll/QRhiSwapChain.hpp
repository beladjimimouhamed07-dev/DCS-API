#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiSwapChain
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiSwapChain
{
public:

    // RVA: 0x2BD | Ordinal: 702
        void QRhiSwapChain(class QRhiImplementation *);

    // RVA: 0xCF4 | Ordinal: 3317
        void currentPixelSize(void) const;

    // RVA: 0xDF5 | Ordinal: 3574
        void depthStencil(void) const;

    // RVA: 0x1097 | Ordinal: 4248
        void flags(void) const;

    // RVA: 0x56FE | Ordinal: 22271
        void renderPassDescriptor(void) const;

    // RVA: 0x5749 | Ordinal: 22346
        void resourceType(void) const;

    // RVA: 0x5794 | Ordinal: 22421
        void sampleCount(void) const;

    // RVA: 0x5925 | Ordinal: 22822
        void setDepthStencil(class QRhiRenderBuffer *);

    // RVA: 0x5982 | Ordinal: 22915
        void setFlags(class QFlags<enum QRhiSwapChain::Flag>);

    // RVA: 0x5B3A | Ordinal: 23355
        void setRenderPassDescriptor(class QRhiRenderPassDescriptor *);

    // RVA: 0x5B63 | Ordinal: 23396
        void setSampleCount(int);

    // RVA: 0x5CC1 | Ordinal: 23746
        void setWindow(class QWindow *);

    // RVA: 0x616B | Ordinal: 24940
        void window(void) const;

    // RVA: 0x505 | Ordinal: 1286
        void _QRhiSwapChain(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHISWAPCHAIN_HPP

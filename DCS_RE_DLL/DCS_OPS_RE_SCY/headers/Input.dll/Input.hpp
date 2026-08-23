#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: Input
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Input
{
public:

    // RVA: 0x2 | Ordinal: 3
        void Input(void);

    // RVA: 0x22 | Ordinal: 35
        void activate(void);

    // RVA: 0x23 | Ordinal: 36
        void addAxisCombo(class ed::basic_string<char> const &, struct AxisInfo const &, class ed::vector<struct KeyInfo, class ed::allocator<struct KeyInfo>> const &, class InputAxisAction const &, struct InputFilterInfo const &);

    // RVA: 0x24 | Ordinal: 37
        void addDeviceChangeCallback(class std::shared_ptr<class std::function<void __cdecl(class ed::basic_string<char> const &, bool)>>);

    // RVA: 0x25 | Ordinal: 38
        void addFakeJoystick(class ed::basic_string<char> const &, bool);

    // RVA: 0x26 | Ordinal: 39
        void addKeyCombo(class ed::basic_string<char> const &, struct KeyInfo const &, class ed::vector<struct KeyInfo, class ed::allocator<struct KeyInfo>> const &, class InputKeyAction const &);

    // RVA: 0x27 | Ordinal: 40
        void addOuterKey(int, bool);

    // RVA: 0x28 | Ordinal: 41
        void addReformer(class ed::basic_string<char> const &, struct KeyInfo const &, bool);

    // RVA: 0x2A | Ordinal: 43
        void attachCustomDevice(class InputDevice *);

    // RVA: 0x2C | Ordinal: 45
        void clearInputActions(void);

    // RVA: 0x2D | Ordinal: 46
        void clearLayerStack(void);

    // RVA: 0x2E | Ordinal: 47
        void clearReformers(class ed::basic_string<char> const &);

    // RVA: 0x30 | Ordinal: 49
        void createLayer(class ed::basic_string<char> const &);

    // RVA: 0x31 | Ordinal: 50
        void deactivate(void);

    // RVA: 0x32 | Ordinal: 51
        void deleteLayer(class ed::basic_string<char> const &);

    // RVA: 0x33 | Ordinal: 52
        void detachCustomDevice(class InputDevice *);

    // RVA: 0x34 | Ordinal: 53
        void dropDefferedActions(void);

    // RVA: 0x35 | Ordinal: 54
        void flush(void);

    // RVA: 0x38 | Ordinal: 57
        void getAxesValueMax(void);

    // RVA: 0x39 | Ordinal: 58
        void getAxisCommandAssignedToForceFeedbackDevice(class ed::basic_string<char> const &, int);

    // RVA: 0x3A | Ordinal: 59
        void getAxisInfo(int, int);

    // RVA: 0x3D | Ordinal: 62
        void getDeviceAxes(class ed::basic_string<char> const &);

    // RVA: 0x3E | Ordinal: 63
        void getDeviceDisabled(class ed::basic_string<char> const &);

    // RVA: 0x3F | Ordinal: 64
        void getDeviceId(class ed::basic_string<char> const &);

    // RVA: 0x40 | Ordinal: 65
        void getDeviceKeys(class ed::basic_string<char> const &);

    // RVA: 0x41 | Ordinal: 66
        void getDeviceNames(void);

    // RVA: 0x42 | Ordinal: 67
        void getDeviceType(class ed::basic_string<char> const &);

    // RVA: 0x43 | Ordinal: 68
        void getDevicesForceFeedback(void);

    // RVA: 0x46 | Ordinal: 71
        void getExtendedTooltipsOn(void) const;

    // RVA: 0x47 | Ordinal: 72
        void getForceFeedback(class ed::basic_string<char> const &);

    // RVA: 0x49 | Ordinal: 74
        void getFullSync(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4C | Ordinal: 77
        void getHeadTrackerDllPath(void);

    // RVA: 0x4E | Ordinal: 79
        void getIgnoreUiLayer(void);

    // RVA: 0x4F | Ordinal: 80
        void getInputActions(void) const;

    // RVA: 0x50 | Ordinal: 81
        void getKeyInfo(int, int);

    // RVA: 0x52 | Ordinal: 83
        void getKeyboardDeviceID(void);

    // RVA: 0x53 | Ordinal: 84
        void getKeyboardDeviceName(void);

    // RVA: 0x54 | Ordinal: 85
        void getLayerExists(class ed::basic_string<char> const &);

    // RVA: 0x55 | Ordinal: 86
        void getLayerStack(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x56 | Ordinal: 87
        void getLoadedLayers(void);

    // RVA: 0x57 | Ordinal: 88
        void getMouseDeviceName(void);

    // RVA: 0x59 | Ordinal: 90
        void getPnPDisabled(void) const;

    // RVA: 0x5C | Ordinal: 93
        void getTopLayer(void);

    // RVA: 0x5E | Ordinal: 95
        void getUiLayerCommandKeyboardKeys(int);

    // RVA: 0x5F | Ordinal: 96
        void getUiLayerHasKeyBinding(int, int);

    // RVA: 0x60 | Ordinal: 97
        void getUiLayerName(void);

    // RVA: 0x61 | Ordinal: 98
        void getUnitMarker(void);

    // RVA: 0x67 | Ordinal: 104
        void handleCtrlBreak(bool);

    // RVA: 0x68 | Ordinal: 105
        void handle_WM_INPUT(void *);

    // RVA: 0x6C | Ordinal: 109
        void ignoreUiLayer(bool);

    // RVA: 0x6D | Ordinal: 110
        void initDbg(void);

    // RVA: 0x6E | Ordinal: 111
        void initialize(void *, class std::shared_ptr<class std::function<void __cdecl(class ed::basic_string<char> const &, bool)>> const &);

    // RVA: 0x6F | Ordinal: 112
        void isHeadTrackerDeviceAttached(void) const;

    // RVA: 0x70 | Ordinal: 113
        void lockKeyboardEvents(class ed::unordered_set<int, struct std::hash<int>, struct std::equal_to<int>, class ed::allocator<int>> const &);

    // RVA: 0x71 | Ordinal: 114
        void lockMouseEvents(class ed::unordered_set<int, struct std::hash<int>, struct std::equal_to<int>, class ed::allocator<int>> const &);

    // RVA: 0x72 | Ordinal: 115
        void onDeviceArrival(void);

    // RVA: 0x73 | Ordinal: 116
        void onDeviceRemove(void);

    // RVA: 0x76 | Ordinal: 119
        void process(void);

    // RVA: 0x77 | Ordinal: 120
        void releaseKeyboardKeys_(void);

    // RVA: 0x78 | Ordinal: 121
        void releaseMouseKeys_(void);

    // RVA: 0x79 | Ordinal: 122
        void removeAllLayers(void);

    // RVA: 0x7A | Ordinal: 123
        void removeDefaultLayer(void);

    // RVA: 0x7B | Ordinal: 124
        void removeDeviceChangeCallback(class std::shared_ptr<class std::function<void __cdecl(class ed::basic_string<char> const &, bool)>>);

    // RVA: 0x7C | Ordinal: 125
        void removeLayerFromStack(class ed::basic_string<char> const &);

    // RVA: 0x7D | Ordinal: 126
        void removeReformer(class ed::basic_string<char> const &, struct KeyInfo const &);

    // RVA: 0x7E | Ordinal: 127
        void rescanDevices(void);

    // RVA: 0x81 | Ordinal: 130
        void setDefaultLayer(class ed::basic_string<char> const &);

    // RVA: 0x82 | Ordinal: 131
        void setDefaultLayerTop(void);

    // RVA: 0x83 | Ordinal: 132
        void setDeviceDisabled(class ed::basic_string<char> const &, bool);

    // RVA: 0x86 | Ordinal: 135
        void setForceFeedback(class ed::basic_string<char> const &, struct Input::FFInfo const &);

    // RVA: 0x87 | Ordinal: 136
        void setFullSync(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x89 | Ordinal: 138
        void setHeadTrackerDllPath(class ed::basic_string<char> const &);

    // RVA: 0x8B | Ordinal: 140
        void setLayerStack(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x8D | Ordinal: 142
        void setPnPDisabled(bool);

    // RVA: 0x90 | Ordinal: 145
        void setTopLayer(class ed::basic_string<char> const &);

    // RVA: 0x91 | Ordinal: 146
        void setUnitMarker(class ed::basic_string<char> const &);

    // RVA: 0x98 | Ordinal: 153
        void turnForceFeedbackOff(void);

    // RVA: 0x99 | Ordinal: 154
        void turnForceFeedbackOn(void);

    // RVA: 0x9A | Ordinal: 155
        void turnLayerForceFeedbackOff_(class ed::basic_string<char> const &);

    // RVA: 0x9B | Ordinal: 156
        void turnLayerForceFeedbackOn_(class ed::basic_string<char> const &);

    // RVA: 0x9D | Ordinal: 158
        void uninitialize(void);

    // RVA: 0x9E | Ordinal: 159
        void unlockKeyboardEvents(bool);

    // RVA: 0x9F | Ordinal: 160
        void unlockMouseEvents(bool);

    // RVA: 0xA | Ordinal: 11
        void _Input(void);
};

// DCS_OPS_RE_INPUT.DLL_INPUT_HPP

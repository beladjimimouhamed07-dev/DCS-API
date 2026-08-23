#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXListBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXListBox
{
public:

    // RVA: 0x1B3 | Ordinal: 436
        void FXListBox(void);

    // RVA: 0x1B4 | Ordinal: 437
        void FXListBox(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9E1 | Ordinal: 2530
        void appendItem(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0xAE9 | Ordinal: 2794
        void clearItems(bool);

    // RVA: 0xBCC | Ordinal: 3021
        void create(void);

    // RVA: 0xC79 | Ordinal: 3194
        void destroy(void);

    // RVA: 0xCAF | Ordinal: 3248
        void detach(void);

    // RVA: 0xCE1 | Ordinal: 3298
        void disable(void);

    // RVA: 0xCF2 | Ordinal: 3315
        void disableItem(int);

    // RVA: 0xE05 | Ordinal: 3590
        void enable(void);

    // RVA: 0xE16 | Ordinal: 3607
        void enableItem(int);

    // RVA: 0xE7A | Ordinal: 3707
        void extractItem(int, bool);

    // RVA: 0xEEA | Ordinal: 3819
        void fillItems(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0xEEB | Ordinal: 3820
        void fillItems(char const *const *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEEC | Ordinal: 3821
        void fillItems(class FX::FXString const *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF23 | Ordinal: 3876
        void findItem(class FX::FXString const &, int, unsigned int) const;

    // RVA: 0xF2A | Ordinal: 3883
        void findItemByData(void *, int, unsigned int) const;

    // RVA: 0x1038 | Ordinal: 4153
        void getBackColor(void) const;

    // RVA: 0x10DC | Ordinal: 4317
        void getCurrentItem(void) const;

    // RVA: 0x1127 | Ordinal: 4392
        void getDefaultHeight(void);

    // RVA: 0x117D | Ordinal: 4478
        void getDefaultWidth(void);

    // RVA: 0x1214 | Ordinal: 4629
        void getFont(void) const;

    // RVA: 0x127D | Ordinal: 4734
        void getHelpText(void) const;

    // RVA: 0x12D5 | Ordinal: 4822
        void getItem(int) const;

    // RVA: 0x12EA | Ordinal: 4843
        void getItemData(int) const;

    // RVA: 0x12F7 | Ordinal: 4856
        void getItemIcon(int) const;

    // RVA: 0x1313 | Ordinal: 4884
        void getItemText(int) const;

    // RVA: 0x140A | Ordinal: 5131
        void getMetaClass(void) const;

    // RVA: 0x14AD | Ordinal: 5294
        void getNumItems(void) const;

    // RVA: 0x14BD | Ordinal: 5310
        void getNumVisible(void) const;

    // RVA: 0x156E | Ordinal: 5487
        void getSelBackColor(void) const;

    // RVA: 0x1583 | Ordinal: 5508
        void getSelTextColor(void) const;

    // RVA: 0x15B0 | Ordinal: 5553
        void getShrinkWrap(void) const;

    // RVA: 0x15C8 | Ordinal: 5577
        void getSortFunc(void) const)(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0x1609 | Ordinal: 5642
        void getTextColor(void) const;

    // RVA: 0x163C | Ordinal: 5693
        void getTipText(void) const;

    // RVA: 0x178A | Ordinal: 6027
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18C6 | Ordinal: 6343
        void insertItem(int, class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x1967 | Ordinal: 6504
        void isItemCurrent(int) const;

    // RVA: 0x1971 | Ordinal: 6514
        void isItemEnabled(int) const;

    // RVA: 0x199E | Ordinal: 6559
        void isMenuShown(void) const;

    // RVA: 0x1A4F | Ordinal: 6736
        void layout(void);

    // RVA: 0x1AFC | Ordinal: 6909
        void load(class FX::FXStream &);

    // RVA: 0x1C47 | Ordinal: 7240
        void manufacture(void);

    // RVA: 0x1EC4 | Ordinal: 7877
        void moveItem(int, int, bool);

    // RVA: 0x2066 | Ordinal: 8295
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2180 | Ordinal: 8577
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E6 | Ordinal: 8679
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A5 | Ordinal: 8870
        void onFieldButton(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22AA | Ordinal: 8875
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FF | Ordinal: 8960
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2309 | Ordinal: 8970
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FA | Ordinal: 9211
        void onListChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FD | Ordinal: 9214
        void onListClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FF | Ordinal: 9216
        void onListCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2400 | Ordinal: 9217
        void onListForward(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2401 | Ordinal: 9218
        void onListUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244A | Ordinal: 9291
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26C3 | Ordinal: 9924
        void prependItem(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x2753 | Ordinal: 10068
        void removeItem(int, bool);

    // RVA: 0x282D | Ordinal: 10286
        void save(class FX::FXStream &) const;

    // RVA: 0x299D | Ordinal: 10654
        void setBackColor(unsigned int);

    // RVA: 0x2A16 | Ordinal: 10775
        void setCurrentItem(int, bool);

    // RVA: 0x2ABE | Ordinal: 10943
        void setFont(class FX::FXFont *);

    // RVA: 0x2B1F | Ordinal: 11040
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B7D | Ordinal: 11134
        void setItem(int, class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x2B8C | Ordinal: 11149
        void setItemData(int, void *) const;

    // RVA: 0x2B93 | Ordinal: 11156
        void setItemIcon(int, class FX::FXIcon *, bool);

    // RVA: 0x2BA8 | Ordinal: 11177
        void setItemText(int, class FX::FXString const &);

    // RVA: 0x2C1F | Ordinal: 11296
        void setNumVisible(int);

    // RVA: 0x2CB9 | Ordinal: 11450
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC8 | Ordinal: 11465
        void setSelTextColor(unsigned int);

    // RVA: 0x2CF5 | Ordinal: 11510
        void setShrinkWrap(bool);

    // RVA: 0x2D0B | Ordinal: 11532
        void setSortFunc(int (__cdecl *)(class FX::FXListItem const *, class FX::FXListItem const *));

    // RVA: 0x2D50 | Ordinal: 11601
        void setTextColor(unsigned int);

    // RVA: 0x2D80 | Ordinal: 11649
        void setTipText(class FX::FXString const &);

    // RVA: 0x2E18 | Ordinal: 11801
        void showMenu(bool);

    // RVA: 0x2E47 | Ordinal: 11848
        void sortItems(void);

    // RVA: 0x44C | Ordinal: 1101
        void _FXListBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXLISTBOX_HPP

#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXComboBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXComboBox
{
public:

    // RVA: 0x8D | Ordinal: 142
        void FXComboBox(void);

    // RVA: 0x8E | Ordinal: 143
        void FXComboBox(class FX::FXComposite *, int, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9D8 | Ordinal: 2521
        void appendItem(class FX::FXString const &, void *, bool);

    // RVA: 0xAE4 | Ordinal: 2789
        void clearItems(bool);

    // RVA: 0xBAA | Ordinal: 2987
        void create(void);

    // RVA: 0xC67 | Ordinal: 3176
        void destroy(void);

    // RVA: 0xC93 | Ordinal: 3220
        void detach(void);

    // RVA: 0xCDD | Ordinal: 3294
        void disable(void);

    // RVA: 0xCEE | Ordinal: 3311
        void disableItem(int);

    // RVA: 0xE01 | Ordinal: 3586
        void enable(void);

    // RVA: 0xE12 | Ordinal: 3603
        void enableItem(int);

    // RVA: 0xEDB | Ordinal: 3804
        void fillItems(class FX::FXString const &, bool);

    // RVA: 0xEDC | Ordinal: 3805
        void fillItems(char const *const *, bool);

    // RVA: 0xEDD | Ordinal: 3806
        void fillItems(class FX::FXString const *, bool);

    // RVA: 0xF1F | Ordinal: 3872
        void findItem(class FX::FXString const &, int, unsigned int) const;

    // RVA: 0xF26 | Ordinal: 3879
        void findItemByData(void *, int, unsigned int) const;

    // RVA: 0x1037 | Ordinal: 4152
        void getBackColor(void) const;

    // RVA: 0x10A7 | Ordinal: 4264
        void getComboStyle(void) const;

    // RVA: 0x10D8 | Ordinal: 4313
        void getCurrentItem(void) const;

    // RVA: 0x1115 | Ordinal: 4374
        void getDefaultHeight(void);

    // RVA: 0x116B | Ordinal: 4460
        void getDefaultWidth(void);

    // RVA: 0x1207 | Ordinal: 4616
        void getFont(void) const;

    // RVA: 0x1270 | Ordinal: 4721
        void getHelpText(void) const;

    // RVA: 0x12D1 | Ordinal: 4818
        void getItem(int) const;

    // RVA: 0x12E5 | Ordinal: 4838
        void getItemData(int) const;

    // RVA: 0x130E | Ordinal: 4879
        void getItemText(int) const;

    // RVA: 0x1323 | Ordinal: 4900
        void getJustify(void) const;

    // RVA: 0x13B3 | Ordinal: 5044
        void getMetaClass(void) const;

    // RVA: 0x149E | Ordinal: 5279
        void getNumColumns(void) const;

    // RVA: 0x14A8 | Ordinal: 5289
        void getNumItems(void) const;

    // RVA: 0x14BA | Ordinal: 5307
        void getNumVisible(void) const;

    // RVA: 0x156A | Ordinal: 5483
        void getSelBackColor(void) const;

    // RVA: 0x157F | Ordinal: 5504
        void getSelTextColor(void) const;

    // RVA: 0x15AF | Ordinal: 5552
        void getShrinkWrap(void) const;

    // RVA: 0x15C4 | Ordinal: 5573
        void getSortFunc(void) const)(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0x15EF | Ordinal: 5616
        void getText(void) const;

    // RVA: 0x1602 | Ordinal: 5635
        void getTextColor(void) const;

    // RVA: 0x162F | Ordinal: 5680
        void getTipText(void) const;

    // RVA: 0x1731 | Ordinal: 5938
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18BD | Ordinal: 6334
        void insertItem(int, class FX::FXString const &, void *, bool);

    // RVA: 0x192A | Ordinal: 6443
        void isEditable(void) const;

    // RVA: 0x1963 | Ordinal: 6500
        void isItemCurrent(int) const;

    // RVA: 0x196D | Ordinal: 6510
        void isItemEnabled(int) const;

    // RVA: 0x199D | Ordinal: 6558
        void isMenuShown(void) const;

    // RVA: 0x1A41 | Ordinal: 6722
        void layout(void);

    // RVA: 0x1ABA | Ordinal: 6843
        void load(class FX::FXStream &);

    // RVA: 0x1BF5 | Ordinal: 7158
        void manufacture(void);

    // RVA: 0x1EC0 | Ordinal: 7873
        void moveItem(int, int, bool);

    // RVA: 0x22A9 | Ordinal: 8874
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FE | Ordinal: 8959
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2308 | Ordinal: 8969
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2316 | Ordinal: 8983
        void onFwdToText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FB | Ordinal: 9212
        void onListClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FE | Ordinal: 9215
        void onListCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2446 | Ordinal: 9287
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2518 | Ordinal: 9497
        void onTextButton(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2519 | Ordinal: 9498
        void onTextChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251A | Ordinal: 9499
        void onTextCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2593 | Ordinal: 9620
        void onUpdFmText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26BA | Ordinal: 9915
        void prependItem(class FX::FXString const &, void *, bool);

    // RVA: 0x274E | Ordinal: 10063
        void removeItem(int, bool);

    // RVA: 0x27EC | Ordinal: 10221
        void save(class FX::FXStream &) const;

    // RVA: 0x299C | Ordinal: 10653
        void setBackColor(unsigned int);

    // RVA: 0x2A01 | Ordinal: 10754
        void setComboStyle(unsigned int);

    // RVA: 0x2A12 | Ordinal: 10771
        void setCurrentItem(int, bool);

    // RVA: 0x2A72 | Ordinal: 10867
        void setEditable(bool);

    // RVA: 0x2AAE | Ordinal: 10927
        void setFont(class FX::FXFont *);

    // RVA: 0x2B12 | Ordinal: 11027
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B75 | Ordinal: 11126
        void setItem(int, class FX::FXString const &, void *, bool);

    // RVA: 0x2B87 | Ordinal: 11144
        void setItemData(int, void *) const;

    // RVA: 0x2BA3 | Ordinal: 11172
        void setItemText(int, class FX::FXString const &);

    // RVA: 0x2BB4 | Ordinal: 11189
        void setJustify(unsigned int);

    // RVA: 0x2C15 | Ordinal: 11286
        void setNumColumns(int);

    // RVA: 0x2C1C | Ordinal: 11293
        void setNumVisible(int);

    // RVA: 0x2CB5 | Ordinal: 11446
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC4 | Ordinal: 11461
        void setSelTextColor(unsigned int);

    // RVA: 0x2CF4 | Ordinal: 11509
        void setShrinkWrap(bool);

    // RVA: 0x2D07 | Ordinal: 11528
        void setSortFunc(int (__cdecl *)(class FX::FXListItem const *, class FX::FXListItem const *));

    // RVA: 0x2D37 | Ordinal: 11576
        void setText(class FX::FXString const &, bool);

    // RVA: 0x2D49 | Ordinal: 11594
        void setTextColor(unsigned int);

    // RVA: 0x2D75 | Ordinal: 11638
        void setTipText(class FX::FXString const &);

    // RVA: 0x2E17 | Ordinal: 11800
        void showMenu(bool);

    // RVA: 0x2E43 | Ordinal: 11844
        void sortItems(void);

    // RVA: 0x3D7 | Ordinal: 984
        void _FXComboBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMBOBOX_HPP

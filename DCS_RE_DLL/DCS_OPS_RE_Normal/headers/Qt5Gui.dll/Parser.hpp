#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: Parser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QCss {

class Parser
{
public:

    // RVA: 0x53 | Ordinal: 84
        void Parser(class QCss::Parser &&);

    // RVA: 0x54 | Ordinal: 85
        void Parser(class QCss::Parser const &);

    // RVA: 0x55 | Ordinal: 86
        void Parser(class QString const &, bool);

    // RVA: 0x56 | Ordinal: 87
        void Parser(void);

    // RVA: 0xFE8 | Ordinal: 4073
        void errorSymbol(void);

    // RVA: 0x4E6E | Ordinal: 20079
        void hasNext(void) const;

    // RVA: 0x4EFF | Ordinal: 20224
        void init(class QString const &, bool);

    // RVA: 0x5159 | Ordinal: 20826
        void lexem(void) const;

    // RVA: 0x515B | Ordinal: 20828
        void lexemUntil(enum QCss::TokenType);

    // RVA: 0x51B5 | Ordinal: 20918
        void lookup(void) const;

    // RVA: 0x51B7 | Ordinal: 20920
        void lookupElementName(void) const;

    // RVA: 0x5344 | Ordinal: 21317
        void next(void);

    // RVA: 0x5345 | Ordinal: 21318
        void next(enum QCss::TokenType);

    // RVA: 0x540D | Ordinal: 21518
        void parse(struct QCss::StyleSheet *, enum Qt::CaseSensitivity);

    // RVA: 0x540E | Ordinal: 21519
        void parseAttrib(struct QCss::AttributeSelector *);

    // RVA: 0x540F | Ordinal: 21520
        void parseClass(class QString *);

    // RVA: 0x5410 | Ordinal: 21521
        void parseCombinator(enum QCss::BasicSelector::Relation *);

    // RVA: 0x5411 | Ordinal: 21522
        void parseElementName(class QString *);

    // RVA: 0x5412 | Ordinal: 21523
        void parseExpr(class QVector<struct QCss::Value> *);

    // RVA: 0x5414 | Ordinal: 21525
        void parseFunction(class QString *, class QString *);

    // RVA: 0x5415 | Ordinal: 21526
        void parseHexColor(class QColor *);

    // RVA: 0x5416 | Ordinal: 21527
        void parseImport(struct QCss::ImportRule *);

    // RVA: 0x5417 | Ordinal: 21528
        void parseMedia(struct QCss::MediaRule *);

    // RVA: 0x5418 | Ordinal: 21529
        void parseMedium(class QStringList *);

    // RVA: 0x5419 | Ordinal: 21530
        void parseNextDeclaration(struct QCss::Declaration *);

    // RVA: 0x541A | Ordinal: 21531
        void parseNextExpr(class QVector<struct QCss::Value> *);

    // RVA: 0x541B | Ordinal: 21532
        void parseNextFunction(class QString *, class QString *);

    // RVA: 0x541C | Ordinal: 21533
        void parseNextMedium(class QStringList *);

    // RVA: 0x541D | Ordinal: 21534
        void parseNextOperator(struct QCss::Value *);

    // RVA: 0x541E | Ordinal: 21535
        void parseNextSelector(struct QCss::Selector *);

    // RVA: 0x541F | Ordinal: 21536
        void parseNextSimpleSelector(struct QCss::BasicSelector *);

    // RVA: 0x5421 | Ordinal: 21538
        void parsePage(struct QCss::PageRule *);

    // RVA: 0x5422 | Ordinal: 21539
        void parsePrio(struct QCss::Declaration *);

    // RVA: 0x5423 | Ordinal: 21540
        void parseProperty(struct QCss::Declaration *);

    // RVA: 0x5424 | Ordinal: 21541
        void parsePseudo(struct QCss::Pseudo *);

    // RVA: 0x5425 | Ordinal: 21542
        void parsePseudoPage(class QString *);

    // RVA: 0x5426 | Ordinal: 21543
        void parseRuleset(struct QCss::StyleRule *);

    // RVA: 0x5427 | Ordinal: 21544
        void parseSelector(struct QCss::Selector *);

    // RVA: 0x5428 | Ordinal: 21545
        void parseSimpleSelector(struct QCss::BasicSelector *);

    // RVA: 0x5429 | Ordinal: 21546
        void parseTerm(struct QCss::Value *);

    // RVA: 0x54B9 | Ordinal: 21690
        void prev(void);

    // RVA: 0x5681 | Ordinal: 22146
        void recordError(void);

    // RVA: 0x5D52 | Ordinal: 23891
        void skipSpace(void);

    // RVA: 0x5E9A | Ordinal: 24219
        void symbol(void) const;

    // RVA: 0x5ECC | Ordinal: 24269
        void test(enum QCss::TokenType);

    // RVA: 0x5ECD | Ordinal: 24270
        void testAndParseUri(class QString *);

    // RVA: 0x5ECE | Ordinal: 24271
        void testAttrib(void);

    // RVA: 0x5ECF | Ordinal: 24272
        void testClass(void);

    // RVA: 0x5ED0 | Ordinal: 24273
        void testCombinator(void);

    // RVA: 0x5ED2 | Ordinal: 24275
        void testElementName(void);

    // RVA: 0x5ED3 | Ordinal: 24276
        void testExpr(void);

    // RVA: 0x5ED4 | Ordinal: 24277
        void testFunction(void);

    // RVA: 0x5ED5 | Ordinal: 24278
        void testHexColor(void);

    // RVA: 0x5ED6 | Ordinal: 24279
        void testImport(void);

    // RVA: 0x5ED7 | Ordinal: 24280
        void testMedia(void);

    // RVA: 0x5ED8 | Ordinal: 24281
        void testMedium(void);

    // RVA: 0x5EDE | Ordinal: 24287
        void testPage(void);

    // RVA: 0x5EDF | Ordinal: 24288
        void testPrio(void);

    // RVA: 0x5EE0 | Ordinal: 24289
        void testProperty(void);

    // RVA: 0x5EE1 | Ordinal: 24290
        void testPseudo(void);

    // RVA: 0x5EE2 | Ordinal: 24291
        void testPseudoPage(void);

    // RVA: 0x5EE4 | Ordinal: 24293
        void testRuleset(void);

    // RVA: 0x5EE5 | Ordinal: 24294
        void testSelector(void);

    // RVA: 0x5EE6 | Ordinal: 24295
        void testSimpleSelector(void);

    // RVA: 0x5EE7 | Ordinal: 24296
        void testTerm(void);

    // RVA: 0x5EE8 | Ordinal: 24297
        void testTokenAndEndsWith(enum QCss::TokenType, class QLatin1String);

    // RVA: 0x60A8 | Ordinal: 24745
        void unquotedLexem(void) const;

    // RVA: 0x60AD | Ordinal: 24750
        void until(enum QCss::TokenType, enum QCss::TokenType);

    // RVA: 0x3F6 | Ordinal: 1015
        void _Parser(void);
};

} // namespace QCss

// DCS_OPS_RE_QT5GUI.DLL_PARSER_HPP

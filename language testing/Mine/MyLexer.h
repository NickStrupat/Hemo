 #include <stack>; 

// Generated from MyLexer.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  MyLexer : public antlr4::Lexer {
public:
  enum {
    BYTE_ORDER_MARK = 1, SINGLE_LINE_DOC_COMMENT = 2, DELIMITED_DOC_COMMENT = 3, 
    SINGLE_LINE_COMMENT = 4, DELIMITED_COMMENT = 5, WHITESPACES = 6, SHARP = 7, 
    ABSTRACT = 8, ADD = 9, ALIAS = 10, ARGLIST = 11, AS = 12, ASCENDING = 13, 
    ASYNC = 14, AWAIT = 15, BASE = 16, BOOL = 17, BREAK = 18, BY = 19, BYTE = 20, 
    CASE = 21, CATCH = 22, CHAR = 23, CHECKED = 24, CLASS = 25, CONST = 26, 
    CONTINUE = 27, DECIMAL = 28, DEFAULT = 29, DELEGATE = 30, DESCENDING = 31, 
    DO = 32, DOUBLE = 33, DYNAMIC = 34, ELSE = 35, ENUM = 36, EQUALS = 37, 
    EVENT = 38, EXPLICIT = 39, EXTERN = 40, FALSE = 41, FINALLY = 42, FIXED = 43, 
    FLOAT = 44, FOR = 45, FOREACH = 46, FROM = 47, GET = 48, GOTO = 49, 
    GROUP = 50, IF = 51, IMPLICIT = 52, IN = 53, INT = 54, INTERFACE = 55, 
    INTERNAL = 56, INTO = 57, IS = 58, JOIN = 59, LET = 60, LOCK = 61, LONG = 62, 
    NAMEOF = 63, NAMESPACE = 64, NEW = 65, NULLL = 66, OBJECT = 67, ON = 68, 
    OPERATOR = 69, ORDERBY = 70, OUT = 71, OVERRIDE = 72, PARAMS = 73, PARTIAL = 74, 
    PRIVATE = 75, PROTECTED = 76, PUBLIC = 77, READONLY = 78, REF = 79, 
    REMOVE = 80, RETURN = 81, SBYTE = 82, SEALED = 83, SELECT = 84, SET = 85, 
    SHORT = 86, SIZEOF = 87, STACKALLOC = 88, STATIC = 89, STRING = 90, 
    STRUCT = 91, SWITCH = 92, THIS = 93, THROW = 94, TRUE = 95, TRY = 96, 
    TYPEOF = 97, UINT = 98, ULONG = 99, UNCHECKED = 100, UNSAFE = 101, USHORT = 102, 
    USING = 103, VIRTUAL = 104, VOID = 105, VOLATILE = 106, WHEN = 107, 
    WHERE = 108, WHILE = 109, YIELD = 110, IDENTIFIER = 111, LITERAL_ACCESS = 112, 
    INTEGER_LITERAL = 113, HEX_INTEGER_LITERAL = 114, REAL_LITERAL = 115, 
    CHARACTER_LITERAL = 116, REGULAR_STRING = 117, VERBATIUM_STRING = 118, 
    INTERPOLATED_REGULAR_STRING_START = 119, INTERPOLATED_VERBATIUM_STRING_START = 120, 
    OPEN_BRACE = 121, CLOSE_BRACE = 122, OPEN_BRACKET = 123, CLOSE_BRACKET = 124, 
    OPEN_PARENS = 125, CLOSE_PARENS = 126, DOT = 127, COMMA = 128, COLON = 129, 
    SEMICOLON = 130, PLUS = 131, MINUS = 132, STAR = 133, DIV = 134, PERCENT = 135, 
    AMP = 136, BITWISE_OR = 137, CARET = 138, BANG = 139, TILDE = 140, ASSIGNMENT = 141, 
    LT = 142, GT = 143, INTERR = 144, DOUBLE_COLON = 145, OP_COALESCING = 146, 
    OP_INC = 147, OP_DEC = 148, OP_AND = 149, OP_OR = 150, OP_PTR = 151, 
    OP_EQ = 152, OP_NE = 153, OP_LE = 154, OP_GE = 155, OP_ADD_ASSIGNMENT = 156, 
    OP_SUB_ASSIGNMENT = 157, OP_MULT_ASSIGNMENT = 158, OP_DIV_ASSIGNMENT = 159, 
    OP_MOD_ASSIGNMENT = 160, OP_AND_ASSIGNMENT = 161, OP_OR_ASSIGNMENT = 162, 
    OP_XOR_ASSIGNMENT = 163, OP_LEFT_SHIFT = 164, OP_LEFT_SHIFT_ASSIGNMENT = 165, 
    DOUBLE_CURLY_INSIDE = 166, OPEN_BRACE_INSIDE = 167, REGULAR_CHAR_INSIDE = 168, 
    VERBATIUM_DOUBLE_QUOTE_INSIDE = 169, DOUBLE_QUOTE_INSIDE = 170, REGULAR_STRING_INSIDE = 171, 
    VERBATIUM_INSIDE_STRING = 172, CLOSE_BRACE_INSIDE = 173, FORMAT_STRING = 174, 
    DIRECTIVE_WHITESPACES = 175, DIGITS = 176, DEFINE = 177, UNDEF = 178, 
    ELIF = 179, ENDIF = 180, LINE = 181, ERROR = 182, WARNING = 183, REGION = 184, 
    ENDREGION = 185, PRAGMA = 186, DIRECTIVE_HIDDEN = 187, CONDITIONAL_SYMBOL = 188, 
    DIRECTIVE_NEW_LINE = 189, TEXT = 190, DOUBLE_CURLY_CLOSE_INSIDE = 191
  };

  enum {
    COMMENTS_CHANNEL = 2, DIRECTIVE = 3
  };

  enum {
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2, DIRECTIVE_MODE = 3, 
    DIRECTIVE_TEXT = 4
  };

  MyLexer(antlr4::CharStream *input);
  ~MyLexer();


      int interpolatedStringLevel;
      std::stack<bool> interpolatedVerbatiums;
      std::stack<int> curlyLevels;
      bool verbatium;

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void INTERPOLATED_REGULAR_STRING_STARTAction(antlr4::RuleContext *context, size_t actionIndex);
  void INTERPOLATED_VERBATIUM_STRING_STARTAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void COLONAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOUBLE_QUOTE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool REGULAR_CHAR_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERBATIUM_DOUBLE_QUOTE_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REGULAR_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERBATIUM_INSIDE_STRINGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


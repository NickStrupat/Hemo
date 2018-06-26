
// Generated from MyParser.g4 by ANTLR 4.7


#include "MyParserListener.h"

#include "MyParserParser.h"


using namespace antlrcpp;
using namespace antlr4;

MyParserParser::MyParserParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MyParserParser::~MyParserParser() {
  delete _interpreter;
}

std::string MyParserParser::getGrammarFileName() const {
  return "MyParser.g4";
}

const std::vector<std::string>& MyParserParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MyParserParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Compilation_unitContext ------------------------------------------------------------------

MyParserParser::Compilation_unitContext::Compilation_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Compilation_unitContext::EOF() {
  return getToken(MyParserParser::EOF, 0);
}

tree::TerminalNode* MyParserParser::Compilation_unitContext::BYTE_ORDER_MARK() {
  return getToken(MyParserParser::BYTE_ORDER_MARK, 0);
}

MyParserParser::Extern_alias_directivesContext* MyParserParser::Compilation_unitContext::extern_alias_directives() {
  return getRuleContext<MyParserParser::Extern_alias_directivesContext>(0);
}

MyParserParser::Using_directivesContext* MyParserParser::Compilation_unitContext::using_directives() {
  return getRuleContext<MyParserParser::Using_directivesContext>(0);
}

std::vector<MyParserParser::Global_attribute_sectionContext *> MyParserParser::Compilation_unitContext::global_attribute_section() {
  return getRuleContexts<MyParserParser::Global_attribute_sectionContext>();
}

MyParserParser::Global_attribute_sectionContext* MyParserParser::Compilation_unitContext::global_attribute_section(size_t i) {
  return getRuleContext<MyParserParser::Global_attribute_sectionContext>(i);
}

MyParserParser::Namespace_member_declarationsContext* MyParserParser::Compilation_unitContext::namespace_member_declarations() {
  return getRuleContext<MyParserParser::Namespace_member_declarationsContext>(0);
}


size_t MyParserParser::Compilation_unitContext::getRuleIndex() const {
  return MyParserParser::RuleCompilation_unit;
}

void MyParserParser::Compilation_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilation_unit(this);
}

void MyParserParser::Compilation_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilation_unit(this);
}

MyParserParser::Compilation_unitContext* MyParserParser::compilation_unit() {
  Compilation_unitContext *_localctx = _tracker.createInstance<Compilation_unitContext>(_ctx, getState());
  enterRule(_localctx, 0, MyParserParser::RuleCompilation_unit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__0) {
      setState(400);
      match(MyParserParser::T__0);
    }
    setState(404);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(403);
      extern_alias_directives();
      break;
    }

    }
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::USING) {
      setState(406);
      using_directives();
    }
    setState(412);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(409);
        global_attribute_section(); 
      }
      setState(414);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(416);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (MyParserParser::NAMESPACE - 64))
      | (1ULL << (MyParserParser::NEW - 64))
      | (1ULL << (MyParserParser::OVERRIDE - 64))
      | (1ULL << (MyParserParser::PARTIAL - 64))
      | (1ULL << (MyParserParser::PRIVATE - 64))
      | (1ULL << (MyParserParser::PROTECTED - 64))
      | (1ULL << (MyParserParser::PUBLIC - 64))
      | (1ULL << (MyParserParser::READONLY - 64))
      | (1ULL << (MyParserParser::SEALED - 64))
      | (1ULL << (MyParserParser::STATIC - 64))
      | (1ULL << (MyParserParser::STRUCT - 64))
      | (1ULL << (MyParserParser::UNSAFE - 64))
      | (1ULL << (MyParserParser::VIRTUAL - 64))
      | (1ULL << (MyParserParser::VOLATILE - 64)))) != 0)) {
      setState(415);
      namespace_member_declarations();
    }
    setState(418);
    match(MyParserParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_or_type_nameContext ------------------------------------------------------------------

MyParserParser::Namespace_or_type_nameContext::Namespace_or_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Namespace_or_type_nameContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Namespace_or_type_nameContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

MyParserParser::Qualified_alias_memberContext* MyParserParser::Namespace_or_type_nameContext::qualified_alias_member() {
  return getRuleContext<MyParserParser::Qualified_alias_memberContext>(0);
}

std::vector<MyParserParser::Type_argument_listContext *> MyParserParser::Namespace_or_type_nameContext::type_argument_list() {
  return getRuleContexts<MyParserParser::Type_argument_listContext>();
}

MyParserParser::Type_argument_listContext* MyParserParser::Namespace_or_type_nameContext::type_argument_list(size_t i) {
  return getRuleContext<MyParserParser::Type_argument_listContext>(i);
}


size_t MyParserParser::Namespace_or_type_nameContext::getRuleIndex() const {
  return MyParserParser::RuleNamespace_or_type_name;
}

void MyParserParser::Namespace_or_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_or_type_name(this);
}

void MyParserParser::Namespace_or_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_or_type_name(this);
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::namespace_or_type_name() {
  Namespace_or_type_nameContext *_localctx = _tracker.createInstance<Namespace_or_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 2, MyParserParser::RuleNamespace_or_type_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(425);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(420);
      identifier();
      setState(422);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(421);
        type_argument_list();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(424);
      qualified_alias_member();
      break;
    }

    }
    setState(434);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(427);
        match(MyParserParser::T__0);
        setState(428);
        identifier();
        setState(430);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(429);
          type_argument_list();
          break;
        }

        } 
      }
      setState(436);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MyParserParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Base_typeContext* MyParserParser::TypeContext::base_type() {
  return getRuleContext<MyParserParser::Base_typeContext>(0);
}

std::vector<MyParserParser::Rank_specifierContext *> MyParserParser::TypeContext::rank_specifier() {
  return getRuleContexts<MyParserParser::Rank_specifierContext>();
}

MyParserParser::Rank_specifierContext* MyParserParser::TypeContext::rank_specifier(size_t i) {
  return getRuleContext<MyParserParser::Rank_specifierContext>(i);
}


size_t MyParserParser::TypeContext::getRuleIndex() const {
  return MyParserParser::RuleType;
}

void MyParserParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void MyParserParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

MyParserParser::TypeContext* MyParserParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, MyParserParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(437);
    base_type();
    setState(443);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(441);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__1: {
            setState(438);
            match(MyParserParser::T__1);
            break;
          }

          case MyParserParser::T__32: {
            setState(439);
            rank_specifier();
            break;
          }

          case MyParserParser::T__2: {
            setState(440);
            match(MyParserParser::T__2);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(445);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

MyParserParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Simple_typeContext* MyParserParser::Base_typeContext::simple_type() {
  return getRuleContext<MyParserParser::Simple_typeContext>(0);
}

MyParserParser::Class_typeContext* MyParserParser::Base_typeContext::class_type() {
  return getRuleContext<MyParserParser::Class_typeContext>(0);
}

tree::TerminalNode* MyParserParser::Base_typeContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}


size_t MyParserParser::Base_typeContext::getRuleIndex() const {
  return MyParserParser::RuleBase_type;
}

void MyParserParser::Base_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_type(this);
}

void MyParserParser::Base_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_type(this);
}

MyParserParser::Base_typeContext* MyParserParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 6, MyParserParser::RuleBase_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__16:
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::T__27:
      case MyParserParser::T__32:
      case MyParserParser::FLOAT:
      case MyParserParser::INT:
      case MyParserParser::LONG:
      case MyParserParser::SBYTE:
      case MyParserParser::SHORT:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT: {
        enterOuterAlt(_localctx, 1);
        setState(446);
        simple_type();
        break;
      }

      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::STRING:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(447);
        class_type();
        break;
      }

      case MyParserParser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(448);
        match(MyParserParser::VOID);
        setState(449);
        match(MyParserParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_typeContext ------------------------------------------------------------------

MyParserParser::Simple_typeContext::Simple_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Numeric_typeContext* MyParserParser::Simple_typeContext::numeric_type() {
  return getRuleContext<MyParserParser::Numeric_typeContext>(0);
}

tree::TerminalNode* MyParserParser::Simple_typeContext::BOOL() {
  return getToken(MyParserParser::BOOL, 0);
}


size_t MyParserParser::Simple_typeContext::getRuleIndex() const {
  return MyParserParser::RuleSimple_type;
}

void MyParserParser::Simple_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_type(this);
}

void MyParserParser::Simple_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_type(this);
}

MyParserParser::Simple_typeContext* MyParserParser::simple_type() {
  Simple_typeContext *_localctx = _tracker.createInstance<Simple_typeContext>(_ctx, getState());
  enterRule(_localctx, 8, MyParserParser::RuleSimple_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::T__27:
      case MyParserParser::T__32:
      case MyParserParser::FLOAT:
      case MyParserParser::INT:
      case MyParserParser::LONG:
      case MyParserParser::SBYTE:
      case MyParserParser::SHORT:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT: {
        enterOuterAlt(_localctx, 1);
        setState(452);
        numeric_type();
        break;
      }

      case MyParserParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(453);
        match(MyParserParser::T__16);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Numeric_typeContext ------------------------------------------------------------------

MyParserParser::Numeric_typeContext::Numeric_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Integral_typeContext* MyParserParser::Numeric_typeContext::integral_type() {
  return getRuleContext<MyParserParser::Integral_typeContext>(0);
}

MyParserParser::Floating_point_typeContext* MyParserParser::Numeric_typeContext::floating_point_type() {
  return getRuleContext<MyParserParser::Floating_point_typeContext>(0);
}

tree::TerminalNode* MyParserParser::Numeric_typeContext::DECIMAL() {
  return getToken(MyParserParser::DECIMAL, 0);
}


size_t MyParserParser::Numeric_typeContext::getRuleIndex() const {
  return MyParserParser::RuleNumeric_type;
}

void MyParserParser::Numeric_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumeric_type(this);
}

void MyParserParser::Numeric_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumeric_type(this);
}

MyParserParser::Numeric_typeContext* MyParserParser::numeric_type() {
  Numeric_typeContext *_localctx = _tracker.createInstance<Numeric_typeContext>(_ctx, getState());
  enterRule(_localctx, 10, MyParserParser::RuleNumeric_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(459);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::INT:
      case MyParserParser::LONG:
      case MyParserParser::SBYTE:
      case MyParserParser::SHORT:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT: {
        enterOuterAlt(_localctx, 1);
        setState(456);
        integral_type();
        break;
      }

      case MyParserParser::T__32:
      case MyParserParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(457);
        floating_point_type();
        break;
      }

      case MyParserParser::T__27: {
        enterOuterAlt(_localctx, 3);
        setState(458);
        match(MyParserParser::T__27);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integral_typeContext ------------------------------------------------------------------

MyParserParser::Integral_typeContext::Integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Integral_typeContext::SBYTE() {
  return getToken(MyParserParser::SBYTE, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::BYTE() {
  return getToken(MyParserParser::BYTE, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::SHORT() {
  return getToken(MyParserParser::SHORT, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::USHORT() {
  return getToken(MyParserParser::USHORT, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::INT() {
  return getToken(MyParserParser::INT, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::UINT() {
  return getToken(MyParserParser::UINT, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::LONG() {
  return getToken(MyParserParser::LONG, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::ULONG() {
  return getToken(MyParserParser::ULONG, 0);
}

tree::TerminalNode* MyParserParser::Integral_typeContext::CHAR() {
  return getToken(MyParserParser::CHAR, 0);
}


size_t MyParserParser::Integral_typeContext::getRuleIndex() const {
  return MyParserParser::RuleIntegral_type;
}

void MyParserParser::Integral_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegral_type(this);
}

void MyParserParser::Integral_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegral_type(this);
}

MyParserParser::Integral_typeContext* MyParserParser::integral_type() {
  Integral_typeContext *_localctx = _tracker.createInstance<Integral_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, MyParserParser::RuleIntegral_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::LONG))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (MyParserParser::SBYTE - 82))
      | (1ULL << (MyParserParser::SHORT - 82))
      | (1ULL << (MyParserParser::UINT - 82))
      | (1ULL << (MyParserParser::ULONG - 82))
      | (1ULL << (MyParserParser::USHORT - 82)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Floating_point_typeContext ------------------------------------------------------------------

MyParserParser::Floating_point_typeContext::Floating_point_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Floating_point_typeContext::FLOAT() {
  return getToken(MyParserParser::FLOAT, 0);
}

tree::TerminalNode* MyParserParser::Floating_point_typeContext::DOUBLE() {
  return getToken(MyParserParser::DOUBLE, 0);
}


size_t MyParserParser::Floating_point_typeContext::getRuleIndex() const {
  return MyParserParser::RuleFloating_point_type;
}

void MyParserParser::Floating_point_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloating_point_type(this);
}

void MyParserParser::Floating_point_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloating_point_type(this);
}

MyParserParser::Floating_point_typeContext* MyParserParser::floating_point_type() {
  Floating_point_typeContext *_localctx = _tracker.createInstance<Floating_point_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, MyParserParser::RuleFloating_point_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    _la = _input->LA(1);
    if (!(_la == MyParserParser::T__32

    || _la == MyParserParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_typeContext ------------------------------------------------------------------

MyParserParser::Class_typeContext::Class_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Class_typeContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* MyParserParser::Class_typeContext::OBJECT() {
  return getToken(MyParserParser::OBJECT, 0);
}

tree::TerminalNode* MyParserParser::Class_typeContext::DYNAMIC() {
  return getToken(MyParserParser::DYNAMIC, 0);
}

tree::TerminalNode* MyParserParser::Class_typeContext::STRING() {
  return getToken(MyParserParser::STRING, 0);
}


size_t MyParserParser::Class_typeContext::getRuleIndex() const {
  return MyParserParser::RuleClass_type;
}

void MyParserParser::Class_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_type(this);
}

void MyParserParser::Class_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_type(this);
}

MyParserParser::Class_typeContext* MyParserParser::class_type() {
  Class_typeContext *_localctx = _tracker.createInstance<Class_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, MyParserParser::RuleClass_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(465);
      namespace_or_type_name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(466);
      match(MyParserParser::OBJECT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(467);
      match(MyParserParser::T__33);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(468);
      match(MyParserParser::STRING);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_argument_listContext ------------------------------------------------------------------

MyParserParser::Type_argument_listContext::Type_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::TypeContext *> MyParserParser::Type_argument_listContext::type() {
  return getRuleContexts<MyParserParser::TypeContext>();
}

MyParserParser::TypeContext* MyParserParser::Type_argument_listContext::type(size_t i) {
  return getRuleContext<MyParserParser::TypeContext>(i);
}


size_t MyParserParser::Type_argument_listContext::getRuleIndex() const {
  return MyParserParser::RuleType_argument_list;
}

void MyParserParser::Type_argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_argument_list(this);
}

void MyParserParser::Type_argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_argument_list(this);
}

MyParserParser::Type_argument_listContext* MyParserParser::type_argument_list() {
  Type_argument_listContext *_localctx = _tracker.createInstance<Type_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 18, MyParserParser::RuleType_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(MyParserParser::T__3);
    setState(472);
    type();
    setState(477);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(473);
      match(MyParserParser::T__4);
      setState(474);
      type();
      setState(479);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(480);
    match(MyParserParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

MyParserParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::ArgumentContext *> MyParserParser::Argument_listContext::argument() {
  return getRuleContexts<MyParserParser::ArgumentContext>();
}

MyParserParser::ArgumentContext* MyParserParser::Argument_listContext::argument(size_t i) {
  return getRuleContext<MyParserParser::ArgumentContext>(i);
}


size_t MyParserParser::Argument_listContext::getRuleIndex() const {
  return MyParserParser::RuleArgument_list;
}

void MyParserParser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void MyParserParser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}

MyParserParser::Argument_listContext* MyParserParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 20, MyParserParser::RuleArgument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    argument();
    setState(487);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(483);
      match(MyParserParser::T__4);
      setState(484);
      argument();
      setState(489);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

MyParserParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::ArgumentContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::ArgumentContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::ArgumentContext::REF() {
  return getToken(MyParserParser::REF, 0);
}

tree::TerminalNode* MyParserParser::ArgumentContext::OUT() {
  return getToken(MyParserParser::OUT, 0);
}


size_t MyParserParser::ArgumentContext::getRuleIndex() const {
  return MyParserParser::RuleArgument;
}

void MyParserParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void MyParserParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}

MyParserParser::ArgumentContext* MyParserParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 22, MyParserParser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(490);
      identifier();
      setState(491);
      match(MyParserParser::T__6);
      break;
    }

    }
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::OUT

    || _la == MyParserParser::REF) {
      setState(495);
      dynamic_cast<ArgumentContext *>(_localctx)->refout = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MyParserParser::OUT

      || _la == MyParserParser::REF)) {
        dynamic_cast<ArgumentContext *>(_localctx)->refout = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(498);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

MyParserParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::AssignmentContext* MyParserParser::ExpressionContext::assignment() {
  return getRuleContext<MyParserParser::AssignmentContext>(0);
}

MyParserParser::Non_assignment_expressionContext* MyParserParser::ExpressionContext::non_assignment_expression() {
  return getRuleContext<MyParserParser::Non_assignment_expressionContext>(0);
}


size_t MyParserParser::ExpressionContext::getRuleIndex() const {
  return MyParserParser::RuleExpression;
}

void MyParserParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void MyParserParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

MyParserParser::ExpressionContext* MyParserParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, MyParserParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(500);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(501);
      non_assignment_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Non_assignment_expressionContext ------------------------------------------------------------------

MyParserParser::Non_assignment_expressionContext::Non_assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Lambda_expressionContext* MyParserParser::Non_assignment_expressionContext::lambda_expression() {
  return getRuleContext<MyParserParser::Lambda_expressionContext>(0);
}

MyParserParser::Query_expressionContext* MyParserParser::Non_assignment_expressionContext::query_expression() {
  return getRuleContext<MyParserParser::Query_expressionContext>(0);
}

MyParserParser::Conditional_expressionContext* MyParserParser::Non_assignment_expressionContext::conditional_expression() {
  return getRuleContext<MyParserParser::Conditional_expressionContext>(0);
}


size_t MyParserParser::Non_assignment_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleNon_assignment_expression;
}

void MyParserParser::Non_assignment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon_assignment_expression(this);
}

void MyParserParser::Non_assignment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon_assignment_expression(this);
}

MyParserParser::Non_assignment_expressionContext* MyParserParser::non_assignment_expression() {
  Non_assignment_expressionContext *_localctx = _tracker.createInstance<Non_assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 26, MyParserParser::RuleNon_assignment_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(507);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(504);
      lambda_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(505);
      query_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(506);
      conditional_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

MyParserParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Unary_expressionContext* MyParserParser::AssignmentContext::unary_expression() {
  return getRuleContext<MyParserParser::Unary_expressionContext>(0);
}

MyParserParser::Assignment_operatorContext* MyParserParser::AssignmentContext::assignment_operator() {
  return getRuleContext<MyParserParser::Assignment_operatorContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::AssignmentContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::AssignmentContext::getRuleIndex() const {
  return MyParserParser::RuleAssignment;
}

void MyParserParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void MyParserParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

MyParserParser::AssignmentContext* MyParserParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 28, MyParserParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    unary_expression();
    setState(510);
    assignment_operator();
    setState(511);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorContext ------------------------------------------------------------------

MyParserParser::Assignment_operatorContext::Assignment_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Right_shift_assignmentContext* MyParserParser::Assignment_operatorContext::right_shift_assignment() {
  return getRuleContext<MyParserParser::Right_shift_assignmentContext>(0);
}


size_t MyParserParser::Assignment_operatorContext::getRuleIndex() const {
  return MyParserParser::RuleAssignment_operator;
}

void MyParserParser::Assignment_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_operator(this);
}

void MyParserParser::Assignment_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_operator(this);
}

MyParserParser::Assignment_operatorContext* MyParserParser::assignment_operator() {
  Assignment_operatorContext *_localctx = _tracker.createInstance<Assignment_operatorContext>(_ctx, getState());
  enterRule(_localctx, 30, MyParserParser::RuleAssignment_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(524);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(513);
        match(MyParserParser::T__7);
        break;
      }

      case MyParserParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(MyParserParser::T__8);
        break;
      }

      case MyParserParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(515);
        match(MyParserParser::T__9);
        break;
      }

      case MyParserParser::T__10: {
        enterOuterAlt(_localctx, 4);
        setState(516);
        match(MyParserParser::T__10);
        break;
      }

      case MyParserParser::T__11: {
        enterOuterAlt(_localctx, 5);
        setState(517);
        match(MyParserParser::T__11);
        break;
      }

      case MyParserParser::T__12: {
        enterOuterAlt(_localctx, 6);
        setState(518);
        match(MyParserParser::T__12);
        break;
      }

      case MyParserParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(519);
        match(MyParserParser::T__13);
        break;
      }

      case MyParserParser::T__14: {
        enterOuterAlt(_localctx, 8);
        setState(520);
        match(MyParserParser::T__14);
        break;
      }

      case MyParserParser::T__15: {
        enterOuterAlt(_localctx, 9);
        setState(521);
        match(MyParserParser::T__15);
        break;
      }

      case MyParserParser::T__16: {
        enterOuterAlt(_localctx, 10);
        setState(522);
        match(MyParserParser::T__16);
        break;
      }

      case MyParserParser::T__5: {
        enterOuterAlt(_localctx, 11);
        setState(523);
        right_shift_assignment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_expressionContext ------------------------------------------------------------------

MyParserParser::Conditional_expressionContext::Conditional_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Null_coalescing_expressionContext* MyParserParser::Conditional_expressionContext::null_coalescing_expression() {
  return getRuleContext<MyParserParser::Null_coalescing_expressionContext>(0);
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::Conditional_expressionContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::Conditional_expressionContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}


size_t MyParserParser::Conditional_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleConditional_expression;
}

void MyParserParser::Conditional_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_expression(this);
}

void MyParserParser::Conditional_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_expression(this);
}

MyParserParser::Conditional_expressionContext* MyParserParser::conditional_expression() {
  Conditional_expressionContext *_localctx = _tracker.createInstance<Conditional_expressionContext>(_ctx, getState());
  enterRule(_localctx, 32, MyParserParser::RuleConditional_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    null_coalescing_expression();
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__1) {
      setState(527);
      match(MyParserParser::T__1);
      setState(528);
      expression();
      setState(529);
      match(MyParserParser::T__6);
      setState(530);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Null_coalescing_expressionContext ------------------------------------------------------------------

MyParserParser::Null_coalescing_expressionContext::Null_coalescing_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Conditional_or_expressionContext* MyParserParser::Null_coalescing_expressionContext::conditional_or_expression() {
  return getRuleContext<MyParserParser::Conditional_or_expressionContext>(0);
}

MyParserParser::Null_coalescing_expressionContext* MyParserParser::Null_coalescing_expressionContext::null_coalescing_expression() {
  return getRuleContext<MyParserParser::Null_coalescing_expressionContext>(0);
}


size_t MyParserParser::Null_coalescing_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleNull_coalescing_expression;
}

void MyParserParser::Null_coalescing_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNull_coalescing_expression(this);
}

void MyParserParser::Null_coalescing_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNull_coalescing_expression(this);
}

MyParserParser::Null_coalescing_expressionContext* MyParserParser::null_coalescing_expression() {
  Null_coalescing_expressionContext *_localctx = _tracker.createInstance<Null_coalescing_expressionContext>(_ctx, getState());
  enterRule(_localctx, 34, MyParserParser::RuleNull_coalescing_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    conditional_or_expression();
    setState(537);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__17) {
      setState(535);
      match(MyParserParser::T__17);
      setState(536);
      null_coalescing_expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_or_expressionContext ------------------------------------------------------------------

MyParserParser::Conditional_or_expressionContext::Conditional_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Conditional_and_expressionContext *> MyParserParser::Conditional_or_expressionContext::conditional_and_expression() {
  return getRuleContexts<MyParserParser::Conditional_and_expressionContext>();
}

MyParserParser::Conditional_and_expressionContext* MyParserParser::Conditional_or_expressionContext::conditional_and_expression(size_t i) {
  return getRuleContext<MyParserParser::Conditional_and_expressionContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Conditional_or_expressionContext::OP_OR() {
  return getTokens(MyParserParser::OP_OR);
}

tree::TerminalNode* MyParserParser::Conditional_or_expressionContext::OP_OR(size_t i) {
  return getToken(MyParserParser::OP_OR, i);
}


size_t MyParserParser::Conditional_or_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleConditional_or_expression;
}

void MyParserParser::Conditional_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_or_expression(this);
}

void MyParserParser::Conditional_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_or_expression(this);
}

MyParserParser::Conditional_or_expressionContext* MyParserParser::conditional_or_expression() {
  Conditional_or_expressionContext *_localctx = _tracker.createInstance<Conditional_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 36, MyParserParser::RuleConditional_or_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    conditional_and_expression();
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::OP_OR) {
      setState(540);
      match(MyParserParser::OP_OR);
      setState(541);
      conditional_and_expression();
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_and_expressionContext ------------------------------------------------------------------

MyParserParser::Conditional_and_expressionContext::Conditional_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Inclusive_or_expressionContext *> MyParserParser::Conditional_and_expressionContext::inclusive_or_expression() {
  return getRuleContexts<MyParserParser::Inclusive_or_expressionContext>();
}

MyParserParser::Inclusive_or_expressionContext* MyParserParser::Conditional_and_expressionContext::inclusive_or_expression(size_t i) {
  return getRuleContext<MyParserParser::Inclusive_or_expressionContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Conditional_and_expressionContext::OP_AND() {
  return getTokens(MyParserParser::OP_AND);
}

tree::TerminalNode* MyParserParser::Conditional_and_expressionContext::OP_AND(size_t i) {
  return getToken(MyParserParser::OP_AND, i);
}


size_t MyParserParser::Conditional_and_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleConditional_and_expression;
}

void MyParserParser::Conditional_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_and_expression(this);
}

void MyParserParser::Conditional_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_and_expression(this);
}

MyParserParser::Conditional_and_expressionContext* MyParserParser::conditional_and_expression() {
  Conditional_and_expressionContext *_localctx = _tracker.createInstance<Conditional_and_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, MyParserParser::RuleConditional_and_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    inclusive_or_expression();
    setState(552);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::OP_AND) {
      setState(548);
      match(MyParserParser::OP_AND);
      setState(549);
      inclusive_or_expression();
      setState(554);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inclusive_or_expressionContext ------------------------------------------------------------------

MyParserParser::Inclusive_or_expressionContext::Inclusive_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Exclusive_or_expressionContext *> MyParserParser::Inclusive_or_expressionContext::exclusive_or_expression() {
  return getRuleContexts<MyParserParser::Exclusive_or_expressionContext>();
}

MyParserParser::Exclusive_or_expressionContext* MyParserParser::Inclusive_or_expressionContext::exclusive_or_expression(size_t i) {
  return getRuleContext<MyParserParser::Exclusive_or_expressionContext>(i);
}


size_t MyParserParser::Inclusive_or_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleInclusive_or_expression;
}

void MyParserParser::Inclusive_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusive_or_expression(this);
}

void MyParserParser::Inclusive_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusive_or_expression(this);
}

MyParserParser::Inclusive_or_expressionContext* MyParserParser::inclusive_or_expression() {
  Inclusive_or_expressionContext *_localctx = _tracker.createInstance<Inclusive_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 40, MyParserParser::RuleInclusive_or_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(555);
    exclusive_or_expression();
    setState(560);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(556);
        match(MyParserParser::T__18);
        setState(557);
        exclusive_or_expression(); 
      }
      setState(562);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exclusive_or_expressionContext ------------------------------------------------------------------

MyParserParser::Exclusive_or_expressionContext::Exclusive_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::And_expressionContext *> MyParserParser::Exclusive_or_expressionContext::and_expression() {
  return getRuleContexts<MyParserParser::And_expressionContext>();
}

MyParserParser::And_expressionContext* MyParserParser::Exclusive_or_expressionContext::and_expression(size_t i) {
  return getRuleContext<MyParserParser::And_expressionContext>(i);
}


size_t MyParserParser::Exclusive_or_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleExclusive_or_expression;
}

void MyParserParser::Exclusive_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusive_or_expression(this);
}

void MyParserParser::Exclusive_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusive_or_expression(this);
}

MyParserParser::Exclusive_or_expressionContext* MyParserParser::exclusive_or_expression() {
  Exclusive_or_expressionContext *_localctx = _tracker.createInstance<Exclusive_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 42, MyParserParser::RuleExclusive_or_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(563);
    and_expression();
    setState(568);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(564);
        match(MyParserParser::T__19);
        setState(565);
        and_expression(); 
      }
      setState(570);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_expressionContext ------------------------------------------------------------------

MyParserParser::And_expressionContext::And_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Equality_expressionContext *> MyParserParser::And_expressionContext::equality_expression() {
  return getRuleContexts<MyParserParser::Equality_expressionContext>();
}

MyParserParser::Equality_expressionContext* MyParserParser::And_expressionContext::equality_expression(size_t i) {
  return getRuleContext<MyParserParser::Equality_expressionContext>(i);
}


size_t MyParserParser::And_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleAnd_expression;
}

void MyParserParser::And_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expression(this);
}

void MyParserParser::And_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expression(this);
}

MyParserParser::And_expressionContext* MyParserParser::and_expression() {
  And_expressionContext *_localctx = _tracker.createInstance<And_expressionContext>(_ctx, getState());
  enterRule(_localctx, 44, MyParserParser::RuleAnd_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(571);
    equality_expression();
    setState(576);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(572);
        match(MyParserParser::T__20);
        setState(573);
        equality_expression(); 
      }
      setState(578);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equality_expressionContext ------------------------------------------------------------------

MyParserParser::Equality_expressionContext::Equality_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Relational_expressionContext *> MyParserParser::Equality_expressionContext::relational_expression() {
  return getRuleContexts<MyParserParser::Relational_expressionContext>();
}

MyParserParser::Relational_expressionContext* MyParserParser::Equality_expressionContext::relational_expression(size_t i) {
  return getRuleContext<MyParserParser::Relational_expressionContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Equality_expressionContext::OP_EQ() {
  return getTokens(MyParserParser::OP_EQ);
}

tree::TerminalNode* MyParserParser::Equality_expressionContext::OP_EQ(size_t i) {
  return getToken(MyParserParser::OP_EQ, i);
}

std::vector<tree::TerminalNode *> MyParserParser::Equality_expressionContext::OP_NE() {
  return getTokens(MyParserParser::OP_NE);
}

tree::TerminalNode* MyParserParser::Equality_expressionContext::OP_NE(size_t i) {
  return getToken(MyParserParser::OP_NE, i);
}


size_t MyParserParser::Equality_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleEquality_expression;
}

void MyParserParser::Equality_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expression(this);
}

void MyParserParser::Equality_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expression(this);
}

MyParserParser::Equality_expressionContext* MyParserParser::equality_expression() {
  Equality_expressionContext *_localctx = _tracker.createInstance<Equality_expressionContext>(_ctx, getState());
  enterRule(_localctx, 46, MyParserParser::RuleEquality_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    relational_expression();
    setState(584);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::OP_EQ

    || _la == MyParserParser::OP_NE) {
      setState(580);
      _la = _input->LA(1);
      if (!(_la == MyParserParser::OP_EQ

      || _la == MyParserParser::OP_NE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(581);
      relational_expression();
      setState(586);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

MyParserParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Shift_expressionContext *> MyParserParser::Relational_expressionContext::shift_expression() {
  return getRuleContexts<MyParserParser::Shift_expressionContext>();
}

MyParserParser::Shift_expressionContext* MyParserParser::Relational_expressionContext::shift_expression(size_t i) {
  return getRuleContext<MyParserParser::Shift_expressionContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Relational_expressionContext::IS() {
  return getTokens(MyParserParser::IS);
}

tree::TerminalNode* MyParserParser::Relational_expressionContext::IS(size_t i) {
  return getToken(MyParserParser::IS, i);
}

std::vector<MyParserParser::IsTypeContext *> MyParserParser::Relational_expressionContext::isType() {
  return getRuleContexts<MyParserParser::IsTypeContext>();
}

MyParserParser::IsTypeContext* MyParserParser::Relational_expressionContext::isType(size_t i) {
  return getRuleContext<MyParserParser::IsTypeContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Relational_expressionContext::AS() {
  return getTokens(MyParserParser::AS);
}

tree::TerminalNode* MyParserParser::Relational_expressionContext::AS(size_t i) {
  return getToken(MyParserParser::AS, i);
}

std::vector<MyParserParser::TypeContext *> MyParserParser::Relational_expressionContext::type() {
  return getRuleContexts<MyParserParser::TypeContext>();
}

MyParserParser::TypeContext* MyParserParser::Relational_expressionContext::type(size_t i) {
  return getRuleContext<MyParserParser::TypeContext>(i);
}


size_t MyParserParser::Relational_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleRelational_expression;
}

void MyParserParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void MyParserParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}

MyParserParser::Relational_expressionContext* MyParserParser::relational_expression() {
  Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, getState());
  enterRule(_localctx, 48, MyParserParser::RuleRelational_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(587);
    shift_expression();
    setState(596);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(594);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__3:
          case MyParserParser::T__5:
          case MyParserParser::T__21:
          case MyParserParser::T__22: {
            setState(588);
            _la = _input->LA(1);
            if (!((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << MyParserParser::T__3)
              | (1ULL << MyParserParser::T__5)
              | (1ULL << MyParserParser::T__21)
              | (1ULL << MyParserParser::T__22))) != 0))) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            setState(589);
            shift_expression();
            break;
          }

          case MyParserParser::IS: {
            setState(590);
            match(MyParserParser::IS);
            setState(591);
            isType();
            break;
          }

          case MyParserParser::T__11: {
            setState(592);
            match(MyParserParser::T__11);
            setState(593);
            type();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(598);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_expressionContext ------------------------------------------------------------------

MyParserParser::Shift_expressionContext::Shift_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Additive_expressionContext *> MyParserParser::Shift_expressionContext::additive_expression() {
  return getRuleContexts<MyParserParser::Additive_expressionContext>();
}

MyParserParser::Additive_expressionContext* MyParserParser::Shift_expressionContext::additive_expression(size_t i) {
  return getRuleContext<MyParserParser::Additive_expressionContext>(i);
}

std::vector<MyParserParser::Right_shiftContext *> MyParserParser::Shift_expressionContext::right_shift() {
  return getRuleContexts<MyParserParser::Right_shiftContext>();
}

MyParserParser::Right_shiftContext* MyParserParser::Shift_expressionContext::right_shift(size_t i) {
  return getRuleContext<MyParserParser::Right_shiftContext>(i);
}


size_t MyParserParser::Shift_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleShift_expression;
}

void MyParserParser::Shift_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_expression(this);
}

void MyParserParser::Shift_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_expression(this);
}

MyParserParser::Shift_expressionContext* MyParserParser::shift_expression() {
  Shift_expressionContext *_localctx = _tracker.createInstance<Shift_expressionContext>(_ctx, getState());
  enterRule(_localctx, 50, MyParserParser::RuleShift_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(599);
    additive_expression();
    setState(607);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(602);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__23: {
            setState(600);
            match(MyParserParser::T__23);
            break;
          }

          case MyParserParser::T__5: {
            setState(601);
            right_shift();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(604);
        additive_expression(); 
      }
      setState(609);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

MyParserParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Multiplicative_expressionContext *> MyParserParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContexts<MyParserParser::Multiplicative_expressionContext>();
}

MyParserParser::Multiplicative_expressionContext* MyParserParser::Additive_expressionContext::multiplicative_expression(size_t i) {
  return getRuleContext<MyParserParser::Multiplicative_expressionContext>(i);
}


size_t MyParserParser::Additive_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleAdditive_expression;
}

void MyParserParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void MyParserParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}

MyParserParser::Additive_expressionContext* MyParserParser::additive_expression() {
  Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, getState());
  enterRule(_localctx, 52, MyParserParser::RuleAdditive_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(610);
    multiplicative_expression();
    setState(615);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(611);
        _la = _input->LA(1);
        if (!(_la == MyParserParser::T__24

        || _la == MyParserParser::T__25)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(612);
        multiplicative_expression(); 
      }
      setState(617);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

MyParserParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Unary_expressionContext *> MyParserParser::Multiplicative_expressionContext::unary_expression() {
  return getRuleContexts<MyParserParser::Unary_expressionContext>();
}

MyParserParser::Unary_expressionContext* MyParserParser::Multiplicative_expressionContext::unary_expression(size_t i) {
  return getRuleContext<MyParserParser::Unary_expressionContext>(i);
}


size_t MyParserParser::Multiplicative_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleMultiplicative_expression;
}

void MyParserParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void MyParserParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}

MyParserParser::Multiplicative_expressionContext* MyParserParser::multiplicative_expression() {
  Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, getState());
  enterRule(_localctx, 54, MyParserParser::RuleMultiplicative_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(618);
    unary_expression();
    setState(623);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(619);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
          | (1ULL << MyParserParser::T__26)
          | (1ULL << MyParserParser::T__27))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(620);
        unary_expression(); 
      }
      setState(625);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

MyParserParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Primary_expressionContext* MyParserParser::Unary_expressionContext::primary_expression() {
  return getRuleContext<MyParserParser::Primary_expressionContext>(0);
}

MyParserParser::Unary_expressionContext* MyParserParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<MyParserParser::Unary_expressionContext>(0);
}

tree::TerminalNode* MyParserParser::Unary_expressionContext::BANG() {
  return getToken(MyParserParser::BANG, 0);
}

tree::TerminalNode* MyParserParser::Unary_expressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::TypeContext* MyParserParser::Unary_expressionContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::Unary_expressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Unary_expressionContext::AWAIT() {
  return getToken(MyParserParser::AWAIT, 0);
}


size_t MyParserParser::Unary_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleUnary_expression;
}

void MyParserParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void MyParserParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}

MyParserParser::Unary_expressionContext* MyParserParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 56, MyParserParser::RuleUnary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(650);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(626);
      primary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(627);
      match(MyParserParser::T__24);
      setState(628);
      unary_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(629);
      match(MyParserParser::T__25);
      setState(630);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(631);
      match(MyParserParser::BANG);
      setState(632);
      unary_expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(633);
      match(MyParserParser::T__28);
      setState(634);
      unary_expression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(635);
      match(MyParserParser::T__29);
      setState(636);
      unary_expression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(637);
      match(MyParserParser::T__30);
      setState(638);
      unary_expression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(639);
      match(MyParserParser::OPEN_PARENS);
      setState(640);
      type();
      setState(641);
      match(MyParserParser::CLOSE_PARENS);
      setState(642);
      unary_expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(644);
      match(MyParserParser::T__14);
      setState(645);
      unary_expression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(646);
      match(MyParserParser::T__20);
      setState(647);
      unary_expression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(648);
      match(MyParserParser::T__2);
      setState(649);
      unary_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

MyParserParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Primary_expression_startContext* MyParserParser::Primary_expressionContext::primary_expression_start() {
  return getRuleContext<MyParserParser::Primary_expression_startContext>(0);
}

std::vector<MyParserParser::Bracket_expressionContext *> MyParserParser::Primary_expressionContext::bracket_expression() {
  return getRuleContexts<MyParserParser::Bracket_expressionContext>();
}

MyParserParser::Bracket_expressionContext* MyParserParser::Primary_expressionContext::bracket_expression(size_t i) {
  return getRuleContext<MyParserParser::Bracket_expressionContext>(i);
}

std::vector<MyParserParser::Member_accessContext *> MyParserParser::Primary_expressionContext::member_access() {
  return getRuleContexts<MyParserParser::Member_accessContext>();
}

MyParserParser::Member_accessContext* MyParserParser::Primary_expressionContext::member_access(size_t i) {
  return getRuleContext<MyParserParser::Member_accessContext>(i);
}

std::vector<MyParserParser::Method_invocationContext *> MyParserParser::Primary_expressionContext::method_invocation() {
  return getRuleContexts<MyParserParser::Method_invocationContext>();
}

MyParserParser::Method_invocationContext* MyParserParser::Primary_expressionContext::method_invocation(size_t i) {
  return getRuleContext<MyParserParser::Method_invocationContext>(i);
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Primary_expressionContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Primary_expressionContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}


size_t MyParserParser::Primary_expressionContext::getRuleIndex() const {
  return MyParserParser::RulePrimary_expression;
}

void MyParserParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void MyParserParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}

MyParserParser::Primary_expressionContext* MyParserParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 58, MyParserParser::RulePrimary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(652);
    dynamic_cast<Primary_expressionContext *>(_localctx)->pe = primary_expression_start();
    setState(656);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(653);
        bracket_expression(); 
      }
      setState(658);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
    setState(675);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(665);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__0:
          case MyParserParser::T__1: {
            setState(659);
            member_access();
            break;
          }

          case MyParserParser::OPEN_PARENS: {
            setState(660);
            method_invocation();
            break;
          }

          case MyParserParser::T__29: {
            setState(661);
            match(MyParserParser::T__29);
            break;
          }

          case MyParserParser::T__30: {
            setState(662);
            match(MyParserParser::T__30);
            break;
          }

          case MyParserParser::T__31: {
            setState(663);
            match(MyParserParser::T__31);
            setState(664);
            identifier();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(670);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(667);
            bracket_expression(); 
          }
          setState(672);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
        } 
      }
      setState(677);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expression_startContext ------------------------------------------------------------------

MyParserParser::Primary_expression_startContext::Primary_expression_startContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Primary_expression_startContext::getRuleIndex() const {
  return MyParserParser::RulePrimary_expression_start;
}

void MyParserParser::Primary_expression_startContext::copyFrom(Primary_expression_startContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LiteralAccessExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::LiteralAccessExpressionContext::LITERAL_ACCESS() {
  return getToken(MyParserParser::LITERAL_ACCESS, 0);
}

MyParserParser::LiteralAccessExpressionContext::LiteralAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::LiteralAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralAccessExpression(this);
}
void MyParserParser::LiteralAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralAccessExpression(this);
}
//----------------- DefaultValueExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::DefaultValueExpressionContext::DEFAULT() {
  return getToken(MyParserParser::DEFAULT, 0);
}

tree::TerminalNode* MyParserParser::DefaultValueExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::TypeContext* MyParserParser::DefaultValueExpressionContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::DefaultValueExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::DefaultValueExpressionContext::DefaultValueExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::DefaultValueExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValueExpression(this);
}
void MyParserParser::DefaultValueExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValueExpression(this);
}
//----------------- BaseAccessExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::BaseAccessExpressionContext::BASE() {
  return getToken(MyParserParser::BASE, 0);
}

MyParserParser::IdentifierContext* MyParserParser::BaseAccessExpressionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Expression_listContext* MyParserParser::BaseAccessExpressionContext::expression_list() {
  return getRuleContext<MyParserParser::Expression_listContext>(0);
}

MyParserParser::Type_argument_listContext* MyParserParser::BaseAccessExpressionContext::type_argument_list() {
  return getRuleContext<MyParserParser::Type_argument_listContext>(0);
}

MyParserParser::BaseAccessExpressionContext::BaseAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::BaseAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseAccessExpression(this);
}
void MyParserParser::BaseAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseAccessExpression(this);
}
//----------------- SizeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::SizeofExpressionContext::SIZEOF() {
  return getToken(MyParserParser::SIZEOF, 0);
}

tree::TerminalNode* MyParserParser::SizeofExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::TypeContext* MyParserParser::SizeofExpressionContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::SizeofExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::SizeofExpressionContext::SizeofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::SizeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSizeofExpression(this);
}
void MyParserParser::SizeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSizeofExpression(this);
}
//----------------- ParenthesisExpressionsContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ParenthesisExpressionsContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::ParenthesisExpressionsContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::ParenthesisExpressionsContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::ParenthesisExpressionsContext::ParenthesisExpressionsContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::ParenthesisExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisExpressions(this);
}
void MyParserParser::ParenthesisExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisExpressions(this);
}
//----------------- ThisReferenceExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ThisReferenceExpressionContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}

MyParserParser::ThisReferenceExpressionContext::ThisReferenceExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::ThisReferenceExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisReferenceExpression(this);
}
void MyParserParser::ThisReferenceExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisReferenceExpression(this);
}
//----------------- ObjectCreationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ObjectCreationExpressionContext::NEW() {
  return getToken(MyParserParser::NEW, 0);
}

MyParserParser::TypeContext* MyParserParser::ObjectCreationExpressionContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::Anonymous_object_initializerContext* MyParserParser::ObjectCreationExpressionContext::anonymous_object_initializer() {
  return getRuleContext<MyParserParser::Anonymous_object_initializerContext>(0);
}

std::vector<MyParserParser::Rank_specifierContext *> MyParserParser::ObjectCreationExpressionContext::rank_specifier() {
  return getRuleContexts<MyParserParser::Rank_specifierContext>();
}

MyParserParser::Rank_specifierContext* MyParserParser::ObjectCreationExpressionContext::rank_specifier(size_t i) {
  return getRuleContext<MyParserParser::Rank_specifierContext>(i);
}

MyParserParser::Array_initializerContext* MyParserParser::ObjectCreationExpressionContext::array_initializer() {
  return getRuleContext<MyParserParser::Array_initializerContext>(0);
}

MyParserParser::Object_creation_expressionContext* MyParserParser::ObjectCreationExpressionContext::object_creation_expression() {
  return getRuleContext<MyParserParser::Object_creation_expressionContext>(0);
}

MyParserParser::Object_or_collection_initializerContext* MyParserParser::ObjectCreationExpressionContext::object_or_collection_initializer() {
  return getRuleContext<MyParserParser::Object_or_collection_initializerContext>(0);
}

MyParserParser::Expression_listContext* MyParserParser::ObjectCreationExpressionContext::expression_list() {
  return getRuleContext<MyParserParser::Expression_listContext>(0);
}

MyParserParser::ObjectCreationExpressionContext::ObjectCreationExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::ObjectCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectCreationExpression(this);
}
void MyParserParser::ObjectCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectCreationExpression(this);
}
//----------------- AnonymousMethodExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::AnonymousMethodExpressionContext::DELEGATE() {
  return getToken(MyParserParser::DELEGATE, 0);
}

MyParserParser::BlockContext* MyParserParser::AnonymousMethodExpressionContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

tree::TerminalNode* MyParserParser::AnonymousMethodExpressionContext::ASYNC() {
  return getToken(MyParserParser::ASYNC, 0);
}

tree::TerminalNode* MyParserParser::AnonymousMethodExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::AnonymousMethodExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Explicit_anonymous_function_parameter_listContext* MyParserParser::AnonymousMethodExpressionContext::explicit_anonymous_function_parameter_list() {
  return getRuleContext<MyParserParser::Explicit_anonymous_function_parameter_listContext>(0);
}

MyParserParser::AnonymousMethodExpressionContext::AnonymousMethodExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::AnonymousMethodExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousMethodExpression(this);
}
void MyParserParser::AnonymousMethodExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousMethodExpression(this);
}
//----------------- TypeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::TypeofExpressionContext::TYPEOF() {
  return getToken(MyParserParser::TYPEOF, 0);
}

tree::TerminalNode* MyParserParser::TypeofExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::TypeofExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Unbound_type_nameContext* MyParserParser::TypeofExpressionContext::unbound_type_name() {
  return getRuleContext<MyParserParser::Unbound_type_nameContext>(0);
}

MyParserParser::TypeContext* MyParserParser::TypeofExpressionContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::TypeofExpressionContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}

MyParserParser::TypeofExpressionContext::TypeofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}
void MyParserParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}
//----------------- UncheckedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UncheckedExpressionContext::UNCHECKED() {
  return getToken(MyParserParser::UNCHECKED, 0);
}

tree::TerminalNode* MyParserParser::UncheckedExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::UncheckedExpressionContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::UncheckedExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::UncheckedExpressionContext::UncheckedExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::UncheckedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUncheckedExpression(this);
}
void MyParserParser::UncheckedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUncheckedExpression(this);
}
//----------------- SimpleNameExpressionContext ------------------------------------------------------------------

MyParserParser::IdentifierContext* MyParserParser::SimpleNameExpressionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Type_argument_listContext* MyParserParser::SimpleNameExpressionContext::type_argument_list() {
  return getRuleContext<MyParserParser::Type_argument_listContext>(0);
}

MyParserParser::SimpleNameExpressionContext::SimpleNameExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::SimpleNameExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleNameExpression(this);
}
void MyParserParser::SimpleNameExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleNameExpression(this);
}
//----------------- MemberAccessExpressionContext ------------------------------------------------------------------

MyParserParser::Predefined_typeContext* MyParserParser::MemberAccessExpressionContext::predefined_type() {
  return getRuleContext<MyParserParser::Predefined_typeContext>(0);
}

MyParserParser::Qualified_alias_memberContext* MyParserParser::MemberAccessExpressionContext::qualified_alias_member() {
  return getRuleContext<MyParserParser::Qualified_alias_memberContext>(0);
}

MyParserParser::MemberAccessExpressionContext::MemberAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::MemberAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpression(this);
}
void MyParserParser::MemberAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpression(this);
}
//----------------- CheckedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::CheckedExpressionContext::CHECKED() {
  return getToken(MyParserParser::CHECKED, 0);
}

tree::TerminalNode* MyParserParser::CheckedExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::CheckedExpressionContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::CheckedExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::CheckedExpressionContext::CheckedExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::CheckedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckedExpression(this);
}
void MyParserParser::CheckedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckedExpression(this);
}
//----------------- LiteralExpressionContext ------------------------------------------------------------------

MyParserParser::LiteralContext* MyParserParser::LiteralExpressionContext::literal() {
  return getRuleContext<MyParserParser::LiteralContext>(0);
}

MyParserParser::LiteralExpressionContext::LiteralExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}
void MyParserParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}
//----------------- NameofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::NameofExpressionContext::NAMEOF() {
  return getToken(MyParserParser::NAMEOF, 0);
}

tree::TerminalNode* MyParserParser::NameofExpressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::NameofExpressionContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::NameofExpressionContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

tree::TerminalNode* MyParserParser::NameofExpressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::NameofExpressionContext::NameofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void MyParserParser::NameofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameofExpression(this);
}
void MyParserParser::NameofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameofExpression(this);
}
MyParserParser::Primary_expression_startContext* MyParserParser::primary_expression_start() {
  Primary_expression_startContext *_localctx = _tracker.createInstance<Primary_expression_startContext>(_ctx, getState());
  enterRule(_localctx, 60, MyParserParser::RulePrimary_expression_start);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(787);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::LiteralExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(678);
      literal();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::SimpleNameExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(679);
      identifier();
      setState(681);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(680);
        type_argument_list();
        break;
      }

      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::ParenthesisExpressionsContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(683);
      match(MyParserParser::OPEN_PARENS);
      setState(684);
      expression();
      setState(685);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::MemberAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(687);
      predefined_type();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::MemberAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(688);
      qualified_alias_member();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::LiteralAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(689);
      match(MyParserParser::LITERAL_ACCESS);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::ThisReferenceExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(690);
      match(MyParserParser::THIS);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::BaseAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(691);
      match(MyParserParser::T__15);
      setState(701);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::T__0: {
          setState(692);
          match(MyParserParser::T__0);
          setState(693);
          identifier();
          setState(695);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
          case 1: {
            setState(694);
            type_argument_list();
            break;
          }

          }
          break;
        }

        case MyParserParser::T__32: {
          setState(697);
          match(MyParserParser::T__32);
          setState(698);
          expression_list();
          setState(699);
          match(MyParserParser::T__33);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 9: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::ObjectCreationExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(703);
      match(MyParserParser::NEW);
      setState(732);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
      case 1: {
        setState(704);
        type();
        setState(726);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
        case 1: {
          setState(705);
          object_creation_expression();
          break;
        }

        case 2: {
          setState(706);
          object_or_collection_initializer();
          break;
        }

        case 3: {
          setState(707);
          match(MyParserParser::T__32);
          setState(708);
          expression_list();
          setState(709);
          match(MyParserParser::T__33);
          setState(713);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(710);
              rank_specifier(); 
            }
            setState(715);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
          }
          setState(717);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MyParserParser::OPEN_BRACE) {
            setState(716);
            array_initializer();
          }
          break;
        }

        case 4: {
          setState(720); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(719);
            rank_specifier();
            setState(722); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == MyParserParser::T__32);
          setState(724);
          array_initializer();
          break;
        }

        }
        break;
      }

      case 2: {
        setState(728);
        anonymous_object_initializer();
        break;
      }

      case 3: {
        setState(729);
        rank_specifier();
        setState(730);
        array_initializer();
        break;
      }

      }
      break;
    }

    case 10: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::TypeofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(734);
      match(MyParserParser::TYPEOF);
      setState(735);
      match(MyParserParser::OPEN_PARENS);
      setState(739);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
      case 1: {
        setState(736);
        unbound_type_name();
        break;
      }

      case 2: {
        setState(737);
        type();
        break;
      }

      case 3: {
        setState(738);
        match(MyParserParser::VOID);
        break;
      }

      }
      setState(741);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::CheckedExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(742);
      match(MyParserParser::T__23);
      setState(743);
      match(MyParserParser::OPEN_PARENS);
      setState(744);
      expression();
      setState(745);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::UncheckedExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(747);
      match(MyParserParser::UNCHECKED);
      setState(748);
      match(MyParserParser::OPEN_PARENS);
      setState(749);
      expression();
      setState(750);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::DefaultValueExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(752);
      match(MyParserParser::T__28);
      setState(753);
      match(MyParserParser::OPEN_PARENS);
      setState(754);
      type();
      setState(755);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::AnonymousMethodExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(758);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__13) {
        setState(757);
        match(MyParserParser::T__13);
      }
      setState(760);
      match(MyParserParser::T__29);
      setState(766);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::OPEN_PARENS) {
        setState(761);
        match(MyParserParser::OPEN_PARENS);
        setState(763);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
          | (1ULL << MyParserParser::T__9)
          | (1ULL << MyParserParser::T__10)
          | (1ULL << MyParserParser::T__12)
          | (1ULL << MyParserParser::T__13)
          | (1ULL << MyParserParser::T__14)
          | (1ULL << MyParserParser::T__16)
          | (1ULL << MyParserParser::T__18)
          | (1ULL << MyParserParser::T__19)
          | (1ULL << MyParserParser::T__22)
          | (1ULL << MyParserParser::T__27)
          | (1ULL << MyParserParser::T__30)
          | (1ULL << MyParserParser::T__32)
          | (1ULL << MyParserParser::T__33)
          | (1ULL << MyParserParser::EQUALS)
          | (1ULL << MyParserParser::FLOAT)
          | (1ULL << MyParserParser::FROM)
          | (1ULL << MyParserParser::GET)
          | (1ULL << MyParserParser::GROUP)
          | (1ULL << MyParserParser::INT)
          | (1ULL << MyParserParser::INTO)
          | (1ULL << MyParserParser::JOIN)
          | (1ULL << MyParserParser::LET)
          | (1ULL << MyParserParser::LONG)
          | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
          | (1ULL << (MyParserParser::ON - 67))
          | (1ULL << (MyParserParser::ORDERBY - 67))
          | (1ULL << (MyParserParser::OUT - 67))
          | (1ULL << (MyParserParser::PARTIAL - 67))
          | (1ULL << (MyParserParser::REF - 67))
          | (1ULL << (MyParserParser::REMOVE - 67))
          | (1ULL << (MyParserParser::SBYTE - 67))
          | (1ULL << (MyParserParser::SELECT - 67))
          | (1ULL << (MyParserParser::SET - 67))
          | (1ULL << (MyParserParser::SHORT - 67))
          | (1ULL << (MyParserParser::STRING - 67))
          | (1ULL << (MyParserParser::UINT - 67))
          | (1ULL << (MyParserParser::ULONG - 67))
          | (1ULL << (MyParserParser::USHORT - 67))
          | (1ULL << (MyParserParser::VOID - 67))
          | (1ULL << (MyParserParser::WHEN - 67))
          | (1ULL << (MyParserParser::WHERE - 67))
          | (1ULL << (MyParserParser::YIELD - 67))
          | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
          setState(762);
          explicit_anonymous_function_parameter_list();
        }
        setState(765);
        match(MyParserParser::CLOSE_PARENS);
      }
      setState(768);
      block();
      break;
    }

    case 15: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::SizeofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(769);
      match(MyParserParser::SIZEOF);
      setState(770);
      match(MyParserParser::OPEN_PARENS);
      setState(771);
      type();
      setState(772);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<MyParserParser::NameofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(774);
      match(MyParserParser::NAMEOF);
      setState(775);
      match(MyParserParser::OPEN_PARENS);
      setState(781);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(776);
          identifier();
          setState(777);
          match(MyParserParser::T__0); 
        }
        setState(783);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
      }
      setState(784);
      identifier();
      setState(785);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_accessContext ------------------------------------------------------------------

MyParserParser::Member_accessContext::Member_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Member_accessContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Type_argument_listContext* MyParserParser::Member_accessContext::type_argument_list() {
  return getRuleContext<MyParserParser::Type_argument_listContext>(0);
}


size_t MyParserParser::Member_accessContext::getRuleIndex() const {
  return MyParserParser::RuleMember_access;
}

void MyParserParser::Member_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_access(this);
}

void MyParserParser::Member_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_access(this);
}

MyParserParser::Member_accessContext* MyParserParser::member_access() {
  Member_accessContext *_localctx = _tracker.createInstance<Member_accessContext>(_ctx, getState());
  enterRule(_localctx, 62, MyParserParser::RuleMember_access);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__1) {
      setState(789);
      match(MyParserParser::T__1);
    }
    setState(792);
    match(MyParserParser::T__0);
    setState(793);
    identifier();
    setState(795);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(794);
      type_argument_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bracket_expressionContext ------------------------------------------------------------------

MyParserParser::Bracket_expressionContext::Bracket_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Indexer_argumentContext *> MyParserParser::Bracket_expressionContext::indexer_argument() {
  return getRuleContexts<MyParserParser::Indexer_argumentContext>();
}

MyParserParser::Indexer_argumentContext* MyParserParser::Bracket_expressionContext::indexer_argument(size_t i) {
  return getRuleContext<MyParserParser::Indexer_argumentContext>(i);
}


size_t MyParserParser::Bracket_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleBracket_expression;
}

void MyParserParser::Bracket_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracket_expression(this);
}

void MyParserParser::Bracket_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracket_expression(this);
}

MyParserParser::Bracket_expressionContext* MyParserParser::bracket_expression() {
  Bracket_expressionContext *_localctx = _tracker.createInstance<Bracket_expressionContext>(_ctx, getState());
  enterRule(_localctx, 64, MyParserParser::RuleBracket_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__1) {
      setState(797);
      match(MyParserParser::T__1);
    }
    setState(800);
    match(MyParserParser::T__32);
    setState(801);
    indexer_argument();
    setState(806);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(802);
      match(MyParserParser::T__4);
      setState(803);
      indexer_argument();
      setState(808);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(809);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexer_argumentContext ------------------------------------------------------------------

MyParserParser::Indexer_argumentContext::Indexer_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Indexer_argumentContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Indexer_argumentContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Indexer_argumentContext::getRuleIndex() const {
  return MyParserParser::RuleIndexer_argument;
}

void MyParserParser::Indexer_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexer_argument(this);
}

void MyParserParser::Indexer_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexer_argument(this);
}

MyParserParser::Indexer_argumentContext* MyParserParser::indexer_argument() {
  Indexer_argumentContext *_localctx = _tracker.createInstance<Indexer_argumentContext>(_ctx, getState());
  enterRule(_localctx, 66, MyParserParser::RuleIndexer_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(811);
      identifier();
      setState(812);
      match(MyParserParser::T__6);
      break;
    }

    }
    setState(816);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predefined_typeContext ------------------------------------------------------------------

MyParserParser::Predefined_typeContext::Predefined_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::BOOL() {
  return getToken(MyParserParser::BOOL, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::BYTE() {
  return getToken(MyParserParser::BYTE, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::CHAR() {
  return getToken(MyParserParser::CHAR, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::DECIMAL() {
  return getToken(MyParserParser::DECIMAL, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::DOUBLE() {
  return getToken(MyParserParser::DOUBLE, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::FLOAT() {
  return getToken(MyParserParser::FLOAT, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::INT() {
  return getToken(MyParserParser::INT, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::LONG() {
  return getToken(MyParserParser::LONG, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::OBJECT() {
  return getToken(MyParserParser::OBJECT, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::SBYTE() {
  return getToken(MyParserParser::SBYTE, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::SHORT() {
  return getToken(MyParserParser::SHORT, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::STRING() {
  return getToken(MyParserParser::STRING, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::UINT() {
  return getToken(MyParserParser::UINT, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::ULONG() {
  return getToken(MyParserParser::ULONG, 0);
}

tree::TerminalNode* MyParserParser::Predefined_typeContext::USHORT() {
  return getToken(MyParserParser::USHORT, 0);
}


size_t MyParserParser::Predefined_typeContext::getRuleIndex() const {
  return MyParserParser::RulePredefined_type;
}

void MyParserParser::Predefined_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefined_type(this);
}

void MyParserParser::Predefined_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefined_type(this);
}

MyParserParser::Predefined_typeContext* MyParserParser::predefined_type() {
  Predefined_typeContext *_localctx = _tracker.createInstance<Predefined_typeContext>(_ctx, getState());
  enterRule(_localctx, 68, MyParserParser::RulePredefined_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::LONG))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
      | (1ULL << (MyParserParser::SBYTE - 67))
      | (1ULL << (MyParserParser::SHORT - 67))
      | (1ULL << (MyParserParser::STRING - 67))
      | (1ULL << (MyParserParser::UINT - 67))
      | (1ULL << (MyParserParser::ULONG - 67))
      | (1ULL << (MyParserParser::USHORT - 67)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

MyParserParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::Expression_listContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}


size_t MyParserParser::Expression_listContext::getRuleIndex() const {
  return MyParserParser::RuleExpression_list;
}

void MyParserParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void MyParserParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}

MyParserParser::Expression_listContext* MyParserParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 70, MyParserParser::RuleExpression_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    expression();
    setState(825);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(821);
      match(MyParserParser::T__4);
      setState(822);
      expression();
      setState(827);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_or_collection_initializerContext ------------------------------------------------------------------

MyParserParser::Object_or_collection_initializerContext::Object_or_collection_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Object_initializerContext* MyParserParser::Object_or_collection_initializerContext::object_initializer() {
  return getRuleContext<MyParserParser::Object_initializerContext>(0);
}

MyParserParser::Collection_initializerContext* MyParserParser::Object_or_collection_initializerContext::collection_initializer() {
  return getRuleContext<MyParserParser::Collection_initializerContext>(0);
}


size_t MyParserParser::Object_or_collection_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleObject_or_collection_initializer;
}

void MyParserParser::Object_or_collection_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_or_collection_initializer(this);
}

void MyParserParser::Object_or_collection_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_or_collection_initializer(this);
}

MyParserParser::Object_or_collection_initializerContext* MyParserParser::object_or_collection_initializer() {
  Object_or_collection_initializerContext *_localctx = _tracker.createInstance<Object_or_collection_initializerContext>(_ctx, getState());
  enterRule(_localctx, 72, MyParserParser::RuleObject_or_collection_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(830);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(828);
      object_initializer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(829);
      collection_initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_initializerContext ------------------------------------------------------------------

MyParserParser::Object_initializerContext::Object_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Object_initializerContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Object_initializerContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Member_initializer_listContext* MyParserParser::Object_initializerContext::member_initializer_list() {
  return getRuleContext<MyParserParser::Member_initializer_listContext>(0);
}


size_t MyParserParser::Object_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleObject_initializer;
}

void MyParserParser::Object_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_initializer(this);
}

void MyParserParser::Object_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_initializer(this);
}

MyParserParser::Object_initializerContext* MyParserParser::object_initializer() {
  Object_initializerContext *_localctx = _tracker.createInstance<Object_initializerContext>(_ctx, getState());
  enterRule(_localctx, 74, MyParserParser::RuleObject_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    match(MyParserParser::OPEN_BRACE);
    setState(837);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MyParserParser::ON - 68))
      | (1ULL << (MyParserParser::ORDERBY - 68))
      | (1ULL << (MyParserParser::PARTIAL - 68))
      | (1ULL << (MyParserParser::REMOVE - 68))
      | (1ULL << (MyParserParser::SELECT - 68))
      | (1ULL << (MyParserParser::SET - 68))
      | (1ULL << (MyParserParser::WHEN - 68))
      | (1ULL << (MyParserParser::WHERE - 68))
      | (1ULL << (MyParserParser::YIELD - 68))
      | (1ULL << (MyParserParser::IDENTIFIER - 68)))) != 0)) {
      setState(833);
      member_initializer_list();
      setState(835);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__4) {
        setState(834);
        match(MyParserParser::T__4);
      }
    }
    setState(839);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_initializer_listContext ------------------------------------------------------------------

MyParserParser::Member_initializer_listContext::Member_initializer_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Member_initializerContext *> MyParserParser::Member_initializer_listContext::member_initializer() {
  return getRuleContexts<MyParserParser::Member_initializerContext>();
}

MyParserParser::Member_initializerContext* MyParserParser::Member_initializer_listContext::member_initializer(size_t i) {
  return getRuleContext<MyParserParser::Member_initializerContext>(i);
}


size_t MyParserParser::Member_initializer_listContext::getRuleIndex() const {
  return MyParserParser::RuleMember_initializer_list;
}

void MyParserParser::Member_initializer_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_initializer_list(this);
}

void MyParserParser::Member_initializer_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_initializer_list(this);
}

MyParserParser::Member_initializer_listContext* MyParserParser::member_initializer_list() {
  Member_initializer_listContext *_localctx = _tracker.createInstance<Member_initializer_listContext>(_ctx, getState());
  enterRule(_localctx, 76, MyParserParser::RuleMember_initializer_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(841);
    member_initializer();
    setState(846);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(842);
        match(MyParserParser::T__4);
        setState(843);
        member_initializer(); 
      }
      setState(848);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_initializerContext ------------------------------------------------------------------

MyParserParser::Member_initializerContext::Member_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Initializer_valueContext* MyParserParser::Member_initializerContext::initializer_value() {
  return getRuleContext<MyParserParser::Initializer_valueContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Member_initializerContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Member_initializerContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Member_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleMember_initializer;
}

void MyParserParser::Member_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_initializer(this);
}

void MyParserParser::Member_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_initializer(this);
}

MyParserParser::Member_initializerContext* MyParserParser::member_initializer() {
  Member_initializerContext *_localctx = _tracker.createInstance<Member_initializerContext>(_ctx, getState());
  enterRule(_localctx, 78, MyParserParser::RuleMember_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(854);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        setState(849);
        identifier();
        break;
      }

      case MyParserParser::T__32: {
        setState(850);
        match(MyParserParser::T__32);
        setState(851);
        expression();
        setState(852);
        match(MyParserParser::T__33);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(856);
    match(MyParserParser::T__7);
    setState(857);
    initializer_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_valueContext ------------------------------------------------------------------

MyParserParser::Initializer_valueContext::Initializer_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Initializer_valueContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Object_or_collection_initializerContext* MyParserParser::Initializer_valueContext::object_or_collection_initializer() {
  return getRuleContext<MyParserParser::Object_or_collection_initializerContext>(0);
}


size_t MyParserParser::Initializer_valueContext::getRuleIndex() const {
  return MyParserParser::RuleInitializer_value;
}

void MyParserParser::Initializer_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_value(this);
}

void MyParserParser::Initializer_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_value(this);
}

MyParserParser::Initializer_valueContext* MyParserParser::initializer_value() {
  Initializer_valueContext *_localctx = _tracker.createInstance<Initializer_valueContext>(_ctx, getState());
  enterRule(_localctx, 80, MyParserParser::RuleInitializer_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(861);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(859);
        expression();
        break;
      }

      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(860);
        object_or_collection_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Collection_initializerContext ------------------------------------------------------------------

MyParserParser::Collection_initializerContext::Collection_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Collection_initializerContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

std::vector<MyParserParser::Element_initializerContext *> MyParserParser::Collection_initializerContext::element_initializer() {
  return getRuleContexts<MyParserParser::Element_initializerContext>();
}

MyParserParser::Element_initializerContext* MyParserParser::Collection_initializerContext::element_initializer(size_t i) {
  return getRuleContext<MyParserParser::Element_initializerContext>(i);
}

tree::TerminalNode* MyParserParser::Collection_initializerContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}


size_t MyParserParser::Collection_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleCollection_initializer;
}

void MyParserParser::Collection_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollection_initializer(this);
}

void MyParserParser::Collection_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollection_initializer(this);
}

MyParserParser::Collection_initializerContext* MyParserParser::collection_initializer() {
  Collection_initializerContext *_localctx = _tracker.createInstance<Collection_initializerContext>(_ctx, getState());
  enterRule(_localctx, 82, MyParserParser::RuleCollection_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(863);
    match(MyParserParser::OPEN_BRACE);
    setState(864);
    element_initializer();
    setState(869);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(865);
        match(MyParserParser::T__4);
        setState(866);
        element_initializer(); 
      }
      setState(871);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
    setState(873);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__4) {
      setState(872);
      match(MyParserParser::T__4);
    }
    setState(875);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Element_initializerContext ------------------------------------------------------------------

MyParserParser::Element_initializerContext::Element_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Non_assignment_expressionContext* MyParserParser::Element_initializerContext::non_assignment_expression() {
  return getRuleContext<MyParserParser::Non_assignment_expressionContext>(0);
}

tree::TerminalNode* MyParserParser::Element_initializerContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

MyParserParser::Expression_listContext* MyParserParser::Element_initializerContext::expression_list() {
  return getRuleContext<MyParserParser::Expression_listContext>(0);
}

tree::TerminalNode* MyParserParser::Element_initializerContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}


size_t MyParserParser::Element_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleElement_initializer;
}

void MyParserParser::Element_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement_initializer(this);
}

void MyParserParser::Element_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement_initializer(this);
}

MyParserParser::Element_initializerContext* MyParserParser::element_initializer() {
  Element_initializerContext *_localctx = _tracker.createInstance<Element_initializerContext>(_ctx, getState());
  enterRule(_localctx, 84, MyParserParser::RuleElement_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(882);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(877);
        non_assignment_expression();
        break;
      }

      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(878);
        match(MyParserParser::OPEN_BRACE);
        setState(879);
        expression_list();
        setState(880);
        match(MyParserParser::CLOSE_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_object_initializerContext ------------------------------------------------------------------

MyParserParser::Anonymous_object_initializerContext::Anonymous_object_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Anonymous_object_initializerContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Anonymous_object_initializerContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Member_declarator_listContext* MyParserParser::Anonymous_object_initializerContext::member_declarator_list() {
  return getRuleContext<MyParserParser::Member_declarator_listContext>(0);
}


size_t MyParserParser::Anonymous_object_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleAnonymous_object_initializer;
}

void MyParserParser::Anonymous_object_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_object_initializer(this);
}

void MyParserParser::Anonymous_object_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_object_initializer(this);
}

MyParserParser::Anonymous_object_initializerContext* MyParserParser::anonymous_object_initializer() {
  Anonymous_object_initializerContext *_localctx = _tracker.createInstance<Anonymous_object_initializerContext>(_ctx, getState());
  enterRule(_localctx, 86, MyParserParser::RuleAnonymous_object_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(884);
    match(MyParserParser::OPEN_BRACE);
    setState(889);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0)) {
      setState(885);
      member_declarator_list();
      setState(887);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__4) {
        setState(886);
        match(MyParserParser::T__4);
      }
    }
    setState(891);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_declarator_listContext ------------------------------------------------------------------

MyParserParser::Member_declarator_listContext::Member_declarator_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Member_declaratorContext *> MyParserParser::Member_declarator_listContext::member_declarator() {
  return getRuleContexts<MyParserParser::Member_declaratorContext>();
}

MyParserParser::Member_declaratorContext* MyParserParser::Member_declarator_listContext::member_declarator(size_t i) {
  return getRuleContext<MyParserParser::Member_declaratorContext>(i);
}


size_t MyParserParser::Member_declarator_listContext::getRuleIndex() const {
  return MyParserParser::RuleMember_declarator_list;
}

void MyParserParser::Member_declarator_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_declarator_list(this);
}

void MyParserParser::Member_declarator_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_declarator_list(this);
}

MyParserParser::Member_declarator_listContext* MyParserParser::member_declarator_list() {
  Member_declarator_listContext *_localctx = _tracker.createInstance<Member_declarator_listContext>(_ctx, getState());
  enterRule(_localctx, 88, MyParserParser::RuleMember_declarator_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(893);
    member_declarator();
    setState(898);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(894);
        match(MyParserParser::T__4);
        setState(895);
        member_declarator(); 
      }
      setState(900);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_declaratorContext ------------------------------------------------------------------

MyParserParser::Member_declaratorContext::Member_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Primary_expressionContext* MyParserParser::Member_declaratorContext::primary_expression() {
  return getRuleContext<MyParserParser::Primary_expressionContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Member_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Member_declaratorContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Member_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleMember_declarator;
}

void MyParserParser::Member_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_declarator(this);
}

void MyParserParser::Member_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_declarator(this);
}

MyParserParser::Member_declaratorContext* MyParserParser::member_declarator() {
  Member_declaratorContext *_localctx = _tracker.createInstance<Member_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 90, MyParserParser::RuleMember_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(906);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(901);
      primary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(902);
      identifier();
      setState(903);
      match(MyParserParser::T__7);
      setState(904);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unbound_type_nameContext ------------------------------------------------------------------

MyParserParser::Unbound_type_nameContext::Unbound_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Unbound_type_nameContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Unbound_type_nameContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

std::vector<MyParserParser::Generic_dimension_specifierContext *> MyParserParser::Unbound_type_nameContext::generic_dimension_specifier() {
  return getRuleContexts<MyParserParser::Generic_dimension_specifierContext>();
}

MyParserParser::Generic_dimension_specifierContext* MyParserParser::Unbound_type_nameContext::generic_dimension_specifier(size_t i) {
  return getRuleContext<MyParserParser::Generic_dimension_specifierContext>(i);
}


size_t MyParserParser::Unbound_type_nameContext::getRuleIndex() const {
  return MyParserParser::RuleUnbound_type_name;
}

void MyParserParser::Unbound_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnbound_type_name(this);
}

void MyParserParser::Unbound_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnbound_type_name(this);
}

MyParserParser::Unbound_type_nameContext* MyParserParser::unbound_type_name() {
  Unbound_type_nameContext *_localctx = _tracker.createInstance<Unbound_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 92, MyParserParser::RuleUnbound_type_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(908);
    identifier();
    setState(917);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__0:
      case MyParserParser::T__3:
      case MyParserParser::CLOSE_PARENS: {
        setState(910);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__3) {
          setState(909);
          generic_dimension_specifier();
        }
        break;
      }

      case MyParserParser::T__34: {
        setState(912);
        match(MyParserParser::T__34);
        setState(913);
        identifier();
        setState(915);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__3) {
          setState(914);
          generic_dimension_specifier();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(926);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__0) {
      setState(919);
      match(MyParserParser::T__0);
      setState(920);
      identifier();
      setState(922);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__3) {
        setState(921);
        generic_dimension_specifier();
      }
      setState(928);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Generic_dimension_specifierContext ------------------------------------------------------------------

MyParserParser::Generic_dimension_specifierContext::Generic_dimension_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Generic_dimension_specifierContext::getRuleIndex() const {
  return MyParserParser::RuleGeneric_dimension_specifier;
}

void MyParserParser::Generic_dimension_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneric_dimension_specifier(this);
}

void MyParserParser::Generic_dimension_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneric_dimension_specifier(this);
}

MyParserParser::Generic_dimension_specifierContext* MyParserParser::generic_dimension_specifier() {
  Generic_dimension_specifierContext *_localctx = _tracker.createInstance<Generic_dimension_specifierContext>(_ctx, getState());
  enterRule(_localctx, 94, MyParserParser::RuleGeneric_dimension_specifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(929);
    match(MyParserParser::T__3);
    setState(933);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(930);
      match(MyParserParser::T__4);
      setState(935);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(936);
    match(MyParserParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsTypeContext ------------------------------------------------------------------

MyParserParser::IsTypeContext::IsTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Base_typeContext* MyParserParser::IsTypeContext::base_type() {
  return getRuleContext<MyParserParser::Base_typeContext>(0);
}

std::vector<MyParserParser::Rank_specifierContext *> MyParserParser::IsTypeContext::rank_specifier() {
  return getRuleContexts<MyParserParser::Rank_specifierContext>();
}

MyParserParser::Rank_specifierContext* MyParserParser::IsTypeContext::rank_specifier(size_t i) {
  return getRuleContext<MyParserParser::Rank_specifierContext>(i);
}


size_t MyParserParser::IsTypeContext::getRuleIndex() const {
  return MyParserParser::RuleIsType;
}

void MyParserParser::IsTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsType(this);
}

void MyParserParser::IsTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsType(this);
}

MyParserParser::IsTypeContext* MyParserParser::isType() {
  IsTypeContext *_localctx = _tracker.createInstance<IsTypeContext>(_ctx, getState());
  enterRule(_localctx, 96, MyParserParser::RuleIsType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(938);
    base_type();
    setState(943);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(941);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__32: {
            setState(939);
            rank_specifier();
            break;
          }

          case MyParserParser::T__2: {
            setState(940);
            match(MyParserParser::T__2);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(945);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    }
    setState(947);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      setState(946);
      match(MyParserParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_expressionContext ------------------------------------------------------------------

MyParserParser::Lambda_expressionContext::Lambda_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Anonymous_function_signatureContext* MyParserParser::Lambda_expressionContext::anonymous_function_signature() {
  return getRuleContext<MyParserParser::Anonymous_function_signatureContext>(0);
}

MyParserParser::Right_arrowContext* MyParserParser::Lambda_expressionContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::Anonymous_function_bodyContext* MyParserParser::Lambda_expressionContext::anonymous_function_body() {
  return getRuleContext<MyParserParser::Anonymous_function_bodyContext>(0);
}

tree::TerminalNode* MyParserParser::Lambda_expressionContext::ASYNC() {
  return getToken(MyParserParser::ASYNC, 0);
}


size_t MyParserParser::Lambda_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleLambda_expression;
}

void MyParserParser::Lambda_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda_expression(this);
}

void MyParserParser::Lambda_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda_expression(this);
}

MyParserParser::Lambda_expressionContext* MyParserParser::lambda_expression() {
  Lambda_expressionContext *_localctx = _tracker.createInstance<Lambda_expressionContext>(_ctx, getState());
  enterRule(_localctx, 98, MyParserParser::RuleLambda_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(950);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      setState(949);
      match(MyParserParser::T__13);
      break;
    }

    }
    setState(952);
    anonymous_function_signature();
    setState(953);
    right_arrow();
    setState(954);
    anonymous_function_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_function_signatureContext ------------------------------------------------------------------

MyParserParser::Anonymous_function_signatureContext::Anonymous_function_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Anonymous_function_signatureContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Anonymous_function_signatureContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Explicit_anonymous_function_parameter_listContext* MyParserParser::Anonymous_function_signatureContext::explicit_anonymous_function_parameter_list() {
  return getRuleContext<MyParserParser::Explicit_anonymous_function_parameter_listContext>(0);
}

MyParserParser::Implicit_anonymous_function_parameter_listContext* MyParserParser::Anonymous_function_signatureContext::implicit_anonymous_function_parameter_list() {
  return getRuleContext<MyParserParser::Implicit_anonymous_function_parameter_listContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Anonymous_function_signatureContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Anonymous_function_signatureContext::getRuleIndex() const {
  return MyParserParser::RuleAnonymous_function_signature;
}

void MyParserParser::Anonymous_function_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_function_signature(this);
}

void MyParserParser::Anonymous_function_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_function_signature(this);
}

MyParserParser::Anonymous_function_signatureContext* MyParserParser::anonymous_function_signature() {
  Anonymous_function_signatureContext *_localctx = _tracker.createInstance<Anonymous_function_signatureContext>(_ctx, getState());
  enterRule(_localctx, 100, MyParserParser::RuleAnonymous_function_signature);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(967);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(956);
      match(MyParserParser::OPEN_PARENS);
      setState(957);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(958);
      match(MyParserParser::OPEN_PARENS);
      setState(959);
      explicit_anonymous_function_parameter_list();
      setState(960);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(962);
      match(MyParserParser::OPEN_PARENS);
      setState(963);
      implicit_anonymous_function_parameter_list();
      setState(964);
      match(MyParserParser::CLOSE_PARENS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(966);
      identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Explicit_anonymous_function_parameter_listContext ------------------------------------------------------------------

MyParserParser::Explicit_anonymous_function_parameter_listContext::Explicit_anonymous_function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Explicit_anonymous_function_parameterContext *> MyParserParser::Explicit_anonymous_function_parameter_listContext::explicit_anonymous_function_parameter() {
  return getRuleContexts<MyParserParser::Explicit_anonymous_function_parameterContext>();
}

MyParserParser::Explicit_anonymous_function_parameterContext* MyParserParser::Explicit_anonymous_function_parameter_listContext::explicit_anonymous_function_parameter(size_t i) {
  return getRuleContext<MyParserParser::Explicit_anonymous_function_parameterContext>(i);
}


size_t MyParserParser::Explicit_anonymous_function_parameter_listContext::getRuleIndex() const {
  return MyParserParser::RuleExplicit_anonymous_function_parameter_list;
}

void MyParserParser::Explicit_anonymous_function_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicit_anonymous_function_parameter_list(this);
}

void MyParserParser::Explicit_anonymous_function_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicit_anonymous_function_parameter_list(this);
}

MyParserParser::Explicit_anonymous_function_parameter_listContext* MyParserParser::explicit_anonymous_function_parameter_list() {
  Explicit_anonymous_function_parameter_listContext *_localctx = _tracker.createInstance<Explicit_anonymous_function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 102, MyParserParser::RuleExplicit_anonymous_function_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(969);
    explicit_anonymous_function_parameter();
    setState(974);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(970);
      match(MyParserParser::T__4);
      setState(971);
      explicit_anonymous_function_parameter();
      setState(976);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Explicit_anonymous_function_parameterContext ------------------------------------------------------------------

MyParserParser::Explicit_anonymous_function_parameterContext::Explicit_anonymous_function_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Explicit_anonymous_function_parameterContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Explicit_anonymous_function_parameterContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::Explicit_anonymous_function_parameterContext::REF() {
  return getToken(MyParserParser::REF, 0);
}

tree::TerminalNode* MyParserParser::Explicit_anonymous_function_parameterContext::OUT() {
  return getToken(MyParserParser::OUT, 0);
}


size_t MyParserParser::Explicit_anonymous_function_parameterContext::getRuleIndex() const {
  return MyParserParser::RuleExplicit_anonymous_function_parameter;
}

void MyParserParser::Explicit_anonymous_function_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicit_anonymous_function_parameter(this);
}

void MyParserParser::Explicit_anonymous_function_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicit_anonymous_function_parameter(this);
}

MyParserParser::Explicit_anonymous_function_parameterContext* MyParserParser::explicit_anonymous_function_parameter() {
  Explicit_anonymous_function_parameterContext *_localctx = _tracker.createInstance<Explicit_anonymous_function_parameterContext>(_ctx, getState());
  enterRule(_localctx, 104, MyParserParser::RuleExplicit_anonymous_function_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(978);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::OUT

    || _la == MyParserParser::REF) {
      setState(977);
      dynamic_cast<Explicit_anonymous_function_parameterContext *>(_localctx)->refout = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MyParserParser::OUT

      || _la == MyParserParser::REF)) {
        dynamic_cast<Explicit_anonymous_function_parameterContext *>(_localctx)->refout = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(980);
    type();
    setState(981);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implicit_anonymous_function_parameter_listContext ------------------------------------------------------------------

MyParserParser::Implicit_anonymous_function_parameter_listContext::Implicit_anonymous_function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Implicit_anonymous_function_parameter_listContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Implicit_anonymous_function_parameter_listContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}


size_t MyParserParser::Implicit_anonymous_function_parameter_listContext::getRuleIndex() const {
  return MyParserParser::RuleImplicit_anonymous_function_parameter_list;
}

void MyParserParser::Implicit_anonymous_function_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplicit_anonymous_function_parameter_list(this);
}

void MyParserParser::Implicit_anonymous_function_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplicit_anonymous_function_parameter_list(this);
}

MyParserParser::Implicit_anonymous_function_parameter_listContext* MyParserParser::implicit_anonymous_function_parameter_list() {
  Implicit_anonymous_function_parameter_listContext *_localctx = _tracker.createInstance<Implicit_anonymous_function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 106, MyParserParser::RuleImplicit_anonymous_function_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(983);
    identifier();
    setState(988);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(984);
      match(MyParserParser::T__4);
      setState(985);
      identifier();
      setState(990);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_function_bodyContext ------------------------------------------------------------------

MyParserParser::Anonymous_function_bodyContext::Anonymous_function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Anonymous_function_bodyContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::BlockContext* MyParserParser::Anonymous_function_bodyContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}


size_t MyParserParser::Anonymous_function_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleAnonymous_function_body;
}

void MyParserParser::Anonymous_function_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_function_body(this);
}

void MyParserParser::Anonymous_function_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_function_body(this);
}

MyParserParser::Anonymous_function_bodyContext* MyParserParser::anonymous_function_body() {
  Anonymous_function_bodyContext *_localctx = _tracker.createInstance<Anonymous_function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 108, MyParserParser::RuleAnonymous_function_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(993);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(991);
        expression();
        break;
      }

      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(992);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_expressionContext ------------------------------------------------------------------

MyParserParser::Query_expressionContext::Query_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::From_clauseContext* MyParserParser::Query_expressionContext::from_clause() {
  return getRuleContext<MyParserParser::From_clauseContext>(0);
}

MyParserParser::Query_bodyContext* MyParserParser::Query_expressionContext::query_body() {
  return getRuleContext<MyParserParser::Query_bodyContext>(0);
}


size_t MyParserParser::Query_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleQuery_expression;
}

void MyParserParser::Query_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_expression(this);
}

void MyParserParser::Query_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_expression(this);
}

MyParserParser::Query_expressionContext* MyParserParser::query_expression() {
  Query_expressionContext *_localctx = _tracker.createInstance<Query_expressionContext>(_ctx, getState());
  enterRule(_localctx, 110, MyParserParser::RuleQuery_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(995);
    from_clause();
    setState(996);
    query_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- From_clauseContext ------------------------------------------------------------------

MyParserParser::From_clauseContext::From_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::From_clauseContext::FROM() {
  return getToken(MyParserParser::FROM, 0);
}

MyParserParser::IdentifierContext* MyParserParser::From_clauseContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::From_clauseContext::IN() {
  return getToken(MyParserParser::IN, 0);
}

MyParserParser::ExpressionContext* MyParserParser::From_clauseContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::TypeContext* MyParserParser::From_clauseContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}


size_t MyParserParser::From_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleFrom_clause;
}

void MyParserParser::From_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrom_clause(this);
}

void MyParserParser::From_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrom_clause(this);
}

MyParserParser::From_clauseContext* MyParserParser::from_clause() {
  From_clauseContext *_localctx = _tracker.createInstance<From_clauseContext>(_ctx, getState());
  enterRule(_localctx, 112, MyParserParser::RuleFrom_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(998);
    match(MyParserParser::FROM);
    setState(1000);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      setState(999);
      type();
      break;
    }

    }
    setState(1002);
    identifier();
    setState(1003);
    match(MyParserParser::IN);
    setState(1004);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_bodyContext ------------------------------------------------------------------

MyParserParser::Query_bodyContext::Query_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Select_or_group_clauseContext* MyParserParser::Query_bodyContext::select_or_group_clause() {
  return getRuleContext<MyParserParser::Select_or_group_clauseContext>(0);
}

std::vector<MyParserParser::Query_body_clauseContext *> MyParserParser::Query_bodyContext::query_body_clause() {
  return getRuleContexts<MyParserParser::Query_body_clauseContext>();
}

MyParserParser::Query_body_clauseContext* MyParserParser::Query_bodyContext::query_body_clause(size_t i) {
  return getRuleContext<MyParserParser::Query_body_clauseContext>(i);
}

MyParserParser::Query_continuationContext* MyParserParser::Query_bodyContext::query_continuation() {
  return getRuleContext<MyParserParser::Query_continuationContext>(0);
}


size_t MyParserParser::Query_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleQuery_body;
}

void MyParserParser::Query_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_body(this);
}

void MyParserParser::Query_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_body(this);
}

MyParserParser::Query_bodyContext* MyParserParser::query_body() {
  Query_bodyContext *_localctx = _tracker.createInstance<Query_bodyContext>(_ctx, getState());
  enterRule(_localctx, 114, MyParserParser::RuleQuery_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1009);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 47) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 47)) & ((1ULL << (MyParserParser::FROM - 47))
      | (1ULL << (MyParserParser::JOIN - 47))
      | (1ULL << (MyParserParser::LET - 47))
      | (1ULL << (MyParserParser::ORDERBY - 47))
      | (1ULL << (MyParserParser::WHERE - 47)))) != 0)) {
      setState(1006);
      query_body_clause();
      setState(1011);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1012);
    select_or_group_clause();
    setState(1014);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      setState(1013);
      query_continuation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_body_clauseContext ------------------------------------------------------------------

MyParserParser::Query_body_clauseContext::Query_body_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::From_clauseContext* MyParserParser::Query_body_clauseContext::from_clause() {
  return getRuleContext<MyParserParser::From_clauseContext>(0);
}

MyParserParser::Let_clauseContext* MyParserParser::Query_body_clauseContext::let_clause() {
  return getRuleContext<MyParserParser::Let_clauseContext>(0);
}

MyParserParser::Where_clauseContext* MyParserParser::Query_body_clauseContext::where_clause() {
  return getRuleContext<MyParserParser::Where_clauseContext>(0);
}

MyParserParser::Combined_join_clauseContext* MyParserParser::Query_body_clauseContext::combined_join_clause() {
  return getRuleContext<MyParserParser::Combined_join_clauseContext>(0);
}

MyParserParser::Orderby_clauseContext* MyParserParser::Query_body_clauseContext::orderby_clause() {
  return getRuleContext<MyParserParser::Orderby_clauseContext>(0);
}


size_t MyParserParser::Query_body_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleQuery_body_clause;
}

void MyParserParser::Query_body_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_body_clause(this);
}

void MyParserParser::Query_body_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_body_clause(this);
}

MyParserParser::Query_body_clauseContext* MyParserParser::query_body_clause() {
  Query_body_clauseContext *_localctx = _tracker.createInstance<Query_body_clauseContext>(_ctx, getState());
  enterRule(_localctx, 116, MyParserParser::RuleQuery_body_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1021);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(1016);
        from_clause();
        break;
      }

      case MyParserParser::LET: {
        enterOuterAlt(_localctx, 2);
        setState(1017);
        let_clause();
        break;
      }

      case MyParserParser::WHERE: {
        enterOuterAlt(_localctx, 3);
        setState(1018);
        where_clause();
        break;
      }

      case MyParserParser::JOIN: {
        enterOuterAlt(_localctx, 4);
        setState(1019);
        combined_join_clause();
        break;
      }

      case MyParserParser::ORDERBY: {
        enterOuterAlt(_localctx, 5);
        setState(1020);
        orderby_clause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Let_clauseContext ------------------------------------------------------------------

MyParserParser::Let_clauseContext::Let_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Let_clauseContext::LET() {
  return getToken(MyParserParser::LET, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Let_clauseContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Let_clauseContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Let_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleLet_clause;
}

void MyParserParser::Let_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLet_clause(this);
}

void MyParserParser::Let_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLet_clause(this);
}

MyParserParser::Let_clauseContext* MyParserParser::let_clause() {
  Let_clauseContext *_localctx = _tracker.createInstance<Let_clauseContext>(_ctx, getState());
  enterRule(_localctx, 118, MyParserParser::RuleLet_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1023);
    match(MyParserParser::LET);
    setState(1024);
    identifier();
    setState(1025);
    match(MyParserParser::T__7);
    setState(1026);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Where_clauseContext ------------------------------------------------------------------

MyParserParser::Where_clauseContext::Where_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Where_clauseContext::WHERE() {
  return getToken(MyParserParser::WHERE, 0);
}

MyParserParser::ExpressionContext* MyParserParser::Where_clauseContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Where_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleWhere_clause;
}

void MyParserParser::Where_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhere_clause(this);
}

void MyParserParser::Where_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhere_clause(this);
}

MyParserParser::Where_clauseContext* MyParserParser::where_clause() {
  Where_clauseContext *_localctx = _tracker.createInstance<Where_clauseContext>(_ctx, getState());
  enterRule(_localctx, 120, MyParserParser::RuleWhere_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1028);
    match(MyParserParser::WHERE);
    setState(1029);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Combined_join_clauseContext ------------------------------------------------------------------

MyParserParser::Combined_join_clauseContext::Combined_join_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Combined_join_clauseContext::JOIN() {
  return getToken(MyParserParser::JOIN, 0);
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Combined_join_clauseContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Combined_join_clauseContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

tree::TerminalNode* MyParserParser::Combined_join_clauseContext::IN() {
  return getToken(MyParserParser::IN, 0);
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::Combined_join_clauseContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::Combined_join_clauseContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}

tree::TerminalNode* MyParserParser::Combined_join_clauseContext::ON() {
  return getToken(MyParserParser::ON, 0);
}

tree::TerminalNode* MyParserParser::Combined_join_clauseContext::EQUALS() {
  return getToken(MyParserParser::EQUALS, 0);
}

MyParserParser::TypeContext* MyParserParser::Combined_join_clauseContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::Combined_join_clauseContext::INTO() {
  return getToken(MyParserParser::INTO, 0);
}


size_t MyParserParser::Combined_join_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleCombined_join_clause;
}

void MyParserParser::Combined_join_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombined_join_clause(this);
}

void MyParserParser::Combined_join_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombined_join_clause(this);
}

MyParserParser::Combined_join_clauseContext* MyParserParser::combined_join_clause() {
  Combined_join_clauseContext *_localctx = _tracker.createInstance<Combined_join_clauseContext>(_ctx, getState());
  enterRule(_localctx, 122, MyParserParser::RuleCombined_join_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1031);
    match(MyParserParser::JOIN);
    setState(1033);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(1032);
      type();
      break;
    }

    }
    setState(1035);
    identifier();
    setState(1036);
    match(MyParserParser::IN);
    setState(1037);
    expression();
    setState(1038);
    match(MyParserParser::ON);
    setState(1039);
    expression();
    setState(1040);
    match(MyParserParser::EQUALS);
    setState(1041);
    expression();
    setState(1044);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::INTO) {
      setState(1042);
      match(MyParserParser::INTO);
      setState(1043);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_clauseContext ------------------------------------------------------------------

MyParserParser::Orderby_clauseContext::Orderby_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Orderby_clauseContext::ORDERBY() {
  return getToken(MyParserParser::ORDERBY, 0);
}

std::vector<MyParserParser::OrderingContext *> MyParserParser::Orderby_clauseContext::ordering() {
  return getRuleContexts<MyParserParser::OrderingContext>();
}

MyParserParser::OrderingContext* MyParserParser::Orderby_clauseContext::ordering(size_t i) {
  return getRuleContext<MyParserParser::OrderingContext>(i);
}


size_t MyParserParser::Orderby_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleOrderby_clause;
}

void MyParserParser::Orderby_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_clause(this);
}

void MyParserParser::Orderby_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_clause(this);
}

MyParserParser::Orderby_clauseContext* MyParserParser::orderby_clause() {
  Orderby_clauseContext *_localctx = _tracker.createInstance<Orderby_clauseContext>(_ctx, getState());
  enterRule(_localctx, 124, MyParserParser::RuleOrderby_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
    match(MyParserParser::ORDERBY);
    setState(1047);
    ordering();
    setState(1052);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1048);
      match(MyParserParser::T__4);
      setState(1049);
      ordering();
      setState(1054);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderingContext ------------------------------------------------------------------

MyParserParser::OrderingContext::OrderingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::OrderingContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::OrderingContext::ASCENDING() {
  return getToken(MyParserParser::ASCENDING, 0);
}

tree::TerminalNode* MyParserParser::OrderingContext::DESCENDING() {
  return getToken(MyParserParser::DESCENDING, 0);
}


size_t MyParserParser::OrderingContext::getRuleIndex() const {
  return MyParserParser::RuleOrdering;
}

void MyParserParser::OrderingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrdering(this);
}

void MyParserParser::OrderingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrdering(this);
}

MyParserParser::OrderingContext* MyParserParser::ordering() {
  OrderingContext *_localctx = _tracker.createInstance<OrderingContext>(_ctx, getState());
  enterRule(_localctx, 126, MyParserParser::RuleOrdering);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1055);
    expression();
    setState(1057);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__12

    || _la == MyParserParser::T__30) {
      setState(1056);
      dynamic_cast<OrderingContext *>(_localctx)->dir = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MyParserParser::T__12

      || _la == MyParserParser::T__30)) {
        dynamic_cast<OrderingContext *>(_localctx)->dir = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_or_group_clauseContext ------------------------------------------------------------------

MyParserParser::Select_or_group_clauseContext::Select_or_group_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Select_or_group_clauseContext::SELECT() {
  return getToken(MyParserParser::SELECT, 0);
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::Select_or_group_clauseContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::Select_or_group_clauseContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}

tree::TerminalNode* MyParserParser::Select_or_group_clauseContext::GROUP() {
  return getToken(MyParserParser::GROUP, 0);
}

tree::TerminalNode* MyParserParser::Select_or_group_clauseContext::BY() {
  return getToken(MyParserParser::BY, 0);
}


size_t MyParserParser::Select_or_group_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleSelect_or_group_clause;
}

void MyParserParser::Select_or_group_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_or_group_clause(this);
}

void MyParserParser::Select_or_group_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_or_group_clause(this);
}

MyParserParser::Select_or_group_clauseContext* MyParserParser::select_or_group_clause() {
  Select_or_group_clauseContext *_localctx = _tracker.createInstance<Select_or_group_clauseContext>(_ctx, getState());
  enterRule(_localctx, 128, MyParserParser::RuleSelect_or_group_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1066);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(1059);
        match(MyParserParser::SELECT);
        setState(1060);
        expression();
        break;
      }

      case MyParserParser::GROUP: {
        enterOuterAlt(_localctx, 2);
        setState(1061);
        match(MyParserParser::GROUP);
        setState(1062);
        expression();
        setState(1063);
        match(MyParserParser::T__18);
        setState(1064);
        expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_continuationContext ------------------------------------------------------------------

MyParserParser::Query_continuationContext::Query_continuationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Query_continuationContext::INTO() {
  return getToken(MyParserParser::INTO, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Query_continuationContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Query_bodyContext* MyParserParser::Query_continuationContext::query_body() {
  return getRuleContext<MyParserParser::Query_bodyContext>(0);
}


size_t MyParserParser::Query_continuationContext::getRuleIndex() const {
  return MyParserParser::RuleQuery_continuation;
}

void MyParserParser::Query_continuationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_continuation(this);
}

void MyParserParser::Query_continuationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_continuation(this);
}

MyParserParser::Query_continuationContext* MyParserParser::query_continuation() {
  Query_continuationContext *_localctx = _tracker.createInstance<Query_continuationContext>(_ctx, getState());
  enterRule(_localctx, 130, MyParserParser::RuleQuery_continuation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1068);
    match(MyParserParser::INTO);
    setState(1069);
    identifier();
    setState(1070);
    query_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MyParserParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::StatementContext::getRuleIndex() const {
  return MyParserParser::RuleStatement;
}

void MyParserParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

MyParserParser::Local_variable_declarationContext* MyParserParser::DeclarationStatementContext::local_variable_declaration() {
  return getRuleContext<MyParserParser::Local_variable_declarationContext>(0);
}

MyParserParser::Local_constant_declarationContext* MyParserParser::DeclarationStatementContext::local_constant_declaration() {
  return getRuleContext<MyParserParser::Local_constant_declarationContext>(0);
}

MyParserParser::DeclarationStatementContext::DeclarationStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void MyParserParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}
void MyParserParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}
//----------------- EmbeddedStatementContext ------------------------------------------------------------------

MyParserParser::Embedded_statementContext* MyParserParser::EmbeddedStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::EmbeddedStatementContext::EmbeddedStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void MyParserParser::EmbeddedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmbeddedStatement(this);
}
void MyParserParser::EmbeddedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmbeddedStatement(this);
}
//----------------- LabeledStatementContext ------------------------------------------------------------------

MyParserParser::IdentifierContext* MyParserParser::LabeledStatementContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::StatementContext* MyParserParser::LabeledStatementContext::statement() {
  return getRuleContext<MyParserParser::StatementContext>(0);
}

MyParserParser::LabeledStatementContext::LabeledStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void MyParserParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}
void MyParserParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}
MyParserParser::StatementContext* MyParserParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 132, MyParserParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1083);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<MyParserParser::LabeledStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1072);
      identifier();
      setState(1073);
      match(MyParserParser::T__6);
      setState(1074);
      statement();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<MyParserParser::DeclarationStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1078);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::T__8:
        case MyParserParser::T__9:
        case MyParserParser::T__10:
        case MyParserParser::T__12:
        case MyParserParser::T__13:
        case MyParserParser::T__14:
        case MyParserParser::T__16:
        case MyParserParser::T__18:
        case MyParserParser::T__19:
        case MyParserParser::T__22:
        case MyParserParser::T__27:
        case MyParserParser::T__30:
        case MyParserParser::T__32:
        case MyParserParser::T__33:
        case MyParserParser::EQUALS:
        case MyParserParser::FLOAT:
        case MyParserParser::FROM:
        case MyParserParser::GET:
        case MyParserParser::GROUP:
        case MyParserParser::INT:
        case MyParserParser::INTO:
        case MyParserParser::JOIN:
        case MyParserParser::LET:
        case MyParserParser::LONG:
        case MyParserParser::NAMEOF:
        case MyParserParser::OBJECT:
        case MyParserParser::ON:
        case MyParserParser::ORDERBY:
        case MyParserParser::PARTIAL:
        case MyParserParser::REMOVE:
        case MyParserParser::SBYTE:
        case MyParserParser::SELECT:
        case MyParserParser::SET:
        case MyParserParser::SHORT:
        case MyParserParser::STRING:
        case MyParserParser::UINT:
        case MyParserParser::ULONG:
        case MyParserParser::USHORT:
        case MyParserParser::VOID:
        case MyParserParser::WHEN:
        case MyParserParser::WHERE:
        case MyParserParser::YIELD:
        case MyParserParser::IDENTIFIER: {
          setState(1076);
          local_variable_declaration();
          break;
        }

        case MyParserParser::T__25: {
          setState(1077);
          local_constant_declaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1080);
      match(MyParserParser::T__35);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<MyParserParser::EmbeddedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1082);
      embedded_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Embedded_statementContext ------------------------------------------------------------------

MyParserParser::Embedded_statementContext::Embedded_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::BlockContext* MyParserParser::Embedded_statementContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::Simple_embedded_statementContext* MyParserParser::Embedded_statementContext::simple_embedded_statement() {
  return getRuleContext<MyParserParser::Simple_embedded_statementContext>(0);
}


size_t MyParserParser::Embedded_statementContext::getRuleIndex() const {
  return MyParserParser::RuleEmbedded_statement;
}

void MyParserParser::Embedded_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmbedded_statement(this);
}

void MyParserParser::Embedded_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmbedded_statement(this);
}

MyParserParser::Embedded_statementContext* MyParserParser::embedded_statement() {
  Embedded_statementContext *_localctx = _tracker.createInstance<Embedded_statementContext>(_ctx, getState());
  enterRule(_localctx, 134, MyParserParser::RuleEmbedded_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1087);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1085);
        block();
        break;
      }

      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__17:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__26:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__31:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::T__35:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FIXED:
      case MyParserParser::FLOAT:
      case MyParserParser::FOR:
      case MyParserParser::FOREACH:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GOTO:
      case MyParserParser::GROUP:
      case MyParserParser::IF:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LOCK:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::RETURN:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::SWITCH:
      case MyParserParser::THIS:
      case MyParserParser::THROW:
      case MyParserParser::TRUE:
      case MyParserParser::TRY:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::UNSAFE:
      case MyParserParser::USHORT:
      case MyParserParser::USING:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::WHILE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 2);
        setState(1086);
        simple_embedded_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_embedded_statementContext ------------------------------------------------------------------

MyParserParser::Simple_embedded_statementContext::Simple_embedded_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Simple_embedded_statementContext::getRuleIndex() const {
  return MyParserParser::RuleSimple_embedded_statement;
}

void MyParserParser::Simple_embedded_statementContext::copyFrom(Simple_embedded_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

MyParserParser::EmptyStatementContext::EmptyStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}
void MyParserParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}
//----------------- TryStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::TryStatementContext::TRY() {
  return getToken(MyParserParser::TRY, 0);
}

MyParserParser::BlockContext* MyParserParser::TryStatementContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::Catch_clausesContext* MyParserParser::TryStatementContext::catch_clauses() {
  return getRuleContext<MyParserParser::Catch_clausesContext>(0);
}

MyParserParser::Finally_clauseContext* MyParserParser::TryStatementContext::finally_clause() {
  return getRuleContext<MyParserParser::Finally_clauseContext>(0);
}

MyParserParser::TryStatementContext::TryStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}
void MyParserParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}
//----------------- CheckedStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::CheckedStatementContext::CHECKED() {
  return getToken(MyParserParser::CHECKED, 0);
}

MyParserParser::BlockContext* MyParserParser::CheckedStatementContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::CheckedStatementContext::CheckedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::CheckedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckedStatement(this);
}
void MyParserParser::CheckedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckedStatement(this);
}
//----------------- ThrowStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ThrowStatementContext::THROW() {
  return getToken(MyParserParser::THROW, 0);
}

MyParserParser::ExpressionContext* MyParserParser::ThrowStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::ThrowStatementContext::ThrowStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}
void MyParserParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}
//----------------- ForeschStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ForeschStatementContext::FOREACH() {
  return getToken(MyParserParser::FOREACH, 0);
}

tree::TerminalNode* MyParserParser::ForeschStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::TypeContext* MyParserParser::ForeschStatementContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::ForeschStatementContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::ForeschStatementContext::IN() {
  return getToken(MyParserParser::IN, 0);
}

MyParserParser::ExpressionContext* MyParserParser::ForeschStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::ForeschStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::ForeschStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::ForeschStatementContext::ForeschStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ForeschStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeschStatement(this);
}
void MyParserParser::ForeschStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeschStatement(this);
}
//----------------- UnsafeStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UnsafeStatementContext::UNSAFE() {
  return getToken(MyParserParser::UNSAFE, 0);
}

MyParserParser::BlockContext* MyParserParser::UnsafeStatementContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::UnsafeStatementContext::UnsafeStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::UnsafeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsafeStatement(this);
}
void MyParserParser::UnsafeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsafeStatement(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ForStatementContext::FOR() {
  return getToken(MyParserParser::FOR, 0);
}

tree::TerminalNode* MyParserParser::ForStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::ForStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::ForStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::For_initializerContext* MyParserParser::ForStatementContext::for_initializer() {
  return getRuleContext<MyParserParser::For_initializerContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::ForStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::For_iteratorContext* MyParserParser::ForStatementContext::for_iterator() {
  return getRuleContext<MyParserParser::For_iteratorContext>(0);
}

MyParserParser::ForStatementContext::ForStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void MyParserParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::BreakStatementContext::BREAK() {
  return getToken(MyParserParser::BREAK, 0);
}

MyParserParser::BreakStatementContext::BreakStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}
void MyParserParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::IfStatementContext::IF() {
  return getToken(MyParserParser::IF, 0);
}

tree::TerminalNode* MyParserParser::IfStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::IfStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::IfStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

std::vector<MyParserParser::If_bodyContext *> MyParserParser::IfStatementContext::if_body() {
  return getRuleContexts<MyParserParser::If_bodyContext>();
}

MyParserParser::If_bodyContext* MyParserParser::IfStatementContext::if_body(size_t i) {
  return getRuleContext<MyParserParser::If_bodyContext>(i);
}

tree::TerminalNode* MyParserParser::IfStatementContext::ELSE() {
  return getToken(MyParserParser::ELSE, 0);
}

MyParserParser::IfStatementContext::IfStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void MyParserParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ReturnStatementContext::RETURN() {
  return getToken(MyParserParser::RETURN, 0);
}

MyParserParser::ExpressionContext* MyParserParser::ReturnStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::ReturnStatementContext::ReturnStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void MyParserParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}
//----------------- GotoStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::GotoStatementContext::GOTO() {
  return getToken(MyParserParser::GOTO, 0);
}

MyParserParser::IdentifierContext* MyParserParser::GotoStatementContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::GotoStatementContext::CASE() {
  return getToken(MyParserParser::CASE, 0);
}

MyParserParser::ExpressionContext* MyParserParser::GotoStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::GotoStatementContext::DEFAULT() {
  return getToken(MyParserParser::DEFAULT, 0);
}

MyParserParser::GotoStatementContext::GotoStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}
void MyParserParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}
//----------------- SwitchStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::SwitchStatementContext::SWITCH() {
  return getToken(MyParserParser::SWITCH, 0);
}

tree::TerminalNode* MyParserParser::SwitchStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::SwitchStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::SwitchStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* MyParserParser::SwitchStatementContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::SwitchStatementContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

std::vector<MyParserParser::Switch_sectionContext *> MyParserParser::SwitchStatementContext::switch_section() {
  return getRuleContexts<MyParserParser::Switch_sectionContext>();
}

MyParserParser::Switch_sectionContext* MyParserParser::SwitchStatementContext::switch_section(size_t i) {
  return getRuleContext<MyParserParser::Switch_sectionContext>(i);
}

MyParserParser::SwitchStatementContext::SwitchStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}
void MyParserParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}
//----------------- FixedStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::FixedStatementContext::FIXED() {
  return getToken(MyParserParser::FIXED, 0);
}

tree::TerminalNode* MyParserParser::FixedStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::Pointer_typeContext* MyParserParser::FixedStatementContext::pointer_type() {
  return getRuleContext<MyParserParser::Pointer_typeContext>(0);
}

MyParserParser::Fixed_pointer_declaratorsContext* MyParserParser::FixedStatementContext::fixed_pointer_declarators() {
  return getRuleContext<MyParserParser::Fixed_pointer_declaratorsContext>(0);
}

tree::TerminalNode* MyParserParser::FixedStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::FixedStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::FixedStatementContext::FixedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::FixedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedStatement(this);
}
void MyParserParser::FixedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedStatement(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::WhileStatementContext::WHILE() {
  return getToken(MyParserParser::WHILE, 0);
}

tree::TerminalNode* MyParserParser::WhileStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::WhileStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::WhileStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::WhileStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::WhileStatementContext::WhileStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void MyParserParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}
//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::DoStatementContext::DO() {
  return getToken(MyParserParser::DO, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::DoStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

tree::TerminalNode* MyParserParser::DoStatementContext::WHILE() {
  return getToken(MyParserParser::WHILE, 0);
}

tree::TerminalNode* MyParserParser::DoStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::DoStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::DoStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::DoStatementContext::DoStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void MyParserParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}
//----------------- UncheckedStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UncheckedStatementContext::UNCHECKED() {
  return getToken(MyParserParser::UNCHECKED, 0);
}

MyParserParser::BlockContext* MyParserParser::UncheckedStatementContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::UncheckedStatementContext::UncheckedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::UncheckedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUncheckedStatement(this);
}
void MyParserParser::UncheckedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUncheckedStatement(this);
}
//----------------- ExpressionStatementContext ------------------------------------------------------------------

MyParserParser::ExpressionContext* MyParserParser::ExpressionStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::ExpressionStatementContext::ExpressionStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}
void MyParserParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::ContinueStatementContext::CONTINUE() {
  return getToken(MyParserParser::CONTINUE, 0);
}

MyParserParser::ContinueStatementContext::ContinueStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}
void MyParserParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}
//----------------- UsingStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UsingStatementContext::USING() {
  return getToken(MyParserParser::USING, 0);
}

tree::TerminalNode* MyParserParser::UsingStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::Resource_acquisitionContext* MyParserParser::UsingStatementContext::resource_acquisition() {
  return getRuleContext<MyParserParser::Resource_acquisitionContext>(0);
}

tree::TerminalNode* MyParserParser::UsingStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::UsingStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::UsingStatementContext::UsingStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::UsingStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingStatement(this);
}
void MyParserParser::UsingStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingStatement(this);
}
//----------------- LockStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::LockStatementContext::LOCK() {
  return getToken(MyParserParser::LOCK, 0);
}

tree::TerminalNode* MyParserParser::LockStatementContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::LockStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::LockStatementContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Embedded_statementContext* MyParserParser::LockStatementContext::embedded_statement() {
  return getRuleContext<MyParserParser::Embedded_statementContext>(0);
}

MyParserParser::LockStatementContext::LockStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::LockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLockStatement(this);
}
void MyParserParser::LockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLockStatement(this);
}
//----------------- YieldStatementContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::YieldStatementContext::YIELD() {
  return getToken(MyParserParser::YIELD, 0);
}

tree::TerminalNode* MyParserParser::YieldStatementContext::RETURN() {
  return getToken(MyParserParser::RETURN, 0);
}

MyParserParser::ExpressionContext* MyParserParser::YieldStatementContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::YieldStatementContext::BREAK() {
  return getToken(MyParserParser::BREAK, 0);
}

MyParserParser::YieldStatementContext::YieldStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void MyParserParser::YieldStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldStatement(this);
}
void MyParserParser::YieldStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldStatement(this);
}
MyParserParser::Simple_embedded_statementContext* MyParserParser::simple_embedded_statement() {
  Simple_embedded_statementContext *_localctx = _tracker.createInstance<Simple_embedded_statementContext>(_ctx, getState());
  enterRule(_localctx, 136, MyParserParser::RuleSimple_embedded_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1216);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::EmptyStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1089);
      match(MyParserParser::T__35);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ExpressionStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1090);
      expression();
      setState(1091);
      match(MyParserParser::T__35);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::IfStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1093);
      match(MyParserParser::IF);
      setState(1094);
      match(MyParserParser::OPEN_PARENS);
      setState(1095);
      expression();
      setState(1096);
      match(MyParserParser::CLOSE_PARENS);
      setState(1097);
      if_body();
      setState(1100);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
      case 1: {
        setState(1098);
        match(MyParserParser::T__34);
        setState(1099);
        if_body();
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::SwitchStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1102);
      match(MyParserParser::SWITCH);
      setState(1103);
      match(MyParserParser::OPEN_PARENS);
      setState(1104);
      expression();
      setState(1105);
      match(MyParserParser::CLOSE_PARENS);
      setState(1106);
      match(MyParserParser::OPEN_BRACE);
      setState(1110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MyParserParser::T__20

      || _la == MyParserParser::T__28) {
        setState(1107);
        switch_section();
        setState(1112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1113);
      match(MyParserParser::CLOSE_BRACE);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::WhileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1115);
      match(MyParserParser::WHILE);
      setState(1116);
      match(MyParserParser::OPEN_PARENS);
      setState(1117);
      expression();
      setState(1118);
      match(MyParserParser::CLOSE_PARENS);
      setState(1119);
      embedded_statement();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::DoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1121);
      match(MyParserParser::T__31);
      setState(1122);
      embedded_statement();
      setState(1123);
      match(MyParserParser::WHILE);
      setState(1124);
      match(MyParserParser::OPEN_PARENS);
      setState(1125);
      expression();
      setState(1126);
      match(MyParserParser::CLOSE_PARENS);
      setState(1127);
      match(MyParserParser::T__35);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ForStatementContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1129);
      match(MyParserParser::FOR);
      setState(1130);
      match(MyParserParser::OPEN_PARENS);
      setState(1132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::VOID - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(1131);
        for_initializer();
      }
      setState(1134);
      match(MyParserParser::T__35);
      setState(1136);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(1135);
        expression();
      }
      setState(1138);
      match(MyParserParser::T__35);
      setState(1140);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(1139);
        for_iterator();
      }
      setState(1142);
      match(MyParserParser::CLOSE_PARENS);
      setState(1143);
      embedded_statement();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ForeschStatementContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1144);
      match(MyParserParser::FOREACH);
      setState(1145);
      match(MyParserParser::OPEN_PARENS);
      setState(1146);
      type();
      setState(1147);
      identifier();
      setState(1148);
      match(MyParserParser::IN);
      setState(1149);
      expression();
      setState(1150);
      match(MyParserParser::CLOSE_PARENS);
      setState(1151);
      embedded_statement();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::BreakStatementContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1153);
      match(MyParserParser::T__17);
      setState(1154);
      match(MyParserParser::T__35);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ContinueStatementContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1155);
      match(MyParserParser::T__26);
      setState(1156);
      match(MyParserParser::T__35);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::GotoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(1157);
      match(MyParserParser::GOTO);
      setState(1162);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::T__8:
        case MyParserParser::T__9:
        case MyParserParser::T__10:
        case MyParserParser::T__12:
        case MyParserParser::T__13:
        case MyParserParser::T__14:
        case MyParserParser::T__18:
        case MyParserParser::T__30:
        case MyParserParser::T__33:
        case MyParserParser::EQUALS:
        case MyParserParser::FROM:
        case MyParserParser::GET:
        case MyParserParser::GROUP:
        case MyParserParser::INTO:
        case MyParserParser::JOIN:
        case MyParserParser::LET:
        case MyParserParser::NAMEOF:
        case MyParserParser::ON:
        case MyParserParser::ORDERBY:
        case MyParserParser::PARTIAL:
        case MyParserParser::REMOVE:
        case MyParserParser::SELECT:
        case MyParserParser::SET:
        case MyParserParser::WHEN:
        case MyParserParser::WHERE:
        case MyParserParser::YIELD:
        case MyParserParser::IDENTIFIER: {
          setState(1158);
          identifier();
          break;
        }

        case MyParserParser::T__20: {
          setState(1159);
          match(MyParserParser::T__20);
          setState(1160);
          expression();
          break;
        }

        case MyParserParser::T__28: {
          setState(1161);
          match(MyParserParser::T__28);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1164);
      match(MyParserParser::T__35);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ReturnStatementContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(1165);
      match(MyParserParser::RETURN);
      setState(1167);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(1166);
        expression();
      }
      setState(1169);
      match(MyParserParser::T__35);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::ThrowStatementContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(1170);
      match(MyParserParser::THROW);
      setState(1172);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(1171);
        expression();
      }
      setState(1174);
      match(MyParserParser::T__35);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::TryStatementContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(1175);
      match(MyParserParser::TRY);
      setState(1176);
      block();
      setState(1182);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::T__21: {
          setState(1177);
          catch_clauses();
          setState(1179);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MyParserParser::FINALLY) {
            setState(1178);
            finally_clause();
          }
          break;
        }

        case MyParserParser::FINALLY: {
          setState(1181);
          finally_clause();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 15: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::CheckedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(1184);
      match(MyParserParser::T__23);
      setState(1185);
      block();
      break;
    }

    case 16: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::UncheckedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(1186);
      match(MyParserParser::UNCHECKED);
      setState(1187);
      block();
      break;
    }

    case 17: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::LockStatementContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(1188);
      match(MyParserParser::LOCK);
      setState(1189);
      match(MyParserParser::OPEN_PARENS);
      setState(1190);
      expression();
      setState(1191);
      match(MyParserParser::CLOSE_PARENS);
      setState(1192);
      embedded_statement();
      break;
    }

    case 18: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::UsingStatementContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(1194);
      match(MyParserParser::USING);
      setState(1195);
      match(MyParserParser::OPEN_PARENS);
      setState(1196);
      resource_acquisition();
      setState(1197);
      match(MyParserParser::CLOSE_PARENS);
      setState(1198);
      embedded_statement();
      break;
    }

    case 19: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::YieldStatementContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(1200);
      match(MyParserParser::YIELD);
      setState(1204);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::RETURN: {
          setState(1201);
          match(MyParserParser::RETURN);
          setState(1202);
          expression();
          break;
        }

        case MyParserParser::T__17: {
          setState(1203);
          match(MyParserParser::T__17);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1206);
      match(MyParserParser::T__35);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::UnsafeStatementContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(1207);
      match(MyParserParser::UNSAFE);
      setState(1208);
      block();
      break;
    }

    case 21: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<MyParserParser::FixedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(1209);
      match(MyParserParser::FIXED);
      setState(1210);
      match(MyParserParser::OPEN_PARENS);
      setState(1211);
      pointer_type();
      setState(1212);
      fixed_pointer_declarators();
      setState(1213);
      match(MyParserParser::CLOSE_PARENS);
      setState(1214);
      embedded_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MyParserParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::BlockContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::BlockContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Statement_listContext* MyParserParser::BlockContext::statement_list() {
  return getRuleContext<MyParserParser::Statement_listContext>(0);
}


size_t MyParserParser::BlockContext::getRuleIndex() const {
  return MyParserParser::RuleBlock;
}

void MyParserParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void MyParserParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

MyParserParser::BlockContext* MyParserParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 138, MyParserParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1218);
    match(MyParserParser::OPEN_BRACE);
    setState(1220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__17)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__26)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__31)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FIXED)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FOR)
      | (1ULL << MyParserParser::FOREACH)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GOTO)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::IF)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LOCK)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::RETURN - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::SWITCH - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::THROW - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TRY - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::USING - 65))
      | (1ULL << (MyParserParser::VOID - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::WHILE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_BRACE - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
      setState(1219);
      statement_list();
    }
    setState(1222);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_declarationContext ------------------------------------------------------------------

MyParserParser::Local_variable_declarationContext::Local_variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Local_variable_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

std::vector<MyParserParser::Local_variable_declaratorContext *> MyParserParser::Local_variable_declarationContext::local_variable_declarator() {
  return getRuleContexts<MyParserParser::Local_variable_declaratorContext>();
}

MyParserParser::Local_variable_declaratorContext* MyParserParser::Local_variable_declarationContext::local_variable_declarator(size_t i) {
  return getRuleContext<MyParserParser::Local_variable_declaratorContext>(i);
}


size_t MyParserParser::Local_variable_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleLocal_variable_declaration;
}

void MyParserParser::Local_variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_declaration(this);
}

void MyParserParser::Local_variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_declaration(this);
}

MyParserParser::Local_variable_declarationContext* MyParserParser::local_variable_declaration() {
  Local_variable_declarationContext *_localctx = _tracker.createInstance<Local_variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 140, MyParserParser::RuleLocal_variable_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    type();
    setState(1225);
    local_variable_declarator();
    setState(1230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1226);
      match(MyParserParser::T__4);
      setState(1227);
      local_variable_declarator();
      setState(1232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_declaratorContext ------------------------------------------------------------------

MyParserParser::Local_variable_declaratorContext::Local_variable_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Local_variable_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Local_variable_initializerContext* MyParserParser::Local_variable_declaratorContext::local_variable_initializer() {
  return getRuleContext<MyParserParser::Local_variable_initializerContext>(0);
}


size_t MyParserParser::Local_variable_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleLocal_variable_declarator;
}

void MyParserParser::Local_variable_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_declarator(this);
}

void MyParserParser::Local_variable_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_declarator(this);
}

MyParserParser::Local_variable_declaratorContext* MyParserParser::local_variable_declarator() {
  Local_variable_declaratorContext *_localctx = _tracker.createInstance<Local_variable_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 142, MyParserParser::RuleLocal_variable_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1233);
    identifier();
    setState(1236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__7) {
      setState(1234);
      match(MyParserParser::T__7);
      setState(1235);
      local_variable_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_initializerContext ------------------------------------------------------------------

MyParserParser::Local_variable_initializerContext::Local_variable_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Local_variable_initializerContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Array_initializerContext* MyParserParser::Local_variable_initializerContext::array_initializer() {
  return getRuleContext<MyParserParser::Array_initializerContext>(0);
}

MyParserParser::Local_variable_initializer_unsafeContext* MyParserParser::Local_variable_initializerContext::local_variable_initializer_unsafe() {
  return getRuleContext<MyParserParser::Local_variable_initializer_unsafeContext>(0);
}


size_t MyParserParser::Local_variable_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleLocal_variable_initializer;
}

void MyParserParser::Local_variable_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_initializer(this);
}

void MyParserParser::Local_variable_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_initializer(this);
}

MyParserParser::Local_variable_initializerContext* MyParserParser::local_variable_initializer() {
  Local_variable_initializerContext *_localctx = _tracker.createInstance<Local_variable_initializerContext>(_ctx, getState());
  enterRule(_localctx, 144, MyParserParser::RuleLocal_variable_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1241);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(1238);
        expression();
        break;
      }

      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1239);
        array_initializer();
        break;
      }

      case MyParserParser::STACKALLOC: {
        enterOuterAlt(_localctx, 3);
        setState(1240);
        local_variable_initializer_unsafe();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_constant_declarationContext ------------------------------------------------------------------

MyParserParser::Local_constant_declarationContext::Local_constant_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Local_constant_declarationContext::CONST() {
  return getToken(MyParserParser::CONST, 0);
}

MyParserParser::TypeContext* MyParserParser::Local_constant_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::Constant_declaratorsContext* MyParserParser::Local_constant_declarationContext::constant_declarators() {
  return getRuleContext<MyParserParser::Constant_declaratorsContext>(0);
}


size_t MyParserParser::Local_constant_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleLocal_constant_declaration;
}

void MyParserParser::Local_constant_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_constant_declaration(this);
}

void MyParserParser::Local_constant_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_constant_declaration(this);
}

MyParserParser::Local_constant_declarationContext* MyParserParser::local_constant_declaration() {
  Local_constant_declarationContext *_localctx = _tracker.createInstance<Local_constant_declarationContext>(_ctx, getState());
  enterRule(_localctx, 146, MyParserParser::RuleLocal_constant_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1243);
    match(MyParserParser::T__25);
    setState(1244);
    type();
    setState(1245);
    constant_declarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_bodyContext ------------------------------------------------------------------

MyParserParser::If_bodyContext::If_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::BlockContext* MyParserParser::If_bodyContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::Simple_embedded_statementContext* MyParserParser::If_bodyContext::simple_embedded_statement() {
  return getRuleContext<MyParserParser::Simple_embedded_statementContext>(0);
}


size_t MyParserParser::If_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleIf_body;
}

void MyParserParser::If_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_body(this);
}

void MyParserParser::If_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_body(this);
}

MyParserParser::If_bodyContext* MyParserParser::if_body() {
  If_bodyContext *_localctx = _tracker.createInstance<If_bodyContext>(_ctx, getState());
  enterRule(_localctx, 148, MyParserParser::RuleIf_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1249);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1247);
        block();
        break;
      }

      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__17:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__26:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__31:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::T__35:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FIXED:
      case MyParserParser::FLOAT:
      case MyParserParser::FOR:
      case MyParserParser::FOREACH:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GOTO:
      case MyParserParser::GROUP:
      case MyParserParser::IF:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LOCK:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::RETURN:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::SWITCH:
      case MyParserParser::THIS:
      case MyParserParser::THROW:
      case MyParserParser::TRUE:
      case MyParserParser::TRY:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::UNSAFE:
      case MyParserParser::USHORT:
      case MyParserParser::USING:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::WHILE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 2);
        setState(1248);
        simple_embedded_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_sectionContext ------------------------------------------------------------------

MyParserParser::Switch_sectionContext::Switch_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Statement_listContext* MyParserParser::Switch_sectionContext::statement_list() {
  return getRuleContext<MyParserParser::Statement_listContext>(0);
}

std::vector<MyParserParser::Switch_labelContext *> MyParserParser::Switch_sectionContext::switch_label() {
  return getRuleContexts<MyParserParser::Switch_labelContext>();
}

MyParserParser::Switch_labelContext* MyParserParser::Switch_sectionContext::switch_label(size_t i) {
  return getRuleContext<MyParserParser::Switch_labelContext>(i);
}


size_t MyParserParser::Switch_sectionContext::getRuleIndex() const {
  return MyParserParser::RuleSwitch_section;
}

void MyParserParser::Switch_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_section(this);
}

void MyParserParser::Switch_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_section(this);
}

MyParserParser::Switch_sectionContext* MyParserParser::switch_section() {
  Switch_sectionContext *_localctx = _tracker.createInstance<Switch_sectionContext>(_ctx, getState());
  enterRule(_localctx, 150, MyParserParser::RuleSwitch_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1252); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1251);
              switch_label();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1254); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1256);
    statement_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_labelContext ------------------------------------------------------------------

MyParserParser::Switch_labelContext::Switch_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Switch_labelContext::CASE() {
  return getToken(MyParserParser::CASE, 0);
}

MyParserParser::ExpressionContext* MyParserParser::Switch_labelContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::Switch_labelContext::DEFAULT() {
  return getToken(MyParserParser::DEFAULT, 0);
}


size_t MyParserParser::Switch_labelContext::getRuleIndex() const {
  return MyParserParser::RuleSwitch_label;
}

void MyParserParser::Switch_labelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_label(this);
}

void MyParserParser::Switch_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_label(this);
}

MyParserParser::Switch_labelContext* MyParserParser::switch_label() {
  Switch_labelContext *_localctx = _tracker.createInstance<Switch_labelContext>(_ctx, getState());
  enterRule(_localctx, 152, MyParserParser::RuleSwitch_label);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(1258);
        match(MyParserParser::T__20);
        setState(1259);
        expression();
        setState(1260);
        match(MyParserParser::T__6);
        break;
      }

      case MyParserParser::T__28: {
        enterOuterAlt(_localctx, 2);
        setState(1262);
        match(MyParserParser::T__28);
        setState(1263);
        match(MyParserParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

MyParserParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::StatementContext *> MyParserParser::Statement_listContext::statement() {
  return getRuleContexts<MyParserParser::StatementContext>();
}

MyParserParser::StatementContext* MyParserParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<MyParserParser::StatementContext>(i);
}


size_t MyParserParser::Statement_listContext::getRuleIndex() const {
  return MyParserParser::RuleStatement_list;
}

void MyParserParser::Statement_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_list(this);
}

void MyParserParser::Statement_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_list(this);
}

MyParserParser::Statement_listContext* MyParserParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 154, MyParserParser::RuleStatement_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1267); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1266);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1269); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_initializerContext ------------------------------------------------------------------

MyParserParser::For_initializerContext::For_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Local_variable_declarationContext* MyParserParser::For_initializerContext::local_variable_declaration() {
  return getRuleContext<MyParserParser::Local_variable_declarationContext>(0);
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::For_initializerContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::For_initializerContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}


size_t MyParserParser::For_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleFor_initializer;
}

void MyParserParser::For_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_initializer(this);
}

void MyParserParser::For_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_initializer(this);
}

MyParserParser::For_initializerContext* MyParserParser::for_initializer() {
  For_initializerContext *_localctx = _tracker.createInstance<For_initializerContext>(_ctx, getState());
  enterRule(_localctx, 156, MyParserParser::RuleFor_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1271);
      local_variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1272);
      expression();
      setState(1277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MyParserParser::T__4) {
        setState(1273);
        match(MyParserParser::T__4);
        setState(1274);
        expression();
        setState(1279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_iteratorContext ------------------------------------------------------------------

MyParserParser::For_iteratorContext::For_iteratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::For_iteratorContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::For_iteratorContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}


size_t MyParserParser::For_iteratorContext::getRuleIndex() const {
  return MyParserParser::RuleFor_iterator;
}

void MyParserParser::For_iteratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_iterator(this);
}

void MyParserParser::For_iteratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_iterator(this);
}

MyParserParser::For_iteratorContext* MyParserParser::for_iterator() {
  For_iteratorContext *_localctx = _tracker.createInstance<For_iteratorContext>(_ctx, getState());
  enterRule(_localctx, 158, MyParserParser::RuleFor_iterator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1282);
    expression();
    setState(1287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1283);
      match(MyParserParser::T__4);
      setState(1284);
      expression();
      setState(1289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Catch_clausesContext ------------------------------------------------------------------

MyParserParser::Catch_clausesContext::Catch_clausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Specific_catch_clauseContext *> MyParserParser::Catch_clausesContext::specific_catch_clause() {
  return getRuleContexts<MyParserParser::Specific_catch_clauseContext>();
}

MyParserParser::Specific_catch_clauseContext* MyParserParser::Catch_clausesContext::specific_catch_clause(size_t i) {
  return getRuleContext<MyParserParser::Specific_catch_clauseContext>(i);
}

MyParserParser::General_catch_clauseContext* MyParserParser::Catch_clausesContext::general_catch_clause() {
  return getRuleContext<MyParserParser::General_catch_clauseContext>(0);
}


size_t MyParserParser::Catch_clausesContext::getRuleIndex() const {
  return MyParserParser::RuleCatch_clauses;
}

void MyParserParser::Catch_clausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatch_clauses(this);
}

void MyParserParser::Catch_clausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatch_clauses(this);
}

MyParserParser::Catch_clausesContext* MyParserParser::catch_clauses() {
  Catch_clausesContext *_localctx = _tracker.createInstance<Catch_clausesContext>(_ctx, getState());
  enterRule(_localctx, 160, MyParserParser::RuleCatch_clauses);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1290);
      specific_catch_clause();
      setState(1294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1291);
          specific_catch_clause(); 
        }
        setState(1296);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx);
      }
      setState(1298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__21) {
        setState(1297);
        general_catch_clause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1300);
      general_catch_clause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Specific_catch_clauseContext ------------------------------------------------------------------

MyParserParser::Specific_catch_clauseContext::Specific_catch_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Specific_catch_clauseContext::CATCH() {
  return getToken(MyParserParser::CATCH, 0);
}

tree::TerminalNode* MyParserParser::Specific_catch_clauseContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::Class_typeContext* MyParserParser::Specific_catch_clauseContext::class_type() {
  return getRuleContext<MyParserParser::Class_typeContext>(0);
}

tree::TerminalNode* MyParserParser::Specific_catch_clauseContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::BlockContext* MyParserParser::Specific_catch_clauseContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Specific_catch_clauseContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Exception_filterContext* MyParserParser::Specific_catch_clauseContext::exception_filter() {
  return getRuleContext<MyParserParser::Exception_filterContext>(0);
}


size_t MyParserParser::Specific_catch_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleSpecific_catch_clause;
}

void MyParserParser::Specific_catch_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecific_catch_clause(this);
}

void MyParserParser::Specific_catch_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecific_catch_clause(this);
}

MyParserParser::Specific_catch_clauseContext* MyParserParser::specific_catch_clause() {
  Specific_catch_clauseContext *_localctx = _tracker.createInstance<Specific_catch_clauseContext>(_ctx, getState());
  enterRule(_localctx, 162, MyParserParser::RuleSpecific_catch_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1303);
    match(MyParserParser::T__21);
    setState(1304);
    match(MyParserParser::OPEN_PARENS);
    setState(1305);
    class_type();
    setState(1307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MyParserParser::ON - 68))
      | (1ULL << (MyParserParser::ORDERBY - 68))
      | (1ULL << (MyParserParser::PARTIAL - 68))
      | (1ULL << (MyParserParser::REMOVE - 68))
      | (1ULL << (MyParserParser::SELECT - 68))
      | (1ULL << (MyParserParser::SET - 68))
      | (1ULL << (MyParserParser::WHEN - 68))
      | (1ULL << (MyParserParser::WHERE - 68))
      | (1ULL << (MyParserParser::YIELD - 68))
      | (1ULL << (MyParserParser::IDENTIFIER - 68)))) != 0)) {
      setState(1306);
      identifier();
    }
    setState(1309);
    match(MyParserParser::CLOSE_PARENS);
    setState(1311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHEN) {
      setState(1310);
      exception_filter();
    }
    setState(1313);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- General_catch_clauseContext ------------------------------------------------------------------

MyParserParser::General_catch_clauseContext::General_catch_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::General_catch_clauseContext::CATCH() {
  return getToken(MyParserParser::CATCH, 0);
}

MyParserParser::BlockContext* MyParserParser::General_catch_clauseContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::Exception_filterContext* MyParserParser::General_catch_clauseContext::exception_filter() {
  return getRuleContext<MyParserParser::Exception_filterContext>(0);
}


size_t MyParserParser::General_catch_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleGeneral_catch_clause;
}

void MyParserParser::General_catch_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneral_catch_clause(this);
}

void MyParserParser::General_catch_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneral_catch_clause(this);
}

MyParserParser::General_catch_clauseContext* MyParserParser::general_catch_clause() {
  General_catch_clauseContext *_localctx = _tracker.createInstance<General_catch_clauseContext>(_ctx, getState());
  enterRule(_localctx, 164, MyParserParser::RuleGeneral_catch_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1315);
    match(MyParserParser::T__21);
    setState(1317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHEN) {
      setState(1316);
      exception_filter();
    }
    setState(1319);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exception_filterContext ------------------------------------------------------------------

MyParserParser::Exception_filterContext::Exception_filterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Exception_filterContext::WHEN() {
  return getToken(MyParserParser::WHEN, 0);
}

tree::TerminalNode* MyParserParser::Exception_filterContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::ExpressionContext* MyParserParser::Exception_filterContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* MyParserParser::Exception_filterContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}


size_t MyParserParser::Exception_filterContext::getRuleIndex() const {
  return MyParserParser::RuleException_filter;
}

void MyParserParser::Exception_filterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterException_filter(this);
}

void MyParserParser::Exception_filterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitException_filter(this);
}

MyParserParser::Exception_filterContext* MyParserParser::exception_filter() {
  Exception_filterContext *_localctx = _tracker.createInstance<Exception_filterContext>(_ctx, getState());
  enterRule(_localctx, 166, MyParserParser::RuleException_filter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1321);
    match(MyParserParser::WHEN);
    setState(1322);
    match(MyParserParser::OPEN_PARENS);
    setState(1323);
    expression();
    setState(1324);
    match(MyParserParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finally_clauseContext ------------------------------------------------------------------

MyParserParser::Finally_clauseContext::Finally_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Finally_clauseContext::FINALLY() {
  return getToken(MyParserParser::FINALLY, 0);
}

MyParserParser::BlockContext* MyParserParser::Finally_clauseContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}


size_t MyParserParser::Finally_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleFinally_clause;
}

void MyParserParser::Finally_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinally_clause(this);
}

void MyParserParser::Finally_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinally_clause(this);
}

MyParserParser::Finally_clauseContext* MyParserParser::finally_clause() {
  Finally_clauseContext *_localctx = _tracker.createInstance<Finally_clauseContext>(_ctx, getState());
  enterRule(_localctx, 168, MyParserParser::RuleFinally_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1326);
    match(MyParserParser::FINALLY);
    setState(1327);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Resource_acquisitionContext ------------------------------------------------------------------

MyParserParser::Resource_acquisitionContext::Resource_acquisitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Local_variable_declarationContext* MyParserParser::Resource_acquisitionContext::local_variable_declaration() {
  return getRuleContext<MyParserParser::Local_variable_declarationContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Resource_acquisitionContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Resource_acquisitionContext::getRuleIndex() const {
  return MyParserParser::RuleResource_acquisition;
}

void MyParserParser::Resource_acquisitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource_acquisition(this);
}

void MyParserParser::Resource_acquisitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource_acquisition(this);
}

MyParserParser::Resource_acquisitionContext* MyParserParser::resource_acquisition() {
  Resource_acquisitionContext *_localctx = _tracker.createInstance<Resource_acquisitionContext>(_ctx, getState());
  enterRule(_localctx, 170, MyParserParser::RuleResource_acquisition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1331);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1329);
      local_variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1330);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declarationContext ------------------------------------------------------------------

MyParserParser::Namespace_declarationContext::Namespace_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Namespace_declarationContext::NAMESPACE() {
  return getToken(MyParserParser::NAMESPACE, 0);
}

MyParserParser::Namespace_bodyContext* MyParserParser::Namespace_declarationContext::namespace_body() {
  return getRuleContext<MyParserParser::Namespace_bodyContext>(0);
}

MyParserParser::Qualified_identifierContext* MyParserParser::Namespace_declarationContext::qualified_identifier() {
  return getRuleContext<MyParserParser::Qualified_identifierContext>(0);
}


size_t MyParserParser::Namespace_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleNamespace_declaration;
}

void MyParserParser::Namespace_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_declaration(this);
}

void MyParserParser::Namespace_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_declaration(this);
}

MyParserParser::Namespace_declarationContext* MyParserParser::namespace_declaration() {
  Namespace_declarationContext *_localctx = _tracker.createInstance<Namespace_declarationContext>(_ctx, getState());
  enterRule(_localctx, 172, MyParserParser::RuleNamespace_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1333);
    match(MyParserParser::NAMESPACE);
    setState(1334);
    dynamic_cast<Namespace_declarationContext *>(_localctx)->qi = qualified_identifier();
    setState(1335);
    namespace_body();
    setState(1337);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      setState(1336);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qualified_identifierContext ------------------------------------------------------------------

MyParserParser::Qualified_identifierContext::Qualified_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Qualified_identifierContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Qualified_identifierContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}


size_t MyParserParser::Qualified_identifierContext::getRuleIndex() const {
  return MyParserParser::RuleQualified_identifier;
}

void MyParserParser::Qualified_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualified_identifier(this);
}

void MyParserParser::Qualified_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualified_identifier(this);
}

MyParserParser::Qualified_identifierContext* MyParserParser::qualified_identifier() {
  Qualified_identifierContext *_localctx = _tracker.createInstance<Qualified_identifierContext>(_ctx, getState());
  enterRule(_localctx, 174, MyParserParser::RuleQualified_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1339);
    identifier();
    setState(1344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__0) {
      setState(1340);
      match(MyParserParser::T__0);
      setState(1341);
      identifier();
      setState(1346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_bodyContext ------------------------------------------------------------------

MyParserParser::Namespace_bodyContext::Namespace_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Namespace_bodyContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Namespace_bodyContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Extern_alias_directivesContext* MyParserParser::Namespace_bodyContext::extern_alias_directives() {
  return getRuleContext<MyParserParser::Extern_alias_directivesContext>(0);
}

MyParserParser::Using_directivesContext* MyParserParser::Namespace_bodyContext::using_directives() {
  return getRuleContext<MyParserParser::Using_directivesContext>(0);
}

MyParserParser::Namespace_member_declarationsContext* MyParserParser::Namespace_bodyContext::namespace_member_declarations() {
  return getRuleContext<MyParserParser::Namespace_member_declarationsContext>(0);
}


size_t MyParserParser::Namespace_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleNamespace_body;
}

void MyParserParser::Namespace_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_body(this);
}

void MyParserParser::Namespace_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_body(this);
}

MyParserParser::Namespace_bodyContext* MyParserParser::namespace_body() {
  Namespace_bodyContext *_localctx = _tracker.createInstance<Namespace_bodyContext>(_ctx, getState());
  enterRule(_localctx, 176, MyParserParser::RuleNamespace_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1347);
    match(MyParserParser::OPEN_BRACE);
    setState(1349);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      setState(1348);
      extern_alias_directives();
      break;
    }

    }
    setState(1352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::USING) {
      setState(1351);
      using_directives();
    }
    setState(1355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (MyParserParser::NAMESPACE - 64))
      | (1ULL << (MyParserParser::NEW - 64))
      | (1ULL << (MyParserParser::OVERRIDE - 64))
      | (1ULL << (MyParserParser::PARTIAL - 64))
      | (1ULL << (MyParserParser::PRIVATE - 64))
      | (1ULL << (MyParserParser::PROTECTED - 64))
      | (1ULL << (MyParserParser::PUBLIC - 64))
      | (1ULL << (MyParserParser::READONLY - 64))
      | (1ULL << (MyParserParser::SEALED - 64))
      | (1ULL << (MyParserParser::STATIC - 64))
      | (1ULL << (MyParserParser::STRUCT - 64))
      | (1ULL << (MyParserParser::UNSAFE - 64))
      | (1ULL << (MyParserParser::VIRTUAL - 64))
      | (1ULL << (MyParserParser::VOLATILE - 64)))) != 0)) {
      setState(1354);
      namespace_member_declarations();
    }
    setState(1357);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extern_alias_directivesContext ------------------------------------------------------------------

MyParserParser::Extern_alias_directivesContext::Extern_alias_directivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Extern_alias_directiveContext *> MyParserParser::Extern_alias_directivesContext::extern_alias_directive() {
  return getRuleContexts<MyParserParser::Extern_alias_directiveContext>();
}

MyParserParser::Extern_alias_directiveContext* MyParserParser::Extern_alias_directivesContext::extern_alias_directive(size_t i) {
  return getRuleContext<MyParserParser::Extern_alias_directiveContext>(i);
}


size_t MyParserParser::Extern_alias_directivesContext::getRuleIndex() const {
  return MyParserParser::RuleExtern_alias_directives;
}

void MyParserParser::Extern_alias_directivesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtern_alias_directives(this);
}

void MyParserParser::Extern_alias_directivesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtern_alias_directives(this);
}

MyParserParser::Extern_alias_directivesContext* MyParserParser::extern_alias_directives() {
  Extern_alias_directivesContext *_localctx = _tracker.createInstance<Extern_alias_directivesContext>(_ctx, getState());
  enterRule(_localctx, 178, MyParserParser::RuleExtern_alias_directives);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1360); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1359);
              extern_alias_directive();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1362); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extern_alias_directiveContext ------------------------------------------------------------------

MyParserParser::Extern_alias_directiveContext::Extern_alias_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Extern_alias_directiveContext::EXTERN() {
  return getToken(MyParserParser::EXTERN, 0);
}

tree::TerminalNode* MyParserParser::Extern_alias_directiveContext::ALIAS() {
  return getToken(MyParserParser::ALIAS, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Extern_alias_directiveContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Extern_alias_directiveContext::getRuleIndex() const {
  return MyParserParser::RuleExtern_alias_directive;
}

void MyParserParser::Extern_alias_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtern_alias_directive(this);
}

void MyParserParser::Extern_alias_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtern_alias_directive(this);
}

MyParserParser::Extern_alias_directiveContext* MyParserParser::extern_alias_directive() {
  Extern_alias_directiveContext *_localctx = _tracker.createInstance<Extern_alias_directiveContext>(_ctx, getState());
  enterRule(_localctx, 180, MyParserParser::RuleExtern_alias_directive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1364);
    match(MyParserParser::EXTERN);
    setState(1365);
    match(MyParserParser::T__9);
    setState(1366);
    identifier();
    setState(1367);
    match(MyParserParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_directivesContext ------------------------------------------------------------------

MyParserParser::Using_directivesContext::Using_directivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Using_directiveContext *> MyParserParser::Using_directivesContext::using_directive() {
  return getRuleContexts<MyParserParser::Using_directiveContext>();
}

MyParserParser::Using_directiveContext* MyParserParser::Using_directivesContext::using_directive(size_t i) {
  return getRuleContext<MyParserParser::Using_directiveContext>(i);
}


size_t MyParserParser::Using_directivesContext::getRuleIndex() const {
  return MyParserParser::RuleUsing_directives;
}

void MyParserParser::Using_directivesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsing_directives(this);
}

void MyParserParser::Using_directivesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsing_directives(this);
}

MyParserParser::Using_directivesContext* MyParserParser::using_directives() {
  Using_directivesContext *_localctx = _tracker.createInstance<Using_directivesContext>(_ctx, getState());
  enterRule(_localctx, 182, MyParserParser::RuleUsing_directives);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1370); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1369);
      using_directive();
      setState(1372); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyParserParser::USING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_directiveContext ------------------------------------------------------------------

MyParserParser::Using_directiveContext::Using_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Using_directiveContext::getRuleIndex() const {
  return MyParserParser::RuleUsing_directive;
}

void MyParserParser::Using_directiveContext::copyFrom(Using_directiveContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UsingAliasDirectiveContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UsingAliasDirectiveContext::USING() {
  return getToken(MyParserParser::USING, 0);
}

MyParserParser::IdentifierContext* MyParserParser::UsingAliasDirectiveContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::UsingAliasDirectiveContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

MyParserParser::UsingAliasDirectiveContext::UsingAliasDirectiveContext(Using_directiveContext *ctx) { copyFrom(ctx); }

void MyParserParser::UsingAliasDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingAliasDirective(this);
}
void MyParserParser::UsingAliasDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingAliasDirective(this);
}
//----------------- UsingNamespaceDirectiveContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UsingNamespaceDirectiveContext::USING() {
  return getToken(MyParserParser::USING, 0);
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::UsingNamespaceDirectiveContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

MyParserParser::UsingNamespaceDirectiveContext::UsingNamespaceDirectiveContext(Using_directiveContext *ctx) { copyFrom(ctx); }

void MyParserParser::UsingNamespaceDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingNamespaceDirective(this);
}
void MyParserParser::UsingNamespaceDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingNamespaceDirective(this);
}
//----------------- UsingStaticDirectiveContext ------------------------------------------------------------------

tree::TerminalNode* MyParserParser::UsingStaticDirectiveContext::USING() {
  return getToken(MyParserParser::USING, 0);
}

tree::TerminalNode* MyParserParser::UsingStaticDirectiveContext::STATIC() {
  return getToken(MyParserParser::STATIC, 0);
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::UsingStaticDirectiveContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

MyParserParser::UsingStaticDirectiveContext::UsingStaticDirectiveContext(Using_directiveContext *ctx) { copyFrom(ctx); }

void MyParserParser::UsingStaticDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingStaticDirective(this);
}
void MyParserParser::UsingStaticDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingStaticDirective(this);
}
MyParserParser::Using_directiveContext* MyParserParser::using_directive() {
  Using_directiveContext *_localctx = _tracker.createInstance<Using_directiveContext>(_ctx, getState());
  enterRule(_localctx, 184, MyParserParser::RuleUsing_directive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Using_directiveContext *>(_tracker.createInstance<MyParserParser::UsingAliasDirectiveContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1374);
      match(MyParserParser::USING);
      setState(1375);
      identifier();
      setState(1376);
      match(MyParserParser::T__7);
      setState(1377);
      namespace_or_type_name();
      setState(1378);
      match(MyParserParser::T__35);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Using_directiveContext *>(_tracker.createInstance<MyParserParser::UsingNamespaceDirectiveContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1380);
      match(MyParserParser::USING);
      setState(1381);
      namespace_or_type_name();
      setState(1382);
      match(MyParserParser::T__35);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Using_directiveContext *>(_tracker.createInstance<MyParserParser::UsingStaticDirectiveContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1384);
      match(MyParserParser::USING);
      setState(1385);
      match(MyParserParser::STATIC);
      setState(1386);
      namespace_or_type_name();
      setState(1387);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_member_declarationsContext ------------------------------------------------------------------

MyParserParser::Namespace_member_declarationsContext::Namespace_member_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Namespace_member_declarationContext *> MyParserParser::Namespace_member_declarationsContext::namespace_member_declaration() {
  return getRuleContexts<MyParserParser::Namespace_member_declarationContext>();
}

MyParserParser::Namespace_member_declarationContext* MyParserParser::Namespace_member_declarationsContext::namespace_member_declaration(size_t i) {
  return getRuleContext<MyParserParser::Namespace_member_declarationContext>(i);
}


size_t MyParserParser::Namespace_member_declarationsContext::getRuleIndex() const {
  return MyParserParser::RuleNamespace_member_declarations;
}

void MyParserParser::Namespace_member_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_member_declarations(this);
}

void MyParserParser::Namespace_member_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_member_declarations(this);
}

MyParserParser::Namespace_member_declarationsContext* MyParserParser::namespace_member_declarations() {
  Namespace_member_declarationsContext *_localctx = _tracker.createInstance<Namespace_member_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 186, MyParserParser::RuleNamespace_member_declarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1392); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1391);
      namespace_member_declaration();
      setState(1394); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (MyParserParser::NAMESPACE - 64))
      | (1ULL << (MyParserParser::NEW - 64))
      | (1ULL << (MyParserParser::OVERRIDE - 64))
      | (1ULL << (MyParserParser::PARTIAL - 64))
      | (1ULL << (MyParserParser::PRIVATE - 64))
      | (1ULL << (MyParserParser::PROTECTED - 64))
      | (1ULL << (MyParserParser::PUBLIC - 64))
      | (1ULL << (MyParserParser::READONLY - 64))
      | (1ULL << (MyParserParser::SEALED - 64))
      | (1ULL << (MyParserParser::STATIC - 64))
      | (1ULL << (MyParserParser::STRUCT - 64))
      | (1ULL << (MyParserParser::UNSAFE - 64))
      | (1ULL << (MyParserParser::VIRTUAL - 64))
      | (1ULL << (MyParserParser::VOLATILE - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_member_declarationContext ------------------------------------------------------------------

MyParserParser::Namespace_member_declarationContext::Namespace_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Namespace_declarationContext* MyParserParser::Namespace_member_declarationContext::namespace_declaration() {
  return getRuleContext<MyParserParser::Namespace_declarationContext>(0);
}

MyParserParser::Type_declarationContext* MyParserParser::Namespace_member_declarationContext::type_declaration() {
  return getRuleContext<MyParserParser::Type_declarationContext>(0);
}


size_t MyParserParser::Namespace_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleNamespace_member_declaration;
}

void MyParserParser::Namespace_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_member_declaration(this);
}

void MyParserParser::Namespace_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_member_declaration(this);
}

MyParserParser::Namespace_member_declarationContext* MyParserParser::namespace_member_declaration() {
  Namespace_member_declarationContext *_localctx = _tracker.createInstance<Namespace_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 188, MyParserParser::RuleNamespace_member_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::NAMESPACE: {
        enterOuterAlt(_localctx, 1);
        setState(1396);
        namespace_declaration();
        break;
      }

      case MyParserParser::T__7:
      case MyParserParser::T__13:
      case MyParserParser::T__24:
      case MyParserParser::T__29:
      case MyParserParser::T__32:
      case MyParserParser::T__35:
      case MyParserParser::EXTERN:
      case MyParserParser::INTERFACE:
      case MyParserParser::INTERNAL:
      case MyParserParser::NEW:
      case MyParserParser::OVERRIDE:
      case MyParserParser::PARTIAL:
      case MyParserParser::PRIVATE:
      case MyParserParser::PROTECTED:
      case MyParserParser::PUBLIC:
      case MyParserParser::READONLY:
      case MyParserParser::SEALED:
      case MyParserParser::STATIC:
      case MyParserParser::STRUCT:
      case MyParserParser::UNSAFE:
      case MyParserParser::VIRTUAL:
      case MyParserParser::VOLATILE: {
        enterOuterAlt(_localctx, 2);
        setState(1397);
        type_declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declarationContext ------------------------------------------------------------------

MyParserParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Class_definitionContext* MyParserParser::Type_declarationContext::class_definition() {
  return getRuleContext<MyParserParser::Class_definitionContext>(0);
}

MyParserParser::Struct_definitionContext* MyParserParser::Type_declarationContext::struct_definition() {
  return getRuleContext<MyParserParser::Struct_definitionContext>(0);
}

MyParserParser::Interface_definitionContext* MyParserParser::Type_declarationContext::interface_definition() {
  return getRuleContext<MyParserParser::Interface_definitionContext>(0);
}

MyParserParser::Enum_definitionContext* MyParserParser::Type_declarationContext::enum_definition() {
  return getRuleContext<MyParserParser::Enum_definitionContext>(0);
}

MyParserParser::Delegate_definitionContext* MyParserParser::Type_declarationContext::delegate_definition() {
  return getRuleContext<MyParserParser::Delegate_definitionContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Type_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::All_member_modifiersContext* MyParserParser::Type_declarationContext::all_member_modifiers() {
  return getRuleContext<MyParserParser::All_member_modifiersContext>(0);
}


size_t MyParserParser::Type_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleType_declaration;
}

void MyParserParser::Type_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_declaration(this);
}

void MyParserParser::Type_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_declaration(this);
}

MyParserParser::Type_declarationContext* MyParserParser::type_declaration() {
  Type_declarationContext *_localctx = _tracker.createInstance<Type_declarationContext>(_ctx, getState());
  enterRule(_localctx, 190, MyParserParser::RuleType_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1400);
      attributes();
    }
    setState(1404);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::INTERNAL))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OVERRIDE - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::PRIVATE - 65))
      | (1ULL << (MyParserParser::PROTECTED - 65))
      | (1ULL << (MyParserParser::PUBLIC - 65))
      | (1ULL << (MyParserParser::READONLY - 65))
      | (1ULL << (MyParserParser::SEALED - 65))
      | (1ULL << (MyParserParser::STATIC - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::VIRTUAL - 65))
      | (1ULL << (MyParserParser::VOLATILE - 65)))) != 0)) {
      setState(1403);
      all_member_modifiers();
    }
    setState(1411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__24: {
        setState(1406);
        class_definition();
        break;
      }

      case MyParserParser::STRUCT: {
        setState(1407);
        struct_definition();
        break;
      }

      case MyParserParser::INTERFACE: {
        setState(1408);
        interface_definition();
        break;
      }

      case MyParserParser::T__35: {
        setState(1409);
        enum_definition();
        break;
      }

      case MyParserParser::T__29: {
        setState(1410);
        delegate_definition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qualified_alias_memberContext ------------------------------------------------------------------

MyParserParser::Qualified_alias_memberContext::Qualified_alias_memberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Qualified_alias_memberContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Qualified_alias_memberContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

MyParserParser::Type_argument_listContext* MyParserParser::Qualified_alias_memberContext::type_argument_list() {
  return getRuleContext<MyParserParser::Type_argument_listContext>(0);
}


size_t MyParserParser::Qualified_alias_memberContext::getRuleIndex() const {
  return MyParserParser::RuleQualified_alias_member;
}

void MyParserParser::Qualified_alias_memberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualified_alias_member(this);
}

void MyParserParser::Qualified_alias_memberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualified_alias_member(this);
}

MyParserParser::Qualified_alias_memberContext* MyParserParser::qualified_alias_member() {
  Qualified_alias_memberContext *_localctx = _tracker.createInstance<Qualified_alias_memberContext>(_ctx, getState());
  enterRule(_localctx, 192, MyParserParser::RuleQualified_alias_member);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1413);
    identifier();
    setState(1414);
    match(MyParserParser::T__34);
    setState(1415);
    identifier();
    setState(1417);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1416);
      type_argument_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_listContext ------------------------------------------------------------------

MyParserParser::Type_parameter_listContext::Type_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Type_parameterContext *> MyParserParser::Type_parameter_listContext::type_parameter() {
  return getRuleContexts<MyParserParser::Type_parameterContext>();
}

MyParserParser::Type_parameterContext* MyParserParser::Type_parameter_listContext::type_parameter(size_t i) {
  return getRuleContext<MyParserParser::Type_parameterContext>(i);
}


size_t MyParserParser::Type_parameter_listContext::getRuleIndex() const {
  return MyParserParser::RuleType_parameter_list;
}

void MyParserParser::Type_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_list(this);
}

void MyParserParser::Type_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_list(this);
}

MyParserParser::Type_parameter_listContext* MyParserParser::type_parameter_list() {
  Type_parameter_listContext *_localctx = _tracker.createInstance<Type_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 194, MyParserParser::RuleType_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1419);
    match(MyParserParser::T__3);
    setState(1420);
    type_parameter();
    setState(1425);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1421);
      match(MyParserParser::T__4);
      setState(1422);
      type_parameter();
      setState(1427);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1428);
    match(MyParserParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameterContext ------------------------------------------------------------------

MyParserParser::Type_parameterContext::Type_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Type_parameterContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Type_parameterContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}


size_t MyParserParser::Type_parameterContext::getRuleIndex() const {
  return MyParserParser::RuleType_parameter;
}

void MyParserParser::Type_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter(this);
}

void MyParserParser::Type_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter(this);
}

MyParserParser::Type_parameterContext* MyParserParser::type_parameter() {
  Type_parameterContext *_localctx = _tracker.createInstance<Type_parameterContext>(_ctx, getState());
  enterRule(_localctx, 196, MyParserParser::RuleType_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1430);
      attributes();
    }
    setState(1433);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_baseContext ------------------------------------------------------------------

MyParserParser::Class_baseContext::Class_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Class_typeContext* MyParserParser::Class_baseContext::class_type() {
  return getRuleContext<MyParserParser::Class_typeContext>(0);
}

std::vector<MyParserParser::Namespace_or_type_nameContext *> MyParserParser::Class_baseContext::namespace_or_type_name() {
  return getRuleContexts<MyParserParser::Namespace_or_type_nameContext>();
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Class_baseContext::namespace_or_type_name(size_t i) {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(i);
}


size_t MyParserParser::Class_baseContext::getRuleIndex() const {
  return MyParserParser::RuleClass_base;
}

void MyParserParser::Class_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_base(this);
}

void MyParserParser::Class_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_base(this);
}

MyParserParser::Class_baseContext* MyParserParser::class_base() {
  Class_baseContext *_localctx = _tracker.createInstance<Class_baseContext>(_ctx, getState());
  enterRule(_localctx, 198, MyParserParser::RuleClass_base);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1435);
    match(MyParserParser::T__6);
    setState(1436);
    class_type();
    setState(1441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1437);
      match(MyParserParser::T__4);
      setState(1438);
      namespace_or_type_name();
      setState(1443);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_type_listContext ------------------------------------------------------------------

MyParserParser::Interface_type_listContext::Interface_type_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Namespace_or_type_nameContext *> MyParserParser::Interface_type_listContext::namespace_or_type_name() {
  return getRuleContexts<MyParserParser::Namespace_or_type_nameContext>();
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Interface_type_listContext::namespace_or_type_name(size_t i) {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(i);
}


size_t MyParserParser::Interface_type_listContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_type_list;
}

void MyParserParser::Interface_type_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_type_list(this);
}

void MyParserParser::Interface_type_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_type_list(this);
}

MyParserParser::Interface_type_listContext* MyParserParser::interface_type_list() {
  Interface_type_listContext *_localctx = _tracker.createInstance<Interface_type_listContext>(_ctx, getState());
  enterRule(_localctx, 200, MyParserParser::RuleInterface_type_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1444);
    namespace_or_type_name();
    setState(1449);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1445);
      match(MyParserParser::T__4);
      setState(1446);
      namespace_or_type_name();
      setState(1451);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraints_clausesContext ------------------------------------------------------------------

MyParserParser::Type_parameter_constraints_clausesContext::Type_parameter_constraints_clausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Type_parameter_constraints_clauseContext *> MyParserParser::Type_parameter_constraints_clausesContext::type_parameter_constraints_clause() {
  return getRuleContexts<MyParserParser::Type_parameter_constraints_clauseContext>();
}

MyParserParser::Type_parameter_constraints_clauseContext* MyParserParser::Type_parameter_constraints_clausesContext::type_parameter_constraints_clause(size_t i) {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clauseContext>(i);
}


size_t MyParserParser::Type_parameter_constraints_clausesContext::getRuleIndex() const {
  return MyParserParser::RuleType_parameter_constraints_clauses;
}

void MyParserParser::Type_parameter_constraints_clausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints_clauses(this);
}

void MyParserParser::Type_parameter_constraints_clausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints_clauses(this);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::type_parameter_constraints_clauses() {
  Type_parameter_constraints_clausesContext *_localctx = _tracker.createInstance<Type_parameter_constraints_clausesContext>(_ctx, getState());
  enterRule(_localctx, 202, MyParserParser::RuleType_parameter_constraints_clauses);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1453); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1452);
      type_parameter_constraints_clause();
      setState(1455); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyParserParser::WHERE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraints_clauseContext ------------------------------------------------------------------

MyParserParser::Type_parameter_constraints_clauseContext::Type_parameter_constraints_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Type_parameter_constraints_clauseContext::WHERE() {
  return getToken(MyParserParser::WHERE, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Type_parameter_constraints_clauseContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Type_parameter_constraintsContext* MyParserParser::Type_parameter_constraints_clauseContext::type_parameter_constraints() {
  return getRuleContext<MyParserParser::Type_parameter_constraintsContext>(0);
}


size_t MyParserParser::Type_parameter_constraints_clauseContext::getRuleIndex() const {
  return MyParserParser::RuleType_parameter_constraints_clause;
}

void MyParserParser::Type_parameter_constraints_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints_clause(this);
}

void MyParserParser::Type_parameter_constraints_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints_clause(this);
}

MyParserParser::Type_parameter_constraints_clauseContext* MyParserParser::type_parameter_constraints_clause() {
  Type_parameter_constraints_clauseContext *_localctx = _tracker.createInstance<Type_parameter_constraints_clauseContext>(_ctx, getState());
  enterRule(_localctx, 204, MyParserParser::RuleType_parameter_constraints_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1457);
    match(MyParserParser::WHERE);
    setState(1458);
    identifier();
    setState(1459);
    match(MyParserParser::T__6);
    setState(1460);
    type_parameter_constraints();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraintsContext ------------------------------------------------------------------

MyParserParser::Type_parameter_constraintsContext::Type_parameter_constraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Constructor_constraintContext* MyParserParser::Type_parameter_constraintsContext::constructor_constraint() {
  return getRuleContext<MyParserParser::Constructor_constraintContext>(0);
}

MyParserParser::Primary_constraintContext* MyParserParser::Type_parameter_constraintsContext::primary_constraint() {
  return getRuleContext<MyParserParser::Primary_constraintContext>(0);
}

MyParserParser::Secondary_constraintsContext* MyParserParser::Type_parameter_constraintsContext::secondary_constraints() {
  return getRuleContext<MyParserParser::Secondary_constraintsContext>(0);
}


size_t MyParserParser::Type_parameter_constraintsContext::getRuleIndex() const {
  return MyParserParser::RuleType_parameter_constraints;
}

void MyParserParser::Type_parameter_constraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints(this);
}

void MyParserParser::Type_parameter_constraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints(this);
}

MyParserParser::Type_parameter_constraintsContext* MyParserParser::type_parameter_constraints() {
  Type_parameter_constraintsContext *_localctx = _tracker.createInstance<Type_parameter_constraintsContext>(_ctx, getState());
  enterRule(_localctx, 206, MyParserParser::RuleType_parameter_constraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1472);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(1462);
        constructor_constraint();
        break;
      }

      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__24:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::STRING:
      case MyParserParser::STRUCT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1463);
        primary_constraint();
        setState(1466);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
        case 1: {
          setState(1464);
          match(MyParserParser::T__4);
          setState(1465);
          secondary_constraints();
          break;
        }

        }
        setState(1470);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__4) {
          setState(1468);
          match(MyParserParser::T__4);
          setState(1469);
          constructor_constraint();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_constraintContext ------------------------------------------------------------------

MyParserParser::Primary_constraintContext::Primary_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Class_typeContext* MyParserParser::Primary_constraintContext::class_type() {
  return getRuleContext<MyParserParser::Class_typeContext>(0);
}

tree::TerminalNode* MyParserParser::Primary_constraintContext::CLASS() {
  return getToken(MyParserParser::CLASS, 0);
}

tree::TerminalNode* MyParserParser::Primary_constraintContext::STRUCT() {
  return getToken(MyParserParser::STRUCT, 0);
}


size_t MyParserParser::Primary_constraintContext::getRuleIndex() const {
  return MyParserParser::RulePrimary_constraint;
}

void MyParserParser::Primary_constraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_constraint(this);
}

void MyParserParser::Primary_constraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_constraint(this);
}

MyParserParser::Primary_constraintContext* MyParserParser::primary_constraint() {
  Primary_constraintContext *_localctx = _tracker.createInstance<Primary_constraintContext>(_ctx, getState());
  enterRule(_localctx, 208, MyParserParser::RulePrimary_constraint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1477);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::STRING:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1474);
        class_type();
        break;
      }

      case MyParserParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(1475);
        match(MyParserParser::T__24);
        break;
      }

      case MyParserParser::STRUCT: {
        enterOuterAlt(_localctx, 3);
        setState(1476);
        match(MyParserParser::STRUCT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Secondary_constraintsContext ------------------------------------------------------------------

MyParserParser::Secondary_constraintsContext::Secondary_constraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Namespace_or_type_nameContext *> MyParserParser::Secondary_constraintsContext::namespace_or_type_name() {
  return getRuleContexts<MyParserParser::Namespace_or_type_nameContext>();
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Secondary_constraintsContext::namespace_or_type_name(size_t i) {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(i);
}


size_t MyParserParser::Secondary_constraintsContext::getRuleIndex() const {
  return MyParserParser::RuleSecondary_constraints;
}

void MyParserParser::Secondary_constraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondary_constraints(this);
}

void MyParserParser::Secondary_constraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondary_constraints(this);
}

MyParserParser::Secondary_constraintsContext* MyParserParser::secondary_constraints() {
  Secondary_constraintsContext *_localctx = _tracker.createInstance<Secondary_constraintsContext>(_ctx, getState());
  enterRule(_localctx, 210, MyParserParser::RuleSecondary_constraints);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1479);
    namespace_or_type_name();
    setState(1484);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1480);
        match(MyParserParser::T__4);
        setState(1481);
        namespace_or_type_name(); 
      }
      setState(1486);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_constraintContext ------------------------------------------------------------------

MyParserParser::Constructor_constraintContext::Constructor_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Constructor_constraintContext::NEW() {
  return getToken(MyParserParser::NEW, 0);
}

tree::TerminalNode* MyParserParser::Constructor_constraintContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Constructor_constraintContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}


size_t MyParserParser::Constructor_constraintContext::getRuleIndex() const {
  return MyParserParser::RuleConstructor_constraint;
}

void MyParserParser::Constructor_constraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_constraint(this);
}

void MyParserParser::Constructor_constraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_constraint(this);
}

MyParserParser::Constructor_constraintContext* MyParserParser::constructor_constraint() {
  Constructor_constraintContext *_localctx = _tracker.createInstance<Constructor_constraintContext>(_ctx, getState());
  enterRule(_localctx, 212, MyParserParser::RuleConstructor_constraint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1487);
    match(MyParserParser::NEW);
    setState(1488);
    match(MyParserParser::OPEN_PARENS);
    setState(1489);
    match(MyParserParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_bodyContext ------------------------------------------------------------------

MyParserParser::Class_bodyContext::Class_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Class_bodyContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Class_bodyContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Class_member_declarationsContext* MyParserParser::Class_bodyContext::class_member_declarations() {
  return getRuleContext<MyParserParser::Class_member_declarationsContext>(0);
}


size_t MyParserParser::Class_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleClass_body;
}

void MyParserParser::Class_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_body(this);
}

void MyParserParser::Class_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_body(this);
}

MyParserParser::Class_bodyContext* MyParserParser::class_body() {
  Class_bodyContext *_localctx = _tracker.createInstance<Class_bodyContext>(_ctx, getState());
  enterRule(_localctx, 214, MyParserParser::RuleClass_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1491);
    match(MyParserParser::OPEN_BRACE);
    setState(1493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::EVENT)
      | (1ULL << MyParserParser::EXPLICIT)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::IMPLICIT)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OVERRIDE - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::PRIVATE - 65))
      | (1ULL << (MyParserParser::PROTECTED - 65))
      | (1ULL << (MyParserParser::PUBLIC - 65))
      | (1ULL << (MyParserParser::READONLY - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SEALED - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::STATIC - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::STRUCT - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::VIRTUAL - 65))
      | (1ULL << (MyParserParser::VOID - 65))
      | (1ULL << (MyParserParser::VOLATILE - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65)))) != 0)) {
      setState(1492);
      class_member_declarations();
    }
    setState(1495);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_member_declarationsContext ------------------------------------------------------------------

MyParserParser::Class_member_declarationsContext::Class_member_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Class_member_declarationContext *> MyParserParser::Class_member_declarationsContext::class_member_declaration() {
  return getRuleContexts<MyParserParser::Class_member_declarationContext>();
}

MyParserParser::Class_member_declarationContext* MyParserParser::Class_member_declarationsContext::class_member_declaration(size_t i) {
  return getRuleContext<MyParserParser::Class_member_declarationContext>(i);
}


size_t MyParserParser::Class_member_declarationsContext::getRuleIndex() const {
  return MyParserParser::RuleClass_member_declarations;
}

void MyParserParser::Class_member_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_declarations(this);
}

void MyParserParser::Class_member_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_declarations(this);
}

MyParserParser::Class_member_declarationsContext* MyParserParser::class_member_declarations() {
  Class_member_declarationsContext *_localctx = _tracker.createInstance<Class_member_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 216, MyParserParser::RuleClass_member_declarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1498); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1497);
      class_member_declaration();
      setState(1500); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::EVENT)
      | (1ULL << MyParserParser::EXPLICIT)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::IMPLICIT)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OVERRIDE - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::PRIVATE - 65))
      | (1ULL << (MyParserParser::PROTECTED - 65))
      | (1ULL << (MyParserParser::PUBLIC - 65))
      | (1ULL << (MyParserParser::READONLY - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SEALED - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::STATIC - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::STRUCT - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::VIRTUAL - 65))
      | (1ULL << (MyParserParser::VOID - 65))
      | (1ULL << (MyParserParser::VOLATILE - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_member_declarationContext ------------------------------------------------------------------

MyParserParser::Class_member_declarationContext::Class_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Common_member_declarationContext* MyParserParser::Class_member_declarationContext::common_member_declaration() {
  return getRuleContext<MyParserParser::Common_member_declarationContext>(0);
}

MyParserParser::Destructor_definitionContext* MyParserParser::Class_member_declarationContext::destructor_definition() {
  return getRuleContext<MyParserParser::Destructor_definitionContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Class_member_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::All_member_modifiersContext* MyParserParser::Class_member_declarationContext::all_member_modifiers() {
  return getRuleContext<MyParserParser::All_member_modifiersContext>(0);
}


size_t MyParserParser::Class_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleClass_member_declaration;
}

void MyParserParser::Class_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_declaration(this);
}

void MyParserParser::Class_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_declaration(this);
}

MyParserParser::Class_member_declarationContext* MyParserParser::class_member_declaration() {
  Class_member_declarationContext *_localctx = _tracker.createInstance<Class_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 218, MyParserParser::RuleClass_member_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1503);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      setState(1502);
      attributes();
      break;
    }

    }
    setState(1506);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      setState(1505);
      all_member_modifiers();
      break;
    }

    }
    setState(1510);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::T__35:
      case MyParserParser::EQUALS:
      case MyParserParser::EVENT:
      case MyParserParser::EXPLICIT:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::IMPLICIT:
      case MyParserParser::INT:
      case MyParserParser::INTERFACE:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::STRING:
      case MyParserParser::STRUCT:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT:
      case MyParserParser::VOID:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        setState(1508);
        common_member_declaration();
        break;
      }

      case MyParserParser::T__28: {
        setState(1509);
        destructor_definition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_member_modifiersContext ------------------------------------------------------------------

MyParserParser::All_member_modifiersContext::All_member_modifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::All_member_modifierContext *> MyParserParser::All_member_modifiersContext::all_member_modifier() {
  return getRuleContexts<MyParserParser::All_member_modifierContext>();
}

MyParserParser::All_member_modifierContext* MyParserParser::All_member_modifiersContext::all_member_modifier(size_t i) {
  return getRuleContext<MyParserParser::All_member_modifierContext>(i);
}


size_t MyParserParser::All_member_modifiersContext::getRuleIndex() const {
  return MyParserParser::RuleAll_member_modifiers;
}

void MyParserParser::All_member_modifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_member_modifiers(this);
}

void MyParserParser::All_member_modifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_member_modifiers(this);
}

MyParserParser::All_member_modifiersContext* MyParserParser::all_member_modifiers() {
  All_member_modifiersContext *_localctx = _tracker.createInstance<All_member_modifiersContext>(_ctx, getState());
  enterRule(_localctx, 220, MyParserParser::RuleAll_member_modifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1513); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1512);
              all_member_modifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1515); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_member_modifierContext ------------------------------------------------------------------

MyParserParser::All_member_modifierContext::All_member_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::NEW() {
  return getToken(MyParserParser::NEW, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::PUBLIC() {
  return getToken(MyParserParser::PUBLIC, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::PROTECTED() {
  return getToken(MyParserParser::PROTECTED, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::INTERNAL() {
  return getToken(MyParserParser::INTERNAL, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::PRIVATE() {
  return getToken(MyParserParser::PRIVATE, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::READONLY() {
  return getToken(MyParserParser::READONLY, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::VOLATILE() {
  return getToken(MyParserParser::VOLATILE, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::VIRTUAL() {
  return getToken(MyParserParser::VIRTUAL, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::SEALED() {
  return getToken(MyParserParser::SEALED, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::OVERRIDE() {
  return getToken(MyParserParser::OVERRIDE, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::ABSTRACT() {
  return getToken(MyParserParser::ABSTRACT, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::STATIC() {
  return getToken(MyParserParser::STATIC, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::UNSAFE() {
  return getToken(MyParserParser::UNSAFE, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::EXTERN() {
  return getToken(MyParserParser::EXTERN, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::PARTIAL() {
  return getToken(MyParserParser::PARTIAL, 0);
}

tree::TerminalNode* MyParserParser::All_member_modifierContext::ASYNC() {
  return getToken(MyParserParser::ASYNC, 0);
}


size_t MyParserParser::All_member_modifierContext::getRuleIndex() const {
  return MyParserParser::RuleAll_member_modifier;
}

void MyParserParser::All_member_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_member_modifier(this);
}

void MyParserParser::All_member_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_member_modifier(this);
}

MyParserParser::All_member_modifierContext* MyParserParser::all_member_modifier() {
  All_member_modifierContext *_localctx = _tracker.createInstance<All_member_modifierContext>(_ctx, getState());
  enterRule(_localctx, 222, MyParserParser::RuleAll_member_modifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::INTERNAL))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OVERRIDE - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::PRIVATE - 65))
      | (1ULL << (MyParserParser::PROTECTED - 65))
      | (1ULL << (MyParserParser::PUBLIC - 65))
      | (1ULL << (MyParserParser::READONLY - 65))
      | (1ULL << (MyParserParser::SEALED - 65))
      | (1ULL << (MyParserParser::STATIC - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::VIRTUAL - 65))
      | (1ULL << (MyParserParser::VOLATILE - 65)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Common_member_declarationContext ------------------------------------------------------------------

MyParserParser::Common_member_declarationContext::Common_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Constant_declarationContext* MyParserParser::Common_member_declarationContext::constant_declaration() {
  return getRuleContext<MyParserParser::Constant_declarationContext>(0);
}

MyParserParser::Typed_member_declarationContext* MyParserParser::Common_member_declarationContext::typed_member_declaration() {
  return getRuleContext<MyParserParser::Typed_member_declarationContext>(0);
}

MyParserParser::Event_declarationContext* MyParserParser::Common_member_declarationContext::event_declaration() {
  return getRuleContext<MyParserParser::Event_declarationContext>(0);
}

MyParserParser::Conversion_operator_declaratorContext* MyParserParser::Common_member_declarationContext::conversion_operator_declarator() {
  return getRuleContext<MyParserParser::Conversion_operator_declaratorContext>(0);
}

MyParserParser::BodyContext* MyParserParser::Common_member_declarationContext::body() {
  return getRuleContext<MyParserParser::BodyContext>(0);
}

MyParserParser::Right_arrowContext* MyParserParser::Common_member_declarationContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Common_member_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Constructor_declarationContext* MyParserParser::Common_member_declarationContext::constructor_declaration() {
  return getRuleContext<MyParserParser::Constructor_declarationContext>(0);
}

tree::TerminalNode* MyParserParser::Common_member_declarationContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}

MyParserParser::Method_declarationContext* MyParserParser::Common_member_declarationContext::method_declaration() {
  return getRuleContext<MyParserParser::Method_declarationContext>(0);
}

MyParserParser::Class_definitionContext* MyParserParser::Common_member_declarationContext::class_definition() {
  return getRuleContext<MyParserParser::Class_definitionContext>(0);
}

MyParserParser::Struct_definitionContext* MyParserParser::Common_member_declarationContext::struct_definition() {
  return getRuleContext<MyParserParser::Struct_definitionContext>(0);
}

MyParserParser::Interface_definitionContext* MyParserParser::Common_member_declarationContext::interface_definition() {
  return getRuleContext<MyParserParser::Interface_definitionContext>(0);
}

MyParserParser::Enum_definitionContext* MyParserParser::Common_member_declarationContext::enum_definition() {
  return getRuleContext<MyParserParser::Enum_definitionContext>(0);
}

MyParserParser::Delegate_definitionContext* MyParserParser::Common_member_declarationContext::delegate_definition() {
  return getRuleContext<MyParserParser::Delegate_definitionContext>(0);
}


size_t MyParserParser::Common_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleCommon_member_declaration;
}

void MyParserParser::Common_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommon_member_declaration(this);
}

void MyParserParser::Common_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommon_member_declaration(this);
}

MyParserParser::Common_member_declarationContext* MyParserParser::common_member_declaration() {
  Common_member_declarationContext *_localctx = _tracker.createInstance<Common_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 224, MyParserParser::RuleCommon_member_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1519);
      constant_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1520);
      typed_member_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1521);
      event_declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1522);
      conversion_operator_declarator();
      setState(1528);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyParserParser::T__35:
        case MyParserParser::OPEN_BRACE: {
          setState(1523);
          body();
          break;
        }

        case MyParserParser::T__7: {
          setState(1524);
          right_arrow();
          setState(1525);
          expression();
          setState(1526);
          match(MyParserParser::T__35);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1530);
      constructor_declaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1531);
      match(MyParserParser::VOID);
      setState(1532);
      method_declaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1533);
      class_definition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1534);
      struct_definition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1535);
      interface_definition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1536);
      enum_definition();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1537);
      delegate_definition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Typed_member_declarationContext ------------------------------------------------------------------

MyParserParser::Typed_member_declarationContext::Typed_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Typed_member_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Typed_member_declarationContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

MyParserParser::Indexer_declarationContext* MyParserParser::Typed_member_declarationContext::indexer_declaration() {
  return getRuleContext<MyParserParser::Indexer_declarationContext>(0);
}

MyParserParser::Method_declarationContext* MyParserParser::Typed_member_declarationContext::method_declaration() {
  return getRuleContext<MyParserParser::Method_declarationContext>(0);
}

MyParserParser::Property_declarationContext* MyParserParser::Typed_member_declarationContext::property_declaration() {
  return getRuleContext<MyParserParser::Property_declarationContext>(0);
}

MyParserParser::Operator_declarationContext* MyParserParser::Typed_member_declarationContext::operator_declaration() {
  return getRuleContext<MyParserParser::Operator_declarationContext>(0);
}

MyParserParser::Field_declarationContext* MyParserParser::Typed_member_declarationContext::field_declaration() {
  return getRuleContext<MyParserParser::Field_declarationContext>(0);
}


size_t MyParserParser::Typed_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleTyped_member_declaration;
}

void MyParserParser::Typed_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTyped_member_declaration(this);
}

void MyParserParser::Typed_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTyped_member_declaration(this);
}

MyParserParser::Typed_member_declarationContext* MyParserParser::typed_member_declaration() {
  Typed_member_declarationContext *_localctx = _tracker.createInstance<Typed_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 226, MyParserParser::RuleTyped_member_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1540);
    type();
    setState(1550);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      setState(1541);
      namespace_or_type_name();
      setState(1542);
      match(MyParserParser::T__0);
      setState(1543);
      indexer_declaration();
      break;
    }

    case 2: {
      setState(1545);
      method_declaration();
      break;
    }

    case 3: {
      setState(1546);
      property_declaration();
      break;
    }

    case 4: {
      setState(1547);
      indexer_declaration();
      break;
    }

    case 5: {
      setState(1548);
      operator_declaration();
      break;
    }

    case 6: {
      setState(1549);
      field_declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declaratorsContext ------------------------------------------------------------------

MyParserParser::Constant_declaratorsContext::Constant_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Constant_declaratorContext *> MyParserParser::Constant_declaratorsContext::constant_declarator() {
  return getRuleContexts<MyParserParser::Constant_declaratorContext>();
}

MyParserParser::Constant_declaratorContext* MyParserParser::Constant_declaratorsContext::constant_declarator(size_t i) {
  return getRuleContext<MyParserParser::Constant_declaratorContext>(i);
}


size_t MyParserParser::Constant_declaratorsContext::getRuleIndex() const {
  return MyParserParser::RuleConstant_declarators;
}

void MyParserParser::Constant_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declarators(this);
}

void MyParserParser::Constant_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declarators(this);
}

MyParserParser::Constant_declaratorsContext* MyParserParser::constant_declarators() {
  Constant_declaratorsContext *_localctx = _tracker.createInstance<Constant_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 228, MyParserParser::RuleConstant_declarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1552);
    constant_declarator();
    setState(1557);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1553);
      match(MyParserParser::T__4);
      setState(1554);
      constant_declarator();
      setState(1559);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declaratorContext ------------------------------------------------------------------

MyParserParser::Constant_declaratorContext::Constant_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Constant_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Constant_declaratorContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Constant_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleConstant_declarator;
}

void MyParserParser::Constant_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declarator(this);
}

void MyParserParser::Constant_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declarator(this);
}

MyParserParser::Constant_declaratorContext* MyParserParser::constant_declarator() {
  Constant_declaratorContext *_localctx = _tracker.createInstance<Constant_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 230, MyParserParser::RuleConstant_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1560);
    identifier();
    setState(1561);
    match(MyParserParser::T__7);
    setState(1562);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaratorsContext ------------------------------------------------------------------

MyParserParser::Variable_declaratorsContext::Variable_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Variable_declaratorContext *> MyParserParser::Variable_declaratorsContext::variable_declarator() {
  return getRuleContexts<MyParserParser::Variable_declaratorContext>();
}

MyParserParser::Variable_declaratorContext* MyParserParser::Variable_declaratorsContext::variable_declarator(size_t i) {
  return getRuleContext<MyParserParser::Variable_declaratorContext>(i);
}


size_t MyParserParser::Variable_declaratorsContext::getRuleIndex() const {
  return MyParserParser::RuleVariable_declarators;
}

void MyParserParser::Variable_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declarators(this);
}

void MyParserParser::Variable_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declarators(this);
}

MyParserParser::Variable_declaratorsContext* MyParserParser::variable_declarators() {
  Variable_declaratorsContext *_localctx = _tracker.createInstance<Variable_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 232, MyParserParser::RuleVariable_declarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1564);
    variable_declarator();
    setState(1569);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1565);
      match(MyParserParser::T__4);
      setState(1566);
      variable_declarator();
      setState(1571);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaratorContext ------------------------------------------------------------------

MyParserParser::Variable_declaratorContext::Variable_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Variable_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Variable_initializerContext* MyParserParser::Variable_declaratorContext::variable_initializer() {
  return getRuleContext<MyParserParser::Variable_initializerContext>(0);
}


size_t MyParserParser::Variable_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleVariable_declarator;
}

void MyParserParser::Variable_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declarator(this);
}

void MyParserParser::Variable_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declarator(this);
}

MyParserParser::Variable_declaratorContext* MyParserParser::variable_declarator() {
  Variable_declaratorContext *_localctx = _tracker.createInstance<Variable_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 234, MyParserParser::RuleVariable_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1572);
    identifier();
    setState(1575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__7) {
      setState(1573);
      match(MyParserParser::T__7);
      setState(1574);
      variable_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_initializerContext ------------------------------------------------------------------

MyParserParser::Variable_initializerContext::Variable_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Variable_initializerContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Array_initializerContext* MyParserParser::Variable_initializerContext::array_initializer() {
  return getRuleContext<MyParserParser::Array_initializerContext>(0);
}


size_t MyParserParser::Variable_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleVariable_initializer;
}

void MyParserParser::Variable_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_initializer(this);
}

void MyParserParser::Variable_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_initializer(this);
}

MyParserParser::Variable_initializerContext* MyParserParser::variable_initializer() {
  Variable_initializerContext *_localctx = _tracker.createInstance<Variable_initializerContext>(_ctx, getState());
  enterRule(_localctx, 236, MyParserParser::RuleVariable_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1579);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(1577);
        expression();
        break;
      }

      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1578);
        array_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_typeContext ------------------------------------------------------------------

MyParserParser::Return_typeContext::Return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Return_typeContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::Return_typeContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}


size_t MyParserParser::Return_typeContext::getRuleIndex() const {
  return MyParserParser::RuleReturn_type;
}

void MyParserParser::Return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_type(this);
}

void MyParserParser::Return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_type(this);
}

MyParserParser::Return_typeContext* MyParserParser::return_type() {
  Return_typeContext *_localctx = _tracker.createInstance<Return_typeContext>(_ctx, getState());
  enterRule(_localctx, 238, MyParserParser::RuleReturn_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1583);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1581);
      type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1582);
      match(MyParserParser::VOID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_nameContext ------------------------------------------------------------------

MyParserParser::Member_nameContext::Member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::Member_nameContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}


size_t MyParserParser::Member_nameContext::getRuleIndex() const {
  return MyParserParser::RuleMember_name;
}

void MyParserParser::Member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_name(this);
}

void MyParserParser::Member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_name(this);
}

MyParserParser::Member_nameContext* MyParserParser::member_name() {
  Member_nameContext *_localctx = _tracker.createInstance<Member_nameContext>(_ctx, getState());
  enterRule(_localctx, 240, MyParserParser::RuleMember_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1585);
    namespace_or_type_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_bodyContext ------------------------------------------------------------------

MyParserParser::Method_bodyContext::Method_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::BlockContext* MyParserParser::Method_bodyContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}


size_t MyParserParser::Method_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleMethod_body;
}

void MyParserParser::Method_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_body(this);
}

void MyParserParser::Method_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_body(this);
}

MyParserParser::Method_bodyContext* MyParserParser::method_body() {
  Method_bodyContext *_localctx = _tracker.createInstance<Method_bodyContext>(_ctx, getState());
  enterRule(_localctx, 242, MyParserParser::RuleMethod_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1589);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1587);
        block();
        break;
      }

      case MyParserParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(1588);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Formal_parameter_listContext ------------------------------------------------------------------

MyParserParser::Formal_parameter_listContext::Formal_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Parameter_arrayContext* MyParserParser::Formal_parameter_listContext::parameter_array() {
  return getRuleContext<MyParserParser::Parameter_arrayContext>(0);
}

MyParserParser::Fixed_parametersContext* MyParserParser::Formal_parameter_listContext::fixed_parameters() {
  return getRuleContext<MyParserParser::Fixed_parametersContext>(0);
}


size_t MyParserParser::Formal_parameter_listContext::getRuleIndex() const {
  return MyParserParser::RuleFormal_parameter_list;
}

void MyParserParser::Formal_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormal_parameter_list(this);
}

void MyParserParser::Formal_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormal_parameter_list(this);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::formal_parameter_list() {
  Formal_parameter_listContext *_localctx = _tracker.createInstance<Formal_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 244, MyParserParser::RuleFormal_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1597);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1591);
      parameter_array();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1592);
      fixed_parameters();
      setState(1595);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__4) {
        setState(1593);
        match(MyParserParser::T__4);
        setState(1594);
        parameter_array();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_parametersContext ------------------------------------------------------------------

MyParserParser::Fixed_parametersContext::Fixed_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Fixed_parameterContext *> MyParserParser::Fixed_parametersContext::fixed_parameter() {
  return getRuleContexts<MyParserParser::Fixed_parameterContext>();
}

MyParserParser::Fixed_parameterContext* MyParserParser::Fixed_parametersContext::fixed_parameter(size_t i) {
  return getRuleContext<MyParserParser::Fixed_parameterContext>(i);
}


size_t MyParserParser::Fixed_parametersContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_parameters;
}

void MyParserParser::Fixed_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_parameters(this);
}

void MyParserParser::Fixed_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_parameters(this);
}

MyParserParser::Fixed_parametersContext* MyParserParser::fixed_parameters() {
  Fixed_parametersContext *_localctx = _tracker.createInstance<Fixed_parametersContext>(_ctx, getState());
  enterRule(_localctx, 246, MyParserParser::RuleFixed_parameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1599);
    fixed_parameter();
    setState(1604);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1600);
        match(MyParserParser::T__4);
        setState(1601);
        fixed_parameter(); 
      }
      setState(1606);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_parameterContext ------------------------------------------------------------------

MyParserParser::Fixed_parameterContext::Fixed_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Arg_declarationContext* MyParserParser::Fixed_parameterContext::arg_declaration() {
  return getRuleContext<MyParserParser::Arg_declarationContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Fixed_parameterContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::Parameter_modifierContext* MyParserParser::Fixed_parameterContext::parameter_modifier() {
  return getRuleContext<MyParserParser::Parameter_modifierContext>(0);
}

tree::TerminalNode* MyParserParser::Fixed_parameterContext::ARGLIST() {
  return getToken(MyParserParser::ARGLIST, 0);
}


size_t MyParserParser::Fixed_parameterContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_parameter;
}

void MyParserParser::Fixed_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_parameter(this);
}

void MyParserParser::Fixed_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_parameter(this);
}

MyParserParser::Fixed_parameterContext* MyParserParser::fixed_parameter() {
  Fixed_parameterContext *_localctx = _tracker.createInstance<Fixed_parameterContext>(_ctx, getState());
  enterRule(_localctx, 248, MyParserParser::RuleFixed_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1615);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1608);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
      case 1: {
        setState(1607);
        attributes();
        break;
      }

      }
      setState(1611);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (MyParserParser::OUT - 71))
        | (1ULL << (MyParserParser::REF - 71))
        | (1ULL << (MyParserParser::THIS - 71)))) != 0)) {
        setState(1610);
        parameter_modifier();
      }
      setState(1613);
      arg_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1614);
      match(MyParserParser::T__10);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_modifierContext ------------------------------------------------------------------

MyParserParser::Parameter_modifierContext::Parameter_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Parameter_modifierContext::REF() {
  return getToken(MyParserParser::REF, 0);
}

tree::TerminalNode* MyParserParser::Parameter_modifierContext::OUT() {
  return getToken(MyParserParser::OUT, 0);
}

tree::TerminalNode* MyParserParser::Parameter_modifierContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}


size_t MyParserParser::Parameter_modifierContext::getRuleIndex() const {
  return MyParserParser::RuleParameter_modifier;
}

void MyParserParser::Parameter_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_modifier(this);
}

void MyParserParser::Parameter_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_modifier(this);
}

MyParserParser::Parameter_modifierContext* MyParserParser::parameter_modifier() {
  Parameter_modifierContext *_localctx = _tracker.createInstance<Parameter_modifierContext>(_ctx, getState());
  enterRule(_localctx, 250, MyParserParser::RuleParameter_modifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1617);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (MyParserParser::OUT - 71))
      | (1ULL << (MyParserParser::REF - 71))
      | (1ULL << (MyParserParser::THIS - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_arrayContext ------------------------------------------------------------------

MyParserParser::Parameter_arrayContext::Parameter_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Parameter_arrayContext::PARAMS() {
  return getToken(MyParserParser::PARAMS, 0);
}

MyParserParser::Array_typeContext* MyParserParser::Parameter_arrayContext::array_type() {
  return getRuleContext<MyParserParser::Array_typeContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Parameter_arrayContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Parameter_arrayContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}


size_t MyParserParser::Parameter_arrayContext::getRuleIndex() const {
  return MyParserParser::RuleParameter_array;
}

void MyParserParser::Parameter_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_array(this);
}

void MyParserParser::Parameter_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_array(this);
}

MyParserParser::Parameter_arrayContext* MyParserParser::parameter_array() {
  Parameter_arrayContext *_localctx = _tracker.createInstance<Parameter_arrayContext>(_ctx, getState());
  enterRule(_localctx, 252, MyParserParser::RuleParameter_array);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1620);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1619);
      attributes();
    }
    setState(1622);
    match(MyParserParser::PARAMS);
    setState(1623);
    array_type();
    setState(1624);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_declarationsContext ------------------------------------------------------------------

MyParserParser::Accessor_declarationsContext::Accessor_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Accessor_declarationsContext::GET() {
  return getToken(MyParserParser::GET, 0);
}

MyParserParser::Accessor_bodyContext* MyParserParser::Accessor_declarationsContext::accessor_body() {
  return getRuleContext<MyParserParser::Accessor_bodyContext>(0);
}

tree::TerminalNode* MyParserParser::Accessor_declarationsContext::SET() {
  return getToken(MyParserParser::SET, 0);
}

MyParserParser::AttributesContext* MyParserParser::Accessor_declarationsContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::Accessor_modifierContext* MyParserParser::Accessor_declarationsContext::accessor_modifier() {
  return getRuleContext<MyParserParser::Accessor_modifierContext>(0);
}

MyParserParser::Set_accessor_declarationContext* MyParserParser::Accessor_declarationsContext::set_accessor_declaration() {
  return getRuleContext<MyParserParser::Set_accessor_declarationContext>(0);
}

MyParserParser::Get_accessor_declarationContext* MyParserParser::Accessor_declarationsContext::get_accessor_declaration() {
  return getRuleContext<MyParserParser::Get_accessor_declarationContext>(0);
}


size_t MyParserParser::Accessor_declarationsContext::getRuleIndex() const {
  return MyParserParser::RuleAccessor_declarations;
}

void MyParserParser::Accessor_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_declarations(this);
}

void MyParserParser::Accessor_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_declarations(this);
}

MyParserParser::Accessor_declarationsContext* MyParserParser::accessor_declarations() {
  Accessor_declarationsContext *_localctx = _tracker.createInstance<Accessor_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 254, MyParserParser::RuleAccessor_declarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1626);
      dynamic_cast<Accessor_declarationsContext *>(_localctx)->attrs = attributes();
    }
    setState(1630);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & ((1ULL << (MyParserParser::INTERNAL - 56))
      | (1ULL << (MyParserParser::PRIVATE - 56))
      | (1ULL << (MyParserParser::PROTECTED - 56)))) != 0)) {
      setState(1629);
      dynamic_cast<Accessor_declarationsContext *>(_localctx)->mods = accessor_modifier();
    }
    setState(1642);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::GET: {
        setState(1632);
        match(MyParserParser::GET);
        setState(1633);
        accessor_body();
        setState(1635);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 33) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 33)) & ((1ULL << (MyParserParser::T__32 - 33))
          | (1ULL << (MyParserParser::INTERNAL - 33))
          | (1ULL << (MyParserParser::PRIVATE - 33))
          | (1ULL << (MyParserParser::PROTECTED - 33))
          | (1ULL << (MyParserParser::SET - 33)))) != 0)) {
          setState(1634);
          set_accessor_declaration();
        }
        break;
      }

      case MyParserParser::SET: {
        setState(1637);
        match(MyParserParser::SET);
        setState(1638);
        accessor_body();
        setState(1640);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 33) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 33)) & ((1ULL << (MyParserParser::T__32 - 33))
          | (1ULL << (MyParserParser::GET - 33))
          | (1ULL << (MyParserParser::INTERNAL - 33))
          | (1ULL << (MyParserParser::PRIVATE - 33))
          | (1ULL << (MyParserParser::PROTECTED - 33)))) != 0)) {
          setState(1639);
          get_accessor_declaration();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_accessor_declarationContext ------------------------------------------------------------------

MyParserParser::Get_accessor_declarationContext::Get_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Get_accessor_declarationContext::GET() {
  return getToken(MyParserParser::GET, 0);
}

MyParserParser::Accessor_bodyContext* MyParserParser::Get_accessor_declarationContext::accessor_body() {
  return getRuleContext<MyParserParser::Accessor_bodyContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Get_accessor_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::Accessor_modifierContext* MyParserParser::Get_accessor_declarationContext::accessor_modifier() {
  return getRuleContext<MyParserParser::Accessor_modifierContext>(0);
}


size_t MyParserParser::Get_accessor_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleGet_accessor_declaration;
}

void MyParserParser::Get_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_accessor_declaration(this);
}

void MyParserParser::Get_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_accessor_declaration(this);
}

MyParserParser::Get_accessor_declarationContext* MyParserParser::get_accessor_declaration() {
  Get_accessor_declarationContext *_localctx = _tracker.createInstance<Get_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 256, MyParserParser::RuleGet_accessor_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1645);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1644);
      attributes();
    }
    setState(1648);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & ((1ULL << (MyParserParser::INTERNAL - 56))
      | (1ULL << (MyParserParser::PRIVATE - 56))
      | (1ULL << (MyParserParser::PROTECTED - 56)))) != 0)) {
      setState(1647);
      accessor_modifier();
    }
    setState(1650);
    match(MyParserParser::GET);
    setState(1651);
    accessor_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_accessor_declarationContext ------------------------------------------------------------------

MyParserParser::Set_accessor_declarationContext::Set_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Set_accessor_declarationContext::SET() {
  return getToken(MyParserParser::SET, 0);
}

MyParserParser::Accessor_bodyContext* MyParserParser::Set_accessor_declarationContext::accessor_body() {
  return getRuleContext<MyParserParser::Accessor_bodyContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Set_accessor_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::Accessor_modifierContext* MyParserParser::Set_accessor_declarationContext::accessor_modifier() {
  return getRuleContext<MyParserParser::Accessor_modifierContext>(0);
}


size_t MyParserParser::Set_accessor_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleSet_accessor_declaration;
}

void MyParserParser::Set_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_accessor_declaration(this);
}

void MyParserParser::Set_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_accessor_declaration(this);
}

MyParserParser::Set_accessor_declarationContext* MyParserParser::set_accessor_declaration() {
  Set_accessor_declarationContext *_localctx = _tracker.createInstance<Set_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 258, MyParserParser::RuleSet_accessor_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1654);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1653);
      attributes();
    }
    setState(1657);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & ((1ULL << (MyParserParser::INTERNAL - 56))
      | (1ULL << (MyParserParser::PRIVATE - 56))
      | (1ULL << (MyParserParser::PROTECTED - 56)))) != 0)) {
      setState(1656);
      accessor_modifier();
    }
    setState(1659);
    match(MyParserParser::SET);
    setState(1660);
    accessor_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_modifierContext ------------------------------------------------------------------

MyParserParser::Accessor_modifierContext::Accessor_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Accessor_modifierContext::PROTECTED() {
  return getToken(MyParserParser::PROTECTED, 0);
}

tree::TerminalNode* MyParserParser::Accessor_modifierContext::INTERNAL() {
  return getToken(MyParserParser::INTERNAL, 0);
}

tree::TerminalNode* MyParserParser::Accessor_modifierContext::PRIVATE() {
  return getToken(MyParserParser::PRIVATE, 0);
}


size_t MyParserParser::Accessor_modifierContext::getRuleIndex() const {
  return MyParserParser::RuleAccessor_modifier;
}

void MyParserParser::Accessor_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_modifier(this);
}

void MyParserParser::Accessor_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_modifier(this);
}

MyParserParser::Accessor_modifierContext* MyParserParser::accessor_modifier() {
  Accessor_modifierContext *_localctx = _tracker.createInstance<Accessor_modifierContext>(_ctx, getState());
  enterRule(_localctx, 260, MyParserParser::RuleAccessor_modifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1662);
      match(MyParserParser::PROTECTED);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1663);
      match(MyParserParser::INTERNAL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1664);
      match(MyParserParser::PRIVATE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1665);
      match(MyParserParser::PROTECTED);
      setState(1666);
      match(MyParserParser::INTERNAL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1667);
      match(MyParserParser::INTERNAL);
      setState(1668);
      match(MyParserParser::PROTECTED);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_bodyContext ------------------------------------------------------------------

MyParserParser::Accessor_bodyContext::Accessor_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::BlockContext* MyParserParser::Accessor_bodyContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}


size_t MyParserParser::Accessor_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleAccessor_body;
}

void MyParserParser::Accessor_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_body(this);
}

void MyParserParser::Accessor_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_body(this);
}

MyParserParser::Accessor_bodyContext* MyParserParser::accessor_body() {
  Accessor_bodyContext *_localctx = _tracker.createInstance<Accessor_bodyContext>(_ctx, getState());
  enterRule(_localctx, 262, MyParserParser::RuleAccessor_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1673);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1671);
        block();
        break;
      }

      case MyParserParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(1672);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_accessor_declarationsContext ------------------------------------------------------------------

MyParserParser::Event_accessor_declarationsContext::Event_accessor_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Event_accessor_declarationsContext::ADD() {
  return getToken(MyParserParser::ADD, 0);
}

MyParserParser::BlockContext* MyParserParser::Event_accessor_declarationsContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::Remove_accessor_declarationContext* MyParserParser::Event_accessor_declarationsContext::remove_accessor_declaration() {
  return getRuleContext<MyParserParser::Remove_accessor_declarationContext>(0);
}

tree::TerminalNode* MyParserParser::Event_accessor_declarationsContext::REMOVE() {
  return getToken(MyParserParser::REMOVE, 0);
}

MyParserParser::Add_accessor_declarationContext* MyParserParser::Event_accessor_declarationsContext::add_accessor_declaration() {
  return getRuleContext<MyParserParser::Add_accessor_declarationContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Event_accessor_declarationsContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}


size_t MyParserParser::Event_accessor_declarationsContext::getRuleIndex() const {
  return MyParserParser::RuleEvent_accessor_declarations;
}

void MyParserParser::Event_accessor_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent_accessor_declarations(this);
}

void MyParserParser::Event_accessor_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent_accessor_declarations(this);
}

MyParserParser::Event_accessor_declarationsContext* MyParserParser::event_accessor_declarations() {
  Event_accessor_declarationsContext *_localctx = _tracker.createInstance<Event_accessor_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 264, MyParserParser::RuleEvent_accessor_declarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1676);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1675);
      attributes();
    }
    setState(1686);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8: {
        setState(1678);
        match(MyParserParser::T__8);
        setState(1679);
        block();
        setState(1680);
        remove_accessor_declaration();
        break;
      }

      case MyParserParser::REMOVE: {
        setState(1682);
        match(MyParserParser::REMOVE);
        setState(1683);
        block();
        setState(1684);
        add_accessor_declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_accessor_declarationContext ------------------------------------------------------------------

MyParserParser::Add_accessor_declarationContext::Add_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Add_accessor_declarationContext::ADD() {
  return getToken(MyParserParser::ADD, 0);
}

MyParserParser::BlockContext* MyParserParser::Add_accessor_declarationContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Add_accessor_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}


size_t MyParserParser::Add_accessor_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleAdd_accessor_declaration;
}

void MyParserParser::Add_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_accessor_declaration(this);
}

void MyParserParser::Add_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_accessor_declaration(this);
}

MyParserParser::Add_accessor_declarationContext* MyParserParser::add_accessor_declaration() {
  Add_accessor_declarationContext *_localctx = _tracker.createInstance<Add_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 266, MyParserParser::RuleAdd_accessor_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1689);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1688);
      attributes();
    }
    setState(1691);
    match(MyParserParser::T__8);
    setState(1692);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Remove_accessor_declarationContext ------------------------------------------------------------------

MyParserParser::Remove_accessor_declarationContext::Remove_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Remove_accessor_declarationContext::REMOVE() {
  return getToken(MyParserParser::REMOVE, 0);
}

MyParserParser::BlockContext* MyParserParser::Remove_accessor_declarationContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Remove_accessor_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}


size_t MyParserParser::Remove_accessor_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleRemove_accessor_declaration;
}

void MyParserParser::Remove_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRemove_accessor_declaration(this);
}

void MyParserParser::Remove_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRemove_accessor_declaration(this);
}

MyParserParser::Remove_accessor_declarationContext* MyParserParser::remove_accessor_declaration() {
  Remove_accessor_declarationContext *_localctx = _tracker.createInstance<Remove_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 268, MyParserParser::RuleRemove_accessor_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1695);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1694);
      attributes();
    }
    setState(1697);
    match(MyParserParser::REMOVE);
    setState(1698);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Overloadable_operatorContext ------------------------------------------------------------------

MyParserParser::Overloadable_operatorContext::Overloadable_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Overloadable_operatorContext::BANG() {
  return getToken(MyParserParser::BANG, 0);
}

tree::TerminalNode* MyParserParser::Overloadable_operatorContext::TRUE() {
  return getToken(MyParserParser::TRUE, 0);
}

tree::TerminalNode* MyParserParser::Overloadable_operatorContext::FALSE() {
  return getToken(MyParserParser::FALSE, 0);
}

MyParserParser::Right_shiftContext* MyParserParser::Overloadable_operatorContext::right_shift() {
  return getRuleContext<MyParserParser::Right_shiftContext>(0);
}

tree::TerminalNode* MyParserParser::Overloadable_operatorContext::OP_EQ() {
  return getToken(MyParserParser::OP_EQ, 0);
}

tree::TerminalNode* MyParserParser::Overloadable_operatorContext::OP_NE() {
  return getToken(MyParserParser::OP_NE, 0);
}


size_t MyParserParser::Overloadable_operatorContext::getRuleIndex() const {
  return MyParserParser::RuleOverloadable_operator;
}

void MyParserParser::Overloadable_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOverloadable_operator(this);
}

void MyParserParser::Overloadable_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOverloadable_operator(this);
}

MyParserParser::Overloadable_operatorContext* MyParserParser::overloadable_operator() {
  Overloadable_operatorContext *_localctx = _tracker.createInstance<Overloadable_operatorContext>(_ctx, getState());
  enterRule(_localctx, 270, MyParserParser::RuleOverloadable_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1722);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1700);
      match(MyParserParser::T__24);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1701);
      match(MyParserParser::T__25);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1702);
      match(MyParserParser::BANG);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1703);
      match(MyParserParser::T__28);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1704);
      match(MyParserParser::T__29);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1705);
      match(MyParserParser::T__30);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1706);
      match(MyParserParser::TRUE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1707);
      match(MyParserParser::FALSE);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1708);
      match(MyParserParser::T__2);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1709);
      match(MyParserParser::T__26);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1710);
      match(MyParserParser::T__27);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1711);
      match(MyParserParser::T__20);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1712);
      match(MyParserParser::T__18);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1713);
      match(MyParserParser::T__19);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1714);
      match(MyParserParser::T__23);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1715);
      right_shift();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1716);
      match(MyParserParser::OP_EQ);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1717);
      match(MyParserParser::OP_NE);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1718);
      match(MyParserParser::T__5);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1719);
      match(MyParserParser::T__3);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1720);
      match(MyParserParser::T__22);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1721);
      match(MyParserParser::T__21);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conversion_operator_declaratorContext ------------------------------------------------------------------

MyParserParser::Conversion_operator_declaratorContext::Conversion_operator_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Conversion_operator_declaratorContext::OPERATOR() {
  return getToken(MyParserParser::OPERATOR, 0);
}

MyParserParser::TypeContext* MyParserParser::Conversion_operator_declaratorContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::Conversion_operator_declaratorContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

MyParserParser::Arg_declarationContext* MyParserParser::Conversion_operator_declaratorContext::arg_declaration() {
  return getRuleContext<MyParserParser::Arg_declarationContext>(0);
}

tree::TerminalNode* MyParserParser::Conversion_operator_declaratorContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Conversion_operator_declaratorContext::IMPLICIT() {
  return getToken(MyParserParser::IMPLICIT, 0);
}

tree::TerminalNode* MyParserParser::Conversion_operator_declaratorContext::EXPLICIT() {
  return getToken(MyParserParser::EXPLICIT, 0);
}


size_t MyParserParser::Conversion_operator_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleConversion_operator_declarator;
}

void MyParserParser::Conversion_operator_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversion_operator_declarator(this);
}

void MyParserParser::Conversion_operator_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversion_operator_declarator(this);
}

MyParserParser::Conversion_operator_declaratorContext* MyParserParser::conversion_operator_declarator() {
  Conversion_operator_declaratorContext *_localctx = _tracker.createInstance<Conversion_operator_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 272, MyParserParser::RuleConversion_operator_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1724);
    _la = _input->LA(1);
    if (!(_la == MyParserParser::EXPLICIT

    || _la == MyParserParser::IMPLICIT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1725);
    match(MyParserParser::OPERATOR);
    setState(1726);
    type();
    setState(1727);
    match(MyParserParser::OPEN_PARENS);
    setState(1728);
    arg_declaration();
    setState(1729);
    match(MyParserParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_initializerContext ------------------------------------------------------------------

MyParserParser::Constructor_initializerContext::Constructor_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Constructor_initializerContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Constructor_initializerContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Constructor_initializerContext::BASE() {
  return getToken(MyParserParser::BASE, 0);
}

tree::TerminalNode* MyParserParser::Constructor_initializerContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}

MyParserParser::Argument_listContext* MyParserParser::Constructor_initializerContext::argument_list() {
  return getRuleContext<MyParserParser::Argument_listContext>(0);
}


size_t MyParserParser::Constructor_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleConstructor_initializer;
}

void MyParserParser::Constructor_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_initializer(this);
}

void MyParserParser::Constructor_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_initializer(this);
}

MyParserParser::Constructor_initializerContext* MyParserParser::constructor_initializer() {
  Constructor_initializerContext *_localctx = _tracker.createInstance<Constructor_initializerContext>(_ctx, getState());
  enterRule(_localctx, 274, MyParserParser::RuleConstructor_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1731);
    match(MyParserParser::T__6);
    setState(1732);
    _la = _input->LA(1);
    if (!(_la == MyParserParser::T__15 || _la == MyParserParser::THIS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1733);
    match(MyParserParser::OPEN_PARENS);
    setState(1735);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OUT - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REF - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
      setState(1734);
      argument_list();
    }
    setState(1737);
    match(MyParserParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

MyParserParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::BlockContext* MyParserParser::BodyContext::block() {
  return getRuleContext<MyParserParser::BlockContext>(0);
}


size_t MyParserParser::BodyContext::getRuleIndex() const {
  return MyParserParser::RuleBody;
}

void MyParserParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void MyParserParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}

MyParserParser::BodyContext* MyParserParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 276, MyParserParser::RuleBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1741);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1739);
        block();
        break;
      }

      case MyParserParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(1740);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_interfacesContext ------------------------------------------------------------------

MyParserParser::Struct_interfacesContext::Struct_interfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Interface_type_listContext* MyParserParser::Struct_interfacesContext::interface_type_list() {
  return getRuleContext<MyParserParser::Interface_type_listContext>(0);
}


size_t MyParserParser::Struct_interfacesContext::getRuleIndex() const {
  return MyParserParser::RuleStruct_interfaces;
}

void MyParserParser::Struct_interfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_interfaces(this);
}

void MyParserParser::Struct_interfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_interfaces(this);
}

MyParserParser::Struct_interfacesContext* MyParserParser::struct_interfaces() {
  Struct_interfacesContext *_localctx = _tracker.createInstance<Struct_interfacesContext>(_ctx, getState());
  enterRule(_localctx, 278, MyParserParser::RuleStruct_interfaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1743);
    match(MyParserParser::T__6);
    setState(1744);
    interface_type_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_bodyContext ------------------------------------------------------------------

MyParserParser::Struct_bodyContext::Struct_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Struct_bodyContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Struct_bodyContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

std::vector<MyParserParser::Struct_member_declarationContext *> MyParserParser::Struct_bodyContext::struct_member_declaration() {
  return getRuleContexts<MyParserParser::Struct_member_declarationContext>();
}

MyParserParser::Struct_member_declarationContext* MyParserParser::Struct_bodyContext::struct_member_declaration(size_t i) {
  return getRuleContext<MyParserParser::Struct_member_declarationContext>(i);
}


size_t MyParserParser::Struct_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleStruct_body;
}

void MyParserParser::Struct_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_body(this);
}

void MyParserParser::Struct_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_body(this);
}

MyParserParser::Struct_bodyContext* MyParserParser::struct_body() {
  Struct_bodyContext *_localctx = _tracker.createInstance<Struct_bodyContext>(_ctx, getState());
  enterRule(_localctx, 280, MyParserParser::RuleStruct_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1746);
    match(MyParserParser::OPEN_BRACE);
    setState(1750);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::EVENT)
      | (1ULL << MyParserParser::EXPLICIT)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::FIXED)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::IMPLICIT)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OVERRIDE - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::PRIVATE - 65))
      | (1ULL << (MyParserParser::PROTECTED - 65))
      | (1ULL << (MyParserParser::PUBLIC - 65))
      | (1ULL << (MyParserParser::READONLY - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SEALED - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::STATIC - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::STRUCT - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::VIRTUAL - 65))
      | (1ULL << (MyParserParser::VOID - 65))
      | (1ULL << (MyParserParser::VOLATILE - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65)))) != 0)) {
      setState(1747);
      struct_member_declaration();
      setState(1752);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1753);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_member_declarationContext ------------------------------------------------------------------

MyParserParser::Struct_member_declarationContext::Struct_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Common_member_declarationContext* MyParserParser::Struct_member_declarationContext::common_member_declaration() {
  return getRuleContext<MyParserParser::Common_member_declarationContext>(0);
}

tree::TerminalNode* MyParserParser::Struct_member_declarationContext::FIXED() {
  return getToken(MyParserParser::FIXED, 0);
}

MyParserParser::TypeContext* MyParserParser::Struct_member_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Struct_member_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::All_member_modifiersContext* MyParserParser::Struct_member_declarationContext::all_member_modifiers() {
  return getRuleContext<MyParserParser::All_member_modifiersContext>(0);
}

std::vector<MyParserParser::Fixed_size_buffer_declaratorContext *> MyParserParser::Struct_member_declarationContext::fixed_size_buffer_declarator() {
  return getRuleContexts<MyParserParser::Fixed_size_buffer_declaratorContext>();
}

MyParserParser::Fixed_size_buffer_declaratorContext* MyParserParser::Struct_member_declarationContext::fixed_size_buffer_declarator(size_t i) {
  return getRuleContext<MyParserParser::Fixed_size_buffer_declaratorContext>(i);
}


size_t MyParserParser::Struct_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleStruct_member_declaration;
}

void MyParserParser::Struct_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_member_declaration(this);
}

void MyParserParser::Struct_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_member_declaration(this);
}

MyParserParser::Struct_member_declarationContext* MyParserParser::struct_member_declaration() {
  Struct_member_declarationContext *_localctx = _tracker.createInstance<Struct_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 282, MyParserParser::RuleStruct_member_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      setState(1755);
      attributes();
      break;
    }

    }
    setState(1759);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      setState(1758);
      all_member_modifiers();
      break;
    }

    }
    setState(1771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::T__35:
      case MyParserParser::EQUALS:
      case MyParserParser::EVENT:
      case MyParserParser::EXPLICIT:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::IMPLICIT:
      case MyParserParser::INT:
      case MyParserParser::INTERFACE:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::STRING:
      case MyParserParser::STRUCT:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT:
      case MyParserParser::VOID:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        setState(1761);
        common_member_declaration();
        break;
      }

      case MyParserParser::FIXED: {
        setState(1762);
        match(MyParserParser::FIXED);
        setState(1763);
        type();
        setState(1765); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1764);
          fixed_size_buffer_declarator();
          setState(1767); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
          | (1ULL << MyParserParser::T__9)
          | (1ULL << MyParserParser::T__10)
          | (1ULL << MyParserParser::T__12)
          | (1ULL << MyParserParser::T__13)
          | (1ULL << MyParserParser::T__14)
          | (1ULL << MyParserParser::T__18)
          | (1ULL << MyParserParser::T__30)
          | (1ULL << MyParserParser::T__33)
          | (1ULL << MyParserParser::EQUALS)
          | (1ULL << MyParserParser::FROM)
          | (1ULL << MyParserParser::GET)
          | (1ULL << MyParserParser::GROUP)
          | (1ULL << MyParserParser::INTO)
          | (1ULL << MyParserParser::JOIN)
          | (1ULL << MyParserParser::LET)
          | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 68)) & ((1ULL << (MyParserParser::ON - 68))
          | (1ULL << (MyParserParser::ORDERBY - 68))
          | (1ULL << (MyParserParser::PARTIAL - 68))
          | (1ULL << (MyParserParser::REMOVE - 68))
          | (1ULL << (MyParserParser::SELECT - 68))
          | (1ULL << (MyParserParser::SET - 68))
          | (1ULL << (MyParserParser::WHEN - 68))
          | (1ULL << (MyParserParser::WHERE - 68))
          | (1ULL << (MyParserParser::YIELD - 68))
          | (1ULL << (MyParserParser::IDENTIFIER - 68)))) != 0));
        setState(1769);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

MyParserParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Base_typeContext* MyParserParser::Array_typeContext::base_type() {
  return getRuleContext<MyParserParser::Base_typeContext>(0);
}

std::vector<MyParserParser::Rank_specifierContext *> MyParserParser::Array_typeContext::rank_specifier() {
  return getRuleContexts<MyParserParser::Rank_specifierContext>();
}

MyParserParser::Rank_specifierContext* MyParserParser::Array_typeContext::rank_specifier(size_t i) {
  return getRuleContext<MyParserParser::Rank_specifierContext>(i);
}


size_t MyParserParser::Array_typeContext::getRuleIndex() const {
  return MyParserParser::RuleArray_type;
}

void MyParserParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void MyParserParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}

MyParserParser::Array_typeContext* MyParserParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 284, MyParserParser::RuleArray_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1773);
    base_type();
    setState(1781); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1777);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MyParserParser::T__1

      || _la == MyParserParser::T__2) {
        setState(1774);
        _la = _input->LA(1);
        if (!(_la == MyParserParser::T__1

        || _la == MyParserParser::T__2)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1779);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1780);
      rank_specifier();
      setState(1783); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__1)
      | (1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__32))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rank_specifierContext ------------------------------------------------------------------

MyParserParser::Rank_specifierContext::Rank_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Rank_specifierContext::getRuleIndex() const {
  return MyParserParser::RuleRank_specifier;
}

void MyParserParser::Rank_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRank_specifier(this);
}

void MyParserParser::Rank_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRank_specifier(this);
}

MyParserParser::Rank_specifierContext* MyParserParser::rank_specifier() {
  Rank_specifierContext *_localctx = _tracker.createInstance<Rank_specifierContext>(_ctx, getState());
  enterRule(_localctx, 286, MyParserParser::RuleRank_specifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1785);
    match(MyParserParser::T__32);
    setState(1789);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1786);
      match(MyParserParser::T__4);
      setState(1791);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1792);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_initializerContext ------------------------------------------------------------------

MyParserParser::Array_initializerContext::Array_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Array_initializerContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Array_initializerContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

std::vector<MyParserParser::Variable_initializerContext *> MyParserParser::Array_initializerContext::variable_initializer() {
  return getRuleContexts<MyParserParser::Variable_initializerContext>();
}

MyParserParser::Variable_initializerContext* MyParserParser::Array_initializerContext::variable_initializer(size_t i) {
  return getRuleContext<MyParserParser::Variable_initializerContext>(i);
}


size_t MyParserParser::Array_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleArray_initializer;
}

void MyParserParser::Array_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_initializer(this);
}

void MyParserParser::Array_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_initializer(this);
}

MyParserParser::Array_initializerContext* MyParserParser::array_initializer() {
  Array_initializerContext *_localctx = _tracker.createInstance<Array_initializerContext>(_ctx, getState());
  enterRule(_localctx, 288, MyParserParser::RuleArray_initializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1794);
    match(MyParserParser::OPEN_BRACE);
    setState(1806);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_BRACE - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
      setState(1795);
      variable_initializer();
      setState(1800);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1796);
          match(MyParserParser::T__4);
          setState(1797);
          variable_initializer(); 
        }
        setState(1802);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
      }
      setState(1804);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__4) {
        setState(1803);
        match(MyParserParser::T__4);
      }
    }
    setState(1808);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variant_type_parameter_listContext ------------------------------------------------------------------

MyParserParser::Variant_type_parameter_listContext::Variant_type_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Variant_type_parameterContext *> MyParserParser::Variant_type_parameter_listContext::variant_type_parameter() {
  return getRuleContexts<MyParserParser::Variant_type_parameterContext>();
}

MyParserParser::Variant_type_parameterContext* MyParserParser::Variant_type_parameter_listContext::variant_type_parameter(size_t i) {
  return getRuleContext<MyParserParser::Variant_type_parameterContext>(i);
}


size_t MyParserParser::Variant_type_parameter_listContext::getRuleIndex() const {
  return MyParserParser::RuleVariant_type_parameter_list;
}

void MyParserParser::Variant_type_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant_type_parameter_list(this);
}

void MyParserParser::Variant_type_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant_type_parameter_list(this);
}

MyParserParser::Variant_type_parameter_listContext* MyParserParser::variant_type_parameter_list() {
  Variant_type_parameter_listContext *_localctx = _tracker.createInstance<Variant_type_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 290, MyParserParser::RuleVariant_type_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1810);
    match(MyParserParser::T__3);
    setState(1811);
    variant_type_parameter();
    setState(1816);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(1812);
      match(MyParserParser::T__4);
      setState(1813);
      variant_type_parameter();
      setState(1818);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1819);
    match(MyParserParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variant_type_parameterContext ------------------------------------------------------------------

MyParserParser::Variant_type_parameterContext::Variant_type_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Variant_type_parameterContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Variant_type_parameterContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::Variance_annotationContext* MyParserParser::Variant_type_parameterContext::variance_annotation() {
  return getRuleContext<MyParserParser::Variance_annotationContext>(0);
}


size_t MyParserParser::Variant_type_parameterContext::getRuleIndex() const {
  return MyParserParser::RuleVariant_type_parameter;
}

void MyParserParser::Variant_type_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant_type_parameter(this);
}

void MyParserParser::Variant_type_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant_type_parameter(this);
}

MyParserParser::Variant_type_parameterContext* MyParserParser::variant_type_parameter() {
  Variant_type_parameterContext *_localctx = _tracker.createInstance<Variant_type_parameterContext>(_ctx, getState());
  enterRule(_localctx, 292, MyParserParser::RuleVariant_type_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1822);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1821);
      attributes();
    }
    setState(1825);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::IN

    || _la == MyParserParser::OUT) {
      setState(1824);
      variance_annotation();
    }
    setState(1827);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variance_annotationContext ------------------------------------------------------------------

MyParserParser::Variance_annotationContext::Variance_annotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Variance_annotationContext::IN() {
  return getToken(MyParserParser::IN, 0);
}

tree::TerminalNode* MyParserParser::Variance_annotationContext::OUT() {
  return getToken(MyParserParser::OUT, 0);
}


size_t MyParserParser::Variance_annotationContext::getRuleIndex() const {
  return MyParserParser::RuleVariance_annotation;
}

void MyParserParser::Variance_annotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariance_annotation(this);
}

void MyParserParser::Variance_annotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariance_annotation(this);
}

MyParserParser::Variance_annotationContext* MyParserParser::variance_annotation() {
  Variance_annotationContext *_localctx = _tracker.createInstance<Variance_annotationContext>(_ctx, getState());
  enterRule(_localctx, 294, MyParserParser::RuleVariance_annotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1829);
    _la = _input->LA(1);
    if (!(_la == MyParserParser::IN

    || _la == MyParserParser::OUT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_baseContext ------------------------------------------------------------------

MyParserParser::Interface_baseContext::Interface_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Interface_type_listContext* MyParserParser::Interface_baseContext::interface_type_list() {
  return getRuleContext<MyParserParser::Interface_type_listContext>(0);
}


size_t MyParserParser::Interface_baseContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_base;
}

void MyParserParser::Interface_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_base(this);
}

void MyParserParser::Interface_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_base(this);
}

MyParserParser::Interface_baseContext* MyParserParser::interface_base() {
  Interface_baseContext *_localctx = _tracker.createInstance<Interface_baseContext>(_ctx, getState());
  enterRule(_localctx, 296, MyParserParser::RuleInterface_base);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1831);
    match(MyParserParser::T__6);
    setState(1832);
    interface_type_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_bodyContext ------------------------------------------------------------------

MyParserParser::Interface_bodyContext::Interface_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Interface_bodyContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Interface_bodyContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

std::vector<MyParserParser::Interface_member_declarationContext *> MyParserParser::Interface_bodyContext::interface_member_declaration() {
  return getRuleContexts<MyParserParser::Interface_member_declarationContext>();
}

MyParserParser::Interface_member_declarationContext* MyParserParser::Interface_bodyContext::interface_member_declaration(size_t i) {
  return getRuleContext<MyParserParser::Interface_member_declarationContext>(i);
}


size_t MyParserParser::Interface_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_body;
}

void MyParserParser::Interface_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_body(this);
}

void MyParserParser::Interface_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_body(this);
}

MyParserParser::Interface_bodyContext* MyParserParser::interface_body() {
  Interface_bodyContext *_localctx = _tracker.createInstance<Interface_bodyContext>(_ctx, getState());
  enterRule(_localctx, 298, MyParserParser::RuleInterface_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1834);
    match(MyParserParser::OPEN_BRACE);
    setState(1838);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::EVENT)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNSAFE - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::VOID - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65)))) != 0)) {
      setState(1835);
      interface_member_declaration();
      setState(1840);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1841);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_member_declarationContext ------------------------------------------------------------------

MyParserParser::Interface_member_declarationContext::Interface_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Interface_member_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Interface_member_declarationContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::EVENT() {
  return getToken(MyParserParser::EVENT, 0);
}

MyParserParser::AttributesContext* MyParserParser::Interface_member_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::NEW() {
  return getToken(MyParserParser::NEW, 0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

MyParserParser::Interface_accessorsContext* MyParserParser::Interface_member_declarationContext::interface_accessors() {
  return getRuleContext<MyParserParser::Interface_accessorsContext>(0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::Interface_member_declarationContext::formal_parameter_list() {
  return getRuleContext<MyParserParser::Formal_parameter_listContext>(0);
}

tree::TerminalNode* MyParserParser::Interface_member_declarationContext::UNSAFE() {
  return getToken(MyParserParser::UNSAFE, 0);
}

MyParserParser::Type_parameter_listContext* MyParserParser::Interface_member_declarationContext::type_parameter_list() {
  return getRuleContext<MyParserParser::Type_parameter_listContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Interface_member_declarationContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Interface_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_member_declaration;
}

void MyParserParser::Interface_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_member_declaration(this);
}

void MyParserParser::Interface_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_member_declaration(this);
}

MyParserParser::Interface_member_declarationContext* MyParserParser::interface_member_declaration() {
  Interface_member_declarationContext *_localctx = _tracker.createInstance<Interface_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 300, MyParserParser::RuleInterface_member_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1844);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
    case 1: {
      setState(1843);
      attributes();
      break;
    }

    }
    setState(1847);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::NEW) {
      setState(1846);
      match(MyParserParser::NEW);
    }
    setState(1905);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      setState(1850);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::UNSAFE) {
        setState(1849);
        match(MyParserParser::UNSAFE);
      }
      setState(1852);
      type();
      setState(1880);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx)) {
      case 1: {
        setState(1853);
        identifier();
        setState(1855);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__3) {
          setState(1854);
          type_parameter_list();
        }
        setState(1857);
        match(MyParserParser::OPEN_PARENS);
        setState(1859);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
          | (1ULL << MyParserParser::T__9)
          | (1ULL << MyParserParser::T__10)
          | (1ULL << MyParserParser::T__12)
          | (1ULL << MyParserParser::T__13)
          | (1ULL << MyParserParser::T__14)
          | (1ULL << MyParserParser::T__16)
          | (1ULL << MyParserParser::T__18)
          | (1ULL << MyParserParser::T__19)
          | (1ULL << MyParserParser::T__22)
          | (1ULL << MyParserParser::T__27)
          | (1ULL << MyParserParser::T__30)
          | (1ULL << MyParserParser::T__32)
          | (1ULL << MyParserParser::T__33)
          | (1ULL << MyParserParser::EQUALS)
          | (1ULL << MyParserParser::FLOAT)
          | (1ULL << MyParserParser::FROM)
          | (1ULL << MyParserParser::GET)
          | (1ULL << MyParserParser::GROUP)
          | (1ULL << MyParserParser::INT)
          | (1ULL << MyParserParser::INTO)
          | (1ULL << MyParserParser::JOIN)
          | (1ULL << MyParserParser::LET)
          | (1ULL << MyParserParser::LONG)
          | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
          | (1ULL << (MyParserParser::ON - 67))
          | (1ULL << (MyParserParser::ORDERBY - 67))
          | (1ULL << (MyParserParser::OUT - 67))
          | (1ULL << (MyParserParser::PARAMS - 67))
          | (1ULL << (MyParserParser::PARTIAL - 67))
          | (1ULL << (MyParserParser::REF - 67))
          | (1ULL << (MyParserParser::REMOVE - 67))
          | (1ULL << (MyParserParser::SBYTE - 67))
          | (1ULL << (MyParserParser::SELECT - 67))
          | (1ULL << (MyParserParser::SET - 67))
          | (1ULL << (MyParserParser::SHORT - 67))
          | (1ULL << (MyParserParser::STRING - 67))
          | (1ULL << (MyParserParser::THIS - 67))
          | (1ULL << (MyParserParser::UINT - 67))
          | (1ULL << (MyParserParser::ULONG - 67))
          | (1ULL << (MyParserParser::USHORT - 67))
          | (1ULL << (MyParserParser::VOID - 67))
          | (1ULL << (MyParserParser::WHEN - 67))
          | (1ULL << (MyParserParser::WHERE - 67))
          | (1ULL << (MyParserParser::YIELD - 67))
          | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
          setState(1858);
          formal_parameter_list();
        }
        setState(1861);
        match(MyParserParser::CLOSE_PARENS);
        setState(1863);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::WHERE) {
          setState(1862);
          type_parameter_constraints_clauses();
        }
        setState(1865);
        match(MyParserParser::T__35);
        break;
      }

      case 2: {
        setState(1867);
        identifier();
        setState(1868);
        match(MyParserParser::OPEN_BRACE);
        setState(1869);
        interface_accessors();
        setState(1870);
        match(MyParserParser::CLOSE_BRACE);
        break;
      }

      case 3: {
        setState(1872);
        match(MyParserParser::THIS);
        setState(1873);
        match(MyParserParser::T__32);
        setState(1874);
        formal_parameter_list();
        setState(1875);
        match(MyParserParser::T__33);
        setState(1876);
        match(MyParserParser::OPEN_BRACE);
        setState(1877);
        interface_accessors();
        setState(1878);
        match(MyParserParser::CLOSE_BRACE);
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1883);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::UNSAFE) {
        setState(1882);
        match(MyParserParser::UNSAFE);
      }
      setState(1885);
      match(MyParserParser::VOID);
      setState(1886);
      identifier();
      setState(1888);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__3) {
        setState(1887);
        type_parameter_list();
      }
      setState(1890);
      match(MyParserParser::OPEN_PARENS);
      setState(1892);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
        | (1ULL << (MyParserParser::ON - 67))
        | (1ULL << (MyParserParser::ORDERBY - 67))
        | (1ULL << (MyParserParser::OUT - 67))
        | (1ULL << (MyParserParser::PARAMS - 67))
        | (1ULL << (MyParserParser::PARTIAL - 67))
        | (1ULL << (MyParserParser::REF - 67))
        | (1ULL << (MyParserParser::REMOVE - 67))
        | (1ULL << (MyParserParser::SBYTE - 67))
        | (1ULL << (MyParserParser::SELECT - 67))
        | (1ULL << (MyParserParser::SET - 67))
        | (1ULL << (MyParserParser::SHORT - 67))
        | (1ULL << (MyParserParser::STRING - 67))
        | (1ULL << (MyParserParser::THIS - 67))
        | (1ULL << (MyParserParser::UINT - 67))
        | (1ULL << (MyParserParser::ULONG - 67))
        | (1ULL << (MyParserParser::USHORT - 67))
        | (1ULL << (MyParserParser::VOID - 67))
        | (1ULL << (MyParserParser::WHEN - 67))
        | (1ULL << (MyParserParser::WHERE - 67))
        | (1ULL << (MyParserParser::YIELD - 67))
        | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
        setState(1891);
        formal_parameter_list();
      }
      setState(1894);
      match(MyParserParser::CLOSE_PARENS);
      setState(1896);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::WHERE) {
        setState(1895);
        type_parameter_constraints_clauses();
      }
      setState(1898);
      match(MyParserParser::T__35);
      break;
    }

    case 3: {
      setState(1900);
      match(MyParserParser::EVENT);
      setState(1901);
      type();
      setState(1902);
      identifier();
      setState(1903);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_accessorsContext ------------------------------------------------------------------

MyParserParser::Interface_accessorsContext::Interface_accessorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Interface_accessorsContext::GET() {
  return getToken(MyParserParser::GET, 0);
}

tree::TerminalNode* MyParserParser::Interface_accessorsContext::SET() {
  return getToken(MyParserParser::SET, 0);
}

std::vector<MyParserParser::AttributesContext *> MyParserParser::Interface_accessorsContext::attributes() {
  return getRuleContexts<MyParserParser::AttributesContext>();
}

MyParserParser::AttributesContext* MyParserParser::Interface_accessorsContext::attributes(size_t i) {
  return getRuleContext<MyParserParser::AttributesContext>(i);
}


size_t MyParserParser::Interface_accessorsContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_accessors;
}

void MyParserParser::Interface_accessorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_accessors(this);
}

void MyParserParser::Interface_accessorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_accessors(this);
}

MyParserParser::Interface_accessorsContext* MyParserParser::interface_accessors() {
  Interface_accessorsContext *_localctx = _tracker.createInstance<Interface_accessorsContext>(_ctx, getState());
  enterRule(_localctx, 302, MyParserParser::RuleInterface_accessors);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1908);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1907);
      attributes();
    }
    setState(1928);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::GET: {
        setState(1910);
        match(MyParserParser::GET);
        setState(1911);
        match(MyParserParser::T__35);
        setState(1917);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__32

        || _la == MyParserParser::SET) {
          setState(1913);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MyParserParser::T__32) {
            setState(1912);
            attributes();
          }
          setState(1915);
          match(MyParserParser::SET);
          setState(1916);
          match(MyParserParser::T__35);
        }
        break;
      }

      case MyParserParser::SET: {
        setState(1919);
        match(MyParserParser::SET);
        setState(1920);
        match(MyParserParser::T__35);
        setState(1926);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__32

        || _la == MyParserParser::GET) {
          setState(1922);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MyParserParser::T__32) {
            setState(1921);
            attributes();
          }
          setState(1924);
          match(MyParserParser::GET);
          setState(1925);
          match(MyParserParser::T__35);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_baseContext ------------------------------------------------------------------

MyParserParser::Enum_baseContext::Enum_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Enum_baseContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}


size_t MyParserParser::Enum_baseContext::getRuleIndex() const {
  return MyParserParser::RuleEnum_base;
}

void MyParserParser::Enum_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_base(this);
}

void MyParserParser::Enum_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_base(this);
}

MyParserParser::Enum_baseContext* MyParserParser::enum_base() {
  Enum_baseContext *_localctx = _tracker.createInstance<Enum_baseContext>(_ctx, getState());
  enterRule(_localctx, 304, MyParserParser::RuleEnum_base);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1930);
    match(MyParserParser::T__6);
    setState(1931);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_bodyContext ------------------------------------------------------------------

MyParserParser::Enum_bodyContext::Enum_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Enum_bodyContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

tree::TerminalNode* MyParserParser::Enum_bodyContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

std::vector<MyParserParser::Enum_member_declarationContext *> MyParserParser::Enum_bodyContext::enum_member_declaration() {
  return getRuleContexts<MyParserParser::Enum_member_declarationContext>();
}

MyParserParser::Enum_member_declarationContext* MyParserParser::Enum_bodyContext::enum_member_declaration(size_t i) {
  return getRuleContext<MyParserParser::Enum_member_declarationContext>(i);
}


size_t MyParserParser::Enum_bodyContext::getRuleIndex() const {
  return MyParserParser::RuleEnum_body;
}

void MyParserParser::Enum_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_body(this);
}

void MyParserParser::Enum_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_body(this);
}

MyParserParser::Enum_bodyContext* MyParserParser::enum_body() {
  Enum_bodyContext *_localctx = _tracker.createInstance<Enum_bodyContext>(_ctx, getState());
  enterRule(_localctx, 306, MyParserParser::RuleEnum_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1933);
    match(MyParserParser::OPEN_BRACE);
    setState(1945);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MyParserParser::ON - 68))
      | (1ULL << (MyParserParser::ORDERBY - 68))
      | (1ULL << (MyParserParser::PARTIAL - 68))
      | (1ULL << (MyParserParser::REMOVE - 68))
      | (1ULL << (MyParserParser::SELECT - 68))
      | (1ULL << (MyParserParser::SET - 68))
      | (1ULL << (MyParserParser::WHEN - 68))
      | (1ULL << (MyParserParser::WHERE - 68))
      | (1ULL << (MyParserParser::YIELD - 68))
      | (1ULL << (MyParserParser::IDENTIFIER - 68)))) != 0)) {
      setState(1934);
      enum_member_declaration();
      setState(1939);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1935);
          match(MyParserParser::T__4);
          setState(1936);
          enum_member_declaration(); 
        }
        setState(1941);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx);
      }
      setState(1943);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MyParserParser::T__4) {
        setState(1942);
        match(MyParserParser::T__4);
      }
    }
    setState(1947);
    match(MyParserParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_member_declarationContext ------------------------------------------------------------------

MyParserParser::Enum_member_declarationContext::Enum_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Enum_member_declarationContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::AttributesContext* MyParserParser::Enum_member_declarationContext::attributes() {
  return getRuleContext<MyParserParser::AttributesContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Enum_member_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Enum_member_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleEnum_member_declaration;
}

void MyParserParser::Enum_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_member_declaration(this);
}

void MyParserParser::Enum_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_member_declaration(this);
}

MyParserParser::Enum_member_declarationContext* MyParserParser::enum_member_declaration() {
  Enum_member_declarationContext *_localctx = _tracker.createInstance<Enum_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 308, MyParserParser::RuleEnum_member_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1950);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__32) {
      setState(1949);
      attributes();
    }
    setState(1952);
    identifier();
    setState(1955);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__7) {
      setState(1953);
      match(MyParserParser::T__7);
      setState(1954);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_attribute_sectionContext ------------------------------------------------------------------

MyParserParser::Global_attribute_sectionContext::Global_attribute_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Global_attribute_targetContext* MyParserParser::Global_attribute_sectionContext::global_attribute_target() {
  return getRuleContext<MyParserParser::Global_attribute_targetContext>(0);
}

MyParserParser::Attribute_listContext* MyParserParser::Global_attribute_sectionContext::attribute_list() {
  return getRuleContext<MyParserParser::Attribute_listContext>(0);
}


size_t MyParserParser::Global_attribute_sectionContext::getRuleIndex() const {
  return MyParserParser::RuleGlobal_attribute_section;
}

void MyParserParser::Global_attribute_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_attribute_section(this);
}

void MyParserParser::Global_attribute_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_attribute_section(this);
}

MyParserParser::Global_attribute_sectionContext* MyParserParser::global_attribute_section() {
  Global_attribute_sectionContext *_localctx = _tracker.createInstance<Global_attribute_sectionContext>(_ctx, getState());
  enterRule(_localctx, 310, MyParserParser::RuleGlobal_attribute_section);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1957);
    match(MyParserParser::T__32);
    setState(1958);
    global_attribute_target();
    setState(1959);
    match(MyParserParser::T__6);
    setState(1960);
    attribute_list();
    setState(1962);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__4) {
      setState(1961);
      match(MyParserParser::T__4);
    }
    setState(1964);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_attribute_targetContext ------------------------------------------------------------------

MyParserParser::Global_attribute_targetContext::Global_attribute_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::KeywordContext* MyParserParser::Global_attribute_targetContext::keyword() {
  return getRuleContext<MyParserParser::KeywordContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Global_attribute_targetContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Global_attribute_targetContext::getRuleIndex() const {
  return MyParserParser::RuleGlobal_attribute_target;
}

void MyParserParser::Global_attribute_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_attribute_target(this);
}

void MyParserParser::Global_attribute_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_attribute_target(this);
}

MyParserParser::Global_attribute_targetContext* MyParserParser::global_attribute_target() {
  Global_attribute_targetContext *_localctx = _tracker.createInstance<Global_attribute_targetContext>(_ctx, getState());
  enterRule(_localctx, 312, MyParserParser::RuleGlobal_attribute_target);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1968);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__7:
      case MyParserParser::T__11:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__17:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__21:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__26:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__31:
      case MyParserParser::T__32:
      case MyParserParser::T__34:
      case MyParserParser::T__35:
      case MyParserParser::EVENT:
      case MyParserParser::EXPLICIT:
      case MyParserParser::EXTERN:
      case MyParserParser::FALSE:
      case MyParserParser::FINALLY:
      case MyParserParser::FIXED:
      case MyParserParser::FLOAT:
      case MyParserParser::FOR:
      case MyParserParser::FOREACH:
      case MyParserParser::GOTO:
      case MyParserParser::IF:
      case MyParserParser::IMPLICIT:
      case MyParserParser::IN:
      case MyParserParser::INT:
      case MyParserParser::INTERFACE:
      case MyParserParser::INTERNAL:
      case MyParserParser::IS:
      case MyParserParser::LOCK:
      case MyParserParser::LONG:
      case MyParserParser::NAMESPACE:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::OPERATOR:
      case MyParserParser::OUT:
      case MyParserParser::OVERRIDE:
      case MyParserParser::PARAMS:
      case MyParserParser::PRIVATE:
      case MyParserParser::PROTECTED:
      case MyParserParser::PUBLIC:
      case MyParserParser::READONLY:
      case MyParserParser::REF:
      case MyParserParser::RETURN:
      case MyParserParser::SBYTE:
      case MyParserParser::SEALED:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STACKALLOC:
      case MyParserParser::STATIC:
      case MyParserParser::STRING:
      case MyParserParser::STRUCT:
      case MyParserParser::SWITCH:
      case MyParserParser::THIS:
      case MyParserParser::THROW:
      case MyParserParser::TRUE:
      case MyParserParser::TRY:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::UNSAFE:
      case MyParserParser::USHORT:
      case MyParserParser::USING:
      case MyParserParser::VIRTUAL:
      case MyParserParser::VOID:
      case MyParserParser::VOLATILE:
      case MyParserParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(1966);
        keyword();
        break;
      }

      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1967);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

MyParserParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Attribute_sectionContext *> MyParserParser::AttributesContext::attribute_section() {
  return getRuleContexts<MyParserParser::Attribute_sectionContext>();
}

MyParserParser::Attribute_sectionContext* MyParserParser::AttributesContext::attribute_section(size_t i) {
  return getRuleContext<MyParserParser::Attribute_sectionContext>(i);
}


size_t MyParserParser::AttributesContext::getRuleIndex() const {
  return MyParserParser::RuleAttributes;
}

void MyParserParser::AttributesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributes(this);
}

void MyParserParser::AttributesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributes(this);
}

MyParserParser::AttributesContext* MyParserParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 314, MyParserParser::RuleAttributes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1971); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1970);
              attribute_section();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1973); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 235, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_sectionContext ------------------------------------------------------------------

MyParserParser::Attribute_sectionContext::Attribute_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Attribute_listContext* MyParserParser::Attribute_sectionContext::attribute_list() {
  return getRuleContext<MyParserParser::Attribute_listContext>(0);
}

MyParserParser::Attribute_targetContext* MyParserParser::Attribute_sectionContext::attribute_target() {
  return getRuleContext<MyParserParser::Attribute_targetContext>(0);
}


size_t MyParserParser::Attribute_sectionContext::getRuleIndex() const {
  return MyParserParser::RuleAttribute_section;
}

void MyParserParser::Attribute_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_section(this);
}

void MyParserParser::Attribute_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_section(this);
}

MyParserParser::Attribute_sectionContext* MyParserParser::attribute_section() {
  Attribute_sectionContext *_localctx = _tracker.createInstance<Attribute_sectionContext>(_ctx, getState());
  enterRule(_localctx, 316, MyParserParser::RuleAttribute_section);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1975);
    match(MyParserParser::T__32);
    setState(1979);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 236, _ctx)) {
    case 1: {
      setState(1976);
      attribute_target();
      setState(1977);
      match(MyParserParser::T__6);
      break;
    }

    }
    setState(1981);
    attribute_list();
    setState(1983);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__4) {
      setState(1982);
      match(MyParserParser::T__4);
    }
    setState(1985);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_targetContext ------------------------------------------------------------------

MyParserParser::Attribute_targetContext::Attribute_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::KeywordContext* MyParserParser::Attribute_targetContext::keyword() {
  return getRuleContext<MyParserParser::KeywordContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Attribute_targetContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Attribute_targetContext::getRuleIndex() const {
  return MyParserParser::RuleAttribute_target;
}

void MyParserParser::Attribute_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_target(this);
}

void MyParserParser::Attribute_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_target(this);
}

MyParserParser::Attribute_targetContext* MyParserParser::attribute_target() {
  Attribute_targetContext *_localctx = _tracker.createInstance<Attribute_targetContext>(_ctx, getState());
  enterRule(_localctx, 318, MyParserParser::RuleAttribute_target);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1989);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__7:
      case MyParserParser::T__11:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__17:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__21:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__26:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__31:
      case MyParserParser::T__32:
      case MyParserParser::T__34:
      case MyParserParser::T__35:
      case MyParserParser::EVENT:
      case MyParserParser::EXPLICIT:
      case MyParserParser::EXTERN:
      case MyParserParser::FALSE:
      case MyParserParser::FINALLY:
      case MyParserParser::FIXED:
      case MyParserParser::FLOAT:
      case MyParserParser::FOR:
      case MyParserParser::FOREACH:
      case MyParserParser::GOTO:
      case MyParserParser::IF:
      case MyParserParser::IMPLICIT:
      case MyParserParser::IN:
      case MyParserParser::INT:
      case MyParserParser::INTERFACE:
      case MyParserParser::INTERNAL:
      case MyParserParser::IS:
      case MyParserParser::LOCK:
      case MyParserParser::LONG:
      case MyParserParser::NAMESPACE:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::OPERATOR:
      case MyParserParser::OUT:
      case MyParserParser::OVERRIDE:
      case MyParserParser::PARAMS:
      case MyParserParser::PRIVATE:
      case MyParserParser::PROTECTED:
      case MyParserParser::PUBLIC:
      case MyParserParser::READONLY:
      case MyParserParser::REF:
      case MyParserParser::RETURN:
      case MyParserParser::SBYTE:
      case MyParserParser::SEALED:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STACKALLOC:
      case MyParserParser::STATIC:
      case MyParserParser::STRING:
      case MyParserParser::STRUCT:
      case MyParserParser::SWITCH:
      case MyParserParser::THIS:
      case MyParserParser::THROW:
      case MyParserParser::TRUE:
      case MyParserParser::TRY:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::UNSAFE:
      case MyParserParser::USHORT:
      case MyParserParser::USING:
      case MyParserParser::VIRTUAL:
      case MyParserParser::VOID:
      case MyParserParser::VOLATILE:
      case MyParserParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(1987);
        keyword();
        break;
      }

      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__18:
      case MyParserParser::T__30:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::NAMEOF:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1988);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

MyParserParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::AttributeContext *> MyParserParser::Attribute_listContext::attribute() {
  return getRuleContexts<MyParserParser::AttributeContext>();
}

MyParserParser::AttributeContext* MyParserParser::Attribute_listContext::attribute(size_t i) {
  return getRuleContext<MyParserParser::AttributeContext>(i);
}


size_t MyParserParser::Attribute_listContext::getRuleIndex() const {
  return MyParserParser::RuleAttribute_list;
}

void MyParserParser::Attribute_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_list(this);
}

void MyParserParser::Attribute_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_list(this);
}

MyParserParser::Attribute_listContext* MyParserParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 320, MyParserParser::RuleAttribute_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1991);
    attribute();
    setState(1996);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 239, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1992);
        match(MyParserParser::T__4);
        setState(1993);
        attribute(); 
      }
      setState(1998);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 239, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

MyParserParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Namespace_or_type_nameContext* MyParserParser::AttributeContext::namespace_or_type_name() {
  return getRuleContext<MyParserParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* MyParserParser::AttributeContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::AttributeContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

std::vector<MyParserParser::Attribute_argumentContext *> MyParserParser::AttributeContext::attribute_argument() {
  return getRuleContexts<MyParserParser::Attribute_argumentContext>();
}

MyParserParser::Attribute_argumentContext* MyParserParser::AttributeContext::attribute_argument(size_t i) {
  return getRuleContext<MyParserParser::Attribute_argumentContext>(i);
}


size_t MyParserParser::AttributeContext::getRuleIndex() const {
  return MyParserParser::RuleAttribute;
}

void MyParserParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void MyParserParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

MyParserParser::AttributeContext* MyParserParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 322, MyParserParser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1999);
    namespace_or_type_name();
    setState(2012);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::OPEN_PARENS) {
      setState(2000);
      match(MyParserParser::OPEN_PARENS);
      setState(2009);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
        | (1ULL << MyParserParser::T__8)
        | (1ULL << MyParserParser::T__9)
        | (1ULL << MyParserParser::T__10)
        | (1ULL << MyParserParser::T__12)
        | (1ULL << MyParserParser::T__13)
        | (1ULL << MyParserParser::T__14)
        | (1ULL << MyParserParser::T__15)
        | (1ULL << MyParserParser::T__16)
        | (1ULL << MyParserParser::T__18)
        | (1ULL << MyParserParser::T__19)
        | (1ULL << MyParserParser::T__20)
        | (1ULL << MyParserParser::T__22)
        | (1ULL << MyParserParser::T__23)
        | (1ULL << MyParserParser::T__24)
        | (1ULL << MyParserParser::T__25)
        | (1ULL << MyParserParser::T__27)
        | (1ULL << MyParserParser::T__28)
        | (1ULL << MyParserParser::T__29)
        | (1ULL << MyParserParser::T__30)
        | (1ULL << MyParserParser::T__32)
        | (1ULL << MyParserParser::T__33)
        | (1ULL << MyParserParser::EQUALS)
        | (1ULL << MyParserParser::FALSE)
        | (1ULL << MyParserParser::FLOAT)
        | (1ULL << MyParserParser::FROM)
        | (1ULL << MyParserParser::GET)
        | (1ULL << MyParserParser::GROUP)
        | (1ULL << MyParserParser::INT)
        | (1ULL << MyParserParser::INTO)
        | (1ULL << MyParserParser::JOIN)
        | (1ULL << MyParserParser::LET)
        | (1ULL << MyParserParser::LONG)
        | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
        | (1ULL << (MyParserParser::NULLL - 65))
        | (1ULL << (MyParserParser::OBJECT - 65))
        | (1ULL << (MyParserParser::ON - 65))
        | (1ULL << (MyParserParser::ORDERBY - 65))
        | (1ULL << (MyParserParser::PARTIAL - 65))
        | (1ULL << (MyParserParser::REMOVE - 65))
        | (1ULL << (MyParserParser::SBYTE - 65))
        | (1ULL << (MyParserParser::SELECT - 65))
        | (1ULL << (MyParserParser::SET - 65))
        | (1ULL << (MyParserParser::SHORT - 65))
        | (1ULL << (MyParserParser::SIZEOF - 65))
        | (1ULL << (MyParserParser::STRING - 65))
        | (1ULL << (MyParserParser::THIS - 65))
        | (1ULL << (MyParserParser::TRUE - 65))
        | (1ULL << (MyParserParser::TYPEOF - 65))
        | (1ULL << (MyParserParser::UINT - 65))
        | (1ULL << (MyParserParser::ULONG - 65))
        | (1ULL << (MyParserParser::UNCHECKED - 65))
        | (1ULL << (MyParserParser::USHORT - 65))
        | (1ULL << (MyParserParser::WHEN - 65))
        | (1ULL << (MyParserParser::WHERE - 65))
        | (1ULL << (MyParserParser::YIELD - 65))
        | (1ULL << (MyParserParser::IDENTIFIER - 65))
        | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
        | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
        | (1ULL << (MyParserParser::REAL_LITERAL - 65))
        | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
        | (1ULL << (MyParserParser::REGULAR_STRING - 65))
        | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
        | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
        | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
        setState(2001);
        attribute_argument();
        setState(2006);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MyParserParser::T__4) {
          setState(2002);
          match(MyParserParser::T__4);
          setState(2003);
          attribute_argument();
          setState(2008);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(2011);
      match(MyParserParser::CLOSE_PARENS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_argumentContext ------------------------------------------------------------------

MyParserParser::Attribute_argumentContext::Attribute_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Attribute_argumentContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Attribute_argumentContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}


size_t MyParserParser::Attribute_argumentContext::getRuleIndex() const {
  return MyParserParser::RuleAttribute_argument;
}

void MyParserParser::Attribute_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_argument(this);
}

void MyParserParser::Attribute_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_argument(this);
}

MyParserParser::Attribute_argumentContext* MyParserParser::attribute_argument() {
  Attribute_argumentContext *_localctx = _tracker.createInstance<Attribute_argumentContext>(_ctx, getState());
  enterRule(_localctx, 324, MyParserParser::RuleAttribute_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2017);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      setState(2014);
      identifier();
      setState(2015);
      match(MyParserParser::T__6);
      break;
    }

    }
    setState(2019);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pointer_typeContext ------------------------------------------------------------------

MyParserParser::Pointer_typeContext::Pointer_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Simple_typeContext* MyParserParser::Pointer_typeContext::simple_type() {
  return getRuleContext<MyParserParser::Simple_typeContext>(0);
}

MyParserParser::Class_typeContext* MyParserParser::Pointer_typeContext::class_type() {
  return getRuleContext<MyParserParser::Class_typeContext>(0);
}

std::vector<MyParserParser::Rank_specifierContext *> MyParserParser::Pointer_typeContext::rank_specifier() {
  return getRuleContexts<MyParserParser::Rank_specifierContext>();
}

MyParserParser::Rank_specifierContext* MyParserParser::Pointer_typeContext::rank_specifier(size_t i) {
  return getRuleContext<MyParserParser::Rank_specifierContext>(i);
}

tree::TerminalNode* MyParserParser::Pointer_typeContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}


size_t MyParserParser::Pointer_typeContext::getRuleIndex() const {
  return MyParserParser::RulePointer_type;
}

void MyParserParser::Pointer_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer_type(this);
}

void MyParserParser::Pointer_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer_type(this);
}

MyParserParser::Pointer_typeContext* MyParserParser::pointer_type() {
  Pointer_typeContext *_localctx = _tracker.createInstance<Pointer_typeContext>(_ctx, getState());
  enterRule(_localctx, 326, MyParserParser::RulePointer_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2036);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__22:
      case MyParserParser::T__27:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::STRING:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(2023);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MyParserParser::T__16:
          case MyParserParser::T__19:
          case MyParserParser::T__22:
          case MyParserParser::T__27:
          case MyParserParser::T__32:
          case MyParserParser::FLOAT:
          case MyParserParser::INT:
          case MyParserParser::LONG:
          case MyParserParser::SBYTE:
          case MyParserParser::SHORT:
          case MyParserParser::UINT:
          case MyParserParser::ULONG:
          case MyParserParser::USHORT: {
            setState(2021);
            simple_type();
            break;
          }

          case MyParserParser::T__8:
          case MyParserParser::T__9:
          case MyParserParser::T__10:
          case MyParserParser::T__12:
          case MyParserParser::T__13:
          case MyParserParser::T__14:
          case MyParserParser::T__18:
          case MyParserParser::T__30:
          case MyParserParser::T__33:
          case MyParserParser::EQUALS:
          case MyParserParser::FROM:
          case MyParserParser::GET:
          case MyParserParser::GROUP:
          case MyParserParser::INTO:
          case MyParserParser::JOIN:
          case MyParserParser::LET:
          case MyParserParser::NAMEOF:
          case MyParserParser::OBJECT:
          case MyParserParser::ON:
          case MyParserParser::ORDERBY:
          case MyParserParser::PARTIAL:
          case MyParserParser::REMOVE:
          case MyParserParser::SELECT:
          case MyParserParser::SET:
          case MyParserParser::STRING:
          case MyParserParser::WHEN:
          case MyParserParser::WHERE:
          case MyParserParser::YIELD:
          case MyParserParser::IDENTIFIER: {
            setState(2022);
            class_type();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(2029);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MyParserParser::T__1

        || _la == MyParserParser::T__32) {
          setState(2027);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case MyParserParser::T__32: {
              setState(2025);
              rank_specifier();
              break;
            }

            case MyParserParser::T__1: {
              setState(2026);
              match(MyParserParser::T__1);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(2031);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2032);
        match(MyParserParser::T__2);
        break;
      }

      case MyParserParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(2034);
        match(MyParserParser::VOID);
        setState(2035);
        match(MyParserParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_declaratorsContext ------------------------------------------------------------------

MyParserParser::Fixed_pointer_declaratorsContext::Fixed_pointer_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::Fixed_pointer_declaratorContext *> MyParserParser::Fixed_pointer_declaratorsContext::fixed_pointer_declarator() {
  return getRuleContexts<MyParserParser::Fixed_pointer_declaratorContext>();
}

MyParserParser::Fixed_pointer_declaratorContext* MyParserParser::Fixed_pointer_declaratorsContext::fixed_pointer_declarator(size_t i) {
  return getRuleContext<MyParserParser::Fixed_pointer_declaratorContext>(i);
}


size_t MyParserParser::Fixed_pointer_declaratorsContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_pointer_declarators;
}

void MyParserParser::Fixed_pointer_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_declarators(this);
}

void MyParserParser::Fixed_pointer_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_declarators(this);
}

MyParserParser::Fixed_pointer_declaratorsContext* MyParserParser::fixed_pointer_declarators() {
  Fixed_pointer_declaratorsContext *_localctx = _tracker.createInstance<Fixed_pointer_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 328, MyParserParser::RuleFixed_pointer_declarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2038);
    fixed_pointer_declarator();
    setState(2043);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(2039);
      match(MyParserParser::T__4);
      setState(2040);
      fixed_pointer_declarator();
      setState(2045);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_declaratorContext ------------------------------------------------------------------

MyParserParser::Fixed_pointer_declaratorContext::Fixed_pointer_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Fixed_pointer_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Fixed_pointer_initializerContext* MyParserParser::Fixed_pointer_declaratorContext::fixed_pointer_initializer() {
  return getRuleContext<MyParserParser::Fixed_pointer_initializerContext>(0);
}


size_t MyParserParser::Fixed_pointer_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_pointer_declarator;
}

void MyParserParser::Fixed_pointer_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_declarator(this);
}

void MyParserParser::Fixed_pointer_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_declarator(this);
}

MyParserParser::Fixed_pointer_declaratorContext* MyParserParser::fixed_pointer_declarator() {
  Fixed_pointer_declaratorContext *_localctx = _tracker.createInstance<Fixed_pointer_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 330, MyParserParser::RuleFixed_pointer_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2046);
    identifier();
    setState(2047);
    match(MyParserParser::T__7);
    setState(2048);
    fixed_pointer_initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_initializerContext ------------------------------------------------------------------

MyParserParser::Fixed_pointer_initializerContext::Fixed_pointer_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::ExpressionContext* MyParserParser::Fixed_pointer_initializerContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Local_variable_initializer_unsafeContext* MyParserParser::Fixed_pointer_initializerContext::local_variable_initializer_unsafe() {
  return getRuleContext<MyParserParser::Local_variable_initializer_unsafeContext>(0);
}


size_t MyParserParser::Fixed_pointer_initializerContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_pointer_initializer;
}

void MyParserParser::Fixed_pointer_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_initializer(this);
}

void MyParserParser::Fixed_pointer_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_initializer(this);
}

MyParserParser::Fixed_pointer_initializerContext* MyParserParser::fixed_pointer_initializer() {
  Fixed_pointer_initializerContext *_localctx = _tracker.createInstance<Fixed_pointer_initializerContext>(_ctx, getState());
  enterRule(_localctx, 332, MyParserParser::RuleFixed_pointer_initializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2055);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(2051);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx)) {
        case 1: {
          setState(2050);
          match(MyParserParser::T__20);
          break;
        }

        }
        setState(2053);
        expression();
        break;
      }

      case MyParserParser::STACKALLOC: {
        enterOuterAlt(_localctx, 2);
        setState(2054);
        local_variable_initializer_unsafe();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_size_buffer_declaratorContext ------------------------------------------------------------------

MyParserParser::Fixed_size_buffer_declaratorContext::Fixed_size_buffer_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Fixed_size_buffer_declaratorContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Fixed_size_buffer_declaratorContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Fixed_size_buffer_declaratorContext::getRuleIndex() const {
  return MyParserParser::RuleFixed_size_buffer_declarator;
}

void MyParserParser::Fixed_size_buffer_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_size_buffer_declarator(this);
}

void MyParserParser::Fixed_size_buffer_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_size_buffer_declarator(this);
}

MyParserParser::Fixed_size_buffer_declaratorContext* MyParserParser::fixed_size_buffer_declarator() {
  Fixed_size_buffer_declaratorContext *_localctx = _tracker.createInstance<Fixed_size_buffer_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 334, MyParserParser::RuleFixed_size_buffer_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2057);
    identifier();
    setState(2058);
    match(MyParserParser::T__32);
    setState(2059);
    expression();
    setState(2060);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_initializer_unsafeContext ------------------------------------------------------------------

MyParserParser::Local_variable_initializer_unsafeContext::Local_variable_initializer_unsafeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Local_variable_initializer_unsafeContext::STACKALLOC() {
  return getToken(MyParserParser::STACKALLOC, 0);
}

MyParserParser::TypeContext* MyParserParser::Local_variable_initializer_unsafeContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Local_variable_initializer_unsafeContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Local_variable_initializer_unsafeContext::getRuleIndex() const {
  return MyParserParser::RuleLocal_variable_initializer_unsafe;
}

void MyParserParser::Local_variable_initializer_unsafeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_initializer_unsafe(this);
}

void MyParserParser::Local_variable_initializer_unsafeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_initializer_unsafe(this);
}

MyParserParser::Local_variable_initializer_unsafeContext* MyParserParser::local_variable_initializer_unsafe() {
  Local_variable_initializer_unsafeContext *_localctx = _tracker.createInstance<Local_variable_initializer_unsafeContext>(_ctx, getState());
  enterRule(_localctx, 336, MyParserParser::RuleLocal_variable_initializer_unsafe);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2062);
    match(MyParserParser::STACKALLOC);
    setState(2063);
    type();
    setState(2064);
    match(MyParserParser::T__32);
    setState(2065);
    expression();
    setState(2066);
    match(MyParserParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_arrowContext ------------------------------------------------------------------

MyParserParser::Right_arrowContext::Right_arrowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Right_arrowContext::getRuleIndex() const {
  return MyParserParser::RuleRight_arrow;
}

void MyParserParser::Right_arrowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_arrow(this);
}

void MyParserParser::Right_arrowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_arrow(this);
}

MyParserParser::Right_arrowContext* MyParserParser::right_arrow() {
  Right_arrowContext *_localctx = _tracker.createInstance<Right_arrowContext>(_ctx, getState());
  enterRule(_localctx, 338, MyParserParser::RuleRight_arrow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2068);
    dynamic_cast<Right_arrowContext *>(_localctx)->first = match(MyParserParser::T__7);
    setState(2069);
    dynamic_cast<Right_arrowContext *>(_localctx)->second = match(MyParserParser::T__5);
    setState(2070);

    if (!((dynamic_cast<Right_arrowContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_arrowContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_shiftContext ------------------------------------------------------------------

MyParserParser::Right_shiftContext::Right_shiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Right_shiftContext::getRuleIndex() const {
  return MyParserParser::RuleRight_shift;
}

void MyParserParser::Right_shiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_shift(this);
}

void MyParserParser::Right_shiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_shift(this);
}

MyParserParser::Right_shiftContext* MyParserParser::right_shift() {
  Right_shiftContext *_localctx = _tracker.createInstance<Right_shiftContext>(_ctx, getState());
  enterRule(_localctx, 340, MyParserParser::RuleRight_shift);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2072);
    dynamic_cast<Right_shiftContext *>(_localctx)->first = match(MyParserParser::T__5);
    setState(2073);
    dynamic_cast<Right_shiftContext *>(_localctx)->second = match(MyParserParser::T__5);
    setState(2074);

    if (!((dynamic_cast<Right_shiftContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shiftContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_shift_assignmentContext ------------------------------------------------------------------

MyParserParser::Right_shift_assignmentContext::Right_shift_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyParserParser::Right_shift_assignmentContext::getRuleIndex() const {
  return MyParserParser::RuleRight_shift_assignment;
}

void MyParserParser::Right_shift_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_shift_assignment(this);
}

void MyParserParser::Right_shift_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_shift_assignment(this);
}

MyParserParser::Right_shift_assignmentContext* MyParserParser::right_shift_assignment() {
  Right_shift_assignmentContext *_localctx = _tracker.createInstance<Right_shift_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 342, MyParserParser::RuleRight_shift_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2076);
    dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first = match(MyParserParser::T__5);
    setState(2077);
    dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second = match(MyParserParser::T__22);
    setState(2078);

    if (!((dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

MyParserParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Boolean_literalContext* MyParserParser::LiteralContext::boolean_literal() {
  return getRuleContext<MyParserParser::Boolean_literalContext>(0);
}

MyParserParser::String_literalContext* MyParserParser::LiteralContext::string_literal() {
  return getRuleContext<MyParserParser::String_literalContext>(0);
}

tree::TerminalNode* MyParserParser::LiteralContext::INTEGER_LITERAL() {
  return getToken(MyParserParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* MyParserParser::LiteralContext::HEX_INTEGER_LITERAL() {
  return getToken(MyParserParser::HEX_INTEGER_LITERAL, 0);
}

tree::TerminalNode* MyParserParser::LiteralContext::REAL_LITERAL() {
  return getToken(MyParserParser::REAL_LITERAL, 0);
}

tree::TerminalNode* MyParserParser::LiteralContext::CHARACTER_LITERAL() {
  return getToken(MyParserParser::CHARACTER_LITERAL, 0);
}

tree::TerminalNode* MyParserParser::LiteralContext::NULLL() {
  return getToken(MyParserParser::NULLL, 0);
}


size_t MyParserParser::LiteralContext::getRuleIndex() const {
  return MyParserParser::RuleLiteral;
}

void MyParserParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void MyParserParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

MyParserParser::LiteralContext* MyParserParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 344, MyParserParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2087);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::FALSE:
      case MyParserParser::TRUE: {
        enterOuterAlt(_localctx, 1);
        setState(2080);
        boolean_literal();
        break;
      }

      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START: {
        enterOuterAlt(_localctx, 2);
        setState(2081);
        string_literal();
        break;
      }

      case MyParserParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(2082);
        match(MyParserParser::INTEGER_LITERAL);
        break;
      }

      case MyParserParser::HEX_INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(2083);
        match(MyParserParser::HEX_INTEGER_LITERAL);
        break;
      }

      case MyParserParser::REAL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(2084);
        match(MyParserParser::REAL_LITERAL);
        break;
      }

      case MyParserParser::CHARACTER_LITERAL: {
        enterOuterAlt(_localctx, 6);
        setState(2085);
        match(MyParserParser::CHARACTER_LITERAL);
        break;
      }

      case MyParserParser::NULLL: {
        enterOuterAlt(_localctx, 7);
        setState(2086);
        match(MyParserParser::NULLL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_literalContext ------------------------------------------------------------------

MyParserParser::Boolean_literalContext::Boolean_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Boolean_literalContext::TRUE() {
  return getToken(MyParserParser::TRUE, 0);
}

tree::TerminalNode* MyParserParser::Boolean_literalContext::FALSE() {
  return getToken(MyParserParser::FALSE, 0);
}


size_t MyParserParser::Boolean_literalContext::getRuleIndex() const {
  return MyParserParser::RuleBoolean_literal;
}

void MyParserParser::Boolean_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_literal(this);
}

void MyParserParser::Boolean_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_literal(this);
}

MyParserParser::Boolean_literalContext* MyParserParser::boolean_literal() {
  Boolean_literalContext *_localctx = _tracker.createInstance<Boolean_literalContext>(_ctx, getState());
  enterRule(_localctx, 346, MyParserParser::RuleBoolean_literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2089);
    _la = _input->LA(1);
    if (!(_la == MyParserParser::FALSE

    || _la == MyParserParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

MyParserParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Interpolated_regular_stringContext* MyParserParser::String_literalContext::interpolated_regular_string() {
  return getRuleContext<MyParserParser::Interpolated_regular_stringContext>(0);
}

MyParserParser::Interpolated_verbatium_stringContext* MyParserParser::String_literalContext::interpolated_verbatium_string() {
  return getRuleContext<MyParserParser::Interpolated_verbatium_stringContext>(0);
}

tree::TerminalNode* MyParserParser::String_literalContext::REGULAR_STRING() {
  return getToken(MyParserParser::REGULAR_STRING, 0);
}

tree::TerminalNode* MyParserParser::String_literalContext::VERBATIUM_STRING() {
  return getToken(MyParserParser::VERBATIUM_STRING, 0);
}


size_t MyParserParser::String_literalContext::getRuleIndex() const {
  return MyParserParser::RuleString_literal;
}

void MyParserParser::String_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_literal(this);
}

void MyParserParser::String_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_literal(this);
}

MyParserParser::String_literalContext* MyParserParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 348, MyParserParser::RuleString_literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2095);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START: {
        enterOuterAlt(_localctx, 1);
        setState(2091);
        interpolated_regular_string();
        break;
      }

      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START: {
        enterOuterAlt(_localctx, 2);
        setState(2092);
        interpolated_verbatium_string();
        break;
      }

      case MyParserParser::REGULAR_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(2093);
        match(MyParserParser::REGULAR_STRING);
        break;
      }

      case MyParserParser::VERBATIUM_STRING: {
        enterOuterAlt(_localctx, 4);
        setState(2094);
        match(MyParserParser::VERBATIUM_STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interpolated_regular_stringContext ------------------------------------------------------------------

MyParserParser::Interpolated_regular_stringContext::Interpolated_regular_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Interpolated_regular_stringContext::INTERPOLATED_REGULAR_STRING_START() {
  return getToken(MyParserParser::INTERPOLATED_REGULAR_STRING_START, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_regular_stringContext::DOUBLE_QUOTE_INSIDE() {
  return getToken(MyParserParser::DOUBLE_QUOTE_INSIDE, 0);
}

std::vector<MyParserParser::Interpolated_regular_string_partContext *> MyParserParser::Interpolated_regular_stringContext::interpolated_regular_string_part() {
  return getRuleContexts<MyParserParser::Interpolated_regular_string_partContext>();
}

MyParserParser::Interpolated_regular_string_partContext* MyParserParser::Interpolated_regular_stringContext::interpolated_regular_string_part(size_t i) {
  return getRuleContext<MyParserParser::Interpolated_regular_string_partContext>(i);
}


size_t MyParserParser::Interpolated_regular_stringContext::getRuleIndex() const {
  return MyParserParser::RuleInterpolated_regular_string;
}

void MyParserParser::Interpolated_regular_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterpolated_regular_string(this);
}

void MyParserParser::Interpolated_regular_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterpolated_regular_string(this);
}

MyParserParser::Interpolated_regular_stringContext* MyParserParser::interpolated_regular_string() {
  Interpolated_regular_stringContext *_localctx = _tracker.createInstance<Interpolated_regular_stringContext>(_ctx, getState());
  enterRule(_localctx, 350, MyParserParser::RuleInterpolated_regular_string);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2097);
    match(MyParserParser::INTERPOLATED_REGULAR_STRING_START);
    setState(2101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || ((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (MyParserParser::BANG - 139))
      | (1ULL << (MyParserParser::DOUBLE_CURLY_INSIDE - 139))
      | (1ULL << (MyParserParser::REGULAR_CHAR_INSIDE - 139))
      | (1ULL << (MyParserParser::REGULAR_STRING_INSIDE - 139)))) != 0)) {
      setState(2098);
      interpolated_regular_string_part();
      setState(2103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2104);
    match(MyParserParser::DOUBLE_QUOTE_INSIDE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interpolated_verbatium_stringContext ------------------------------------------------------------------

MyParserParser::Interpolated_verbatium_stringContext::Interpolated_verbatium_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Interpolated_verbatium_stringContext::INTERPOLATED_VERBATIUM_STRING_START() {
  return getToken(MyParserParser::INTERPOLATED_VERBATIUM_STRING_START, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_verbatium_stringContext::DOUBLE_QUOTE_INSIDE() {
  return getToken(MyParserParser::DOUBLE_QUOTE_INSIDE, 0);
}

std::vector<MyParserParser::Interpolated_verbatium_string_partContext *> MyParserParser::Interpolated_verbatium_stringContext::interpolated_verbatium_string_part() {
  return getRuleContexts<MyParserParser::Interpolated_verbatium_string_partContext>();
}

MyParserParser::Interpolated_verbatium_string_partContext* MyParserParser::Interpolated_verbatium_stringContext::interpolated_verbatium_string_part(size_t i) {
  return getRuleContext<MyParserParser::Interpolated_verbatium_string_partContext>(i);
}


size_t MyParserParser::Interpolated_verbatium_stringContext::getRuleIndex() const {
  return MyParserParser::RuleInterpolated_verbatium_string;
}

void MyParserParser::Interpolated_verbatium_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterpolated_verbatium_string(this);
}

void MyParserParser::Interpolated_verbatium_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterpolated_verbatium_string(this);
}

MyParserParser::Interpolated_verbatium_stringContext* MyParserParser::interpolated_verbatium_string() {
  Interpolated_verbatium_stringContext *_localctx = _tracker.createInstance<Interpolated_verbatium_stringContext>(_ctx, getState());
  enterRule(_localctx, 352, MyParserParser::RuleInterpolated_verbatium_string);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2106);
    match(MyParserParser::INTERPOLATED_VERBATIUM_STRING_START);
    setState(2110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || ((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (MyParserParser::BANG - 139))
      | (1ULL << (MyParserParser::DOUBLE_CURLY_INSIDE - 139))
      | (1ULL << (MyParserParser::VERBATIUM_DOUBLE_QUOTE_INSIDE - 139))
      | (1ULL << (MyParserParser::VERBATIUM_INSIDE_STRING - 139)))) != 0)) {
      setState(2107);
      interpolated_verbatium_string_part();
      setState(2112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2113);
    match(MyParserParser::DOUBLE_QUOTE_INSIDE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interpolated_regular_string_partContext ------------------------------------------------------------------

MyParserParser::Interpolated_regular_string_partContext::Interpolated_regular_string_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Interpolated_string_expressionContext* MyParserParser::Interpolated_regular_string_partContext::interpolated_string_expression() {
  return getRuleContext<MyParserParser::Interpolated_string_expressionContext>(0);
}

tree::TerminalNode* MyParserParser::Interpolated_regular_string_partContext::DOUBLE_CURLY_INSIDE() {
  return getToken(MyParserParser::DOUBLE_CURLY_INSIDE, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_regular_string_partContext::REGULAR_CHAR_INSIDE() {
  return getToken(MyParserParser::REGULAR_CHAR_INSIDE, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_regular_string_partContext::REGULAR_STRING_INSIDE() {
  return getToken(MyParserParser::REGULAR_STRING_INSIDE, 0);
}


size_t MyParserParser::Interpolated_regular_string_partContext::getRuleIndex() const {
  return MyParserParser::RuleInterpolated_regular_string_part;
}

void MyParserParser::Interpolated_regular_string_partContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterpolated_regular_string_part(this);
}

void MyParserParser::Interpolated_regular_string_partContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterpolated_regular_string_part(this);
}

MyParserParser::Interpolated_regular_string_partContext* MyParserParser::interpolated_regular_string_part() {
  Interpolated_regular_string_partContext *_localctx = _tracker.createInstance<Interpolated_regular_string_partContext>(_ctx, getState());
  enterRule(_localctx, 354, MyParserParser::RuleInterpolated_regular_string_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2119);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(2115);
        interpolated_string_expression();
        break;
      }

      case MyParserParser::DOUBLE_CURLY_INSIDE: {
        enterOuterAlt(_localctx, 2);
        setState(2116);
        match(MyParserParser::DOUBLE_CURLY_INSIDE);
        break;
      }

      case MyParserParser::REGULAR_CHAR_INSIDE: {
        enterOuterAlt(_localctx, 3);
        setState(2117);
        match(MyParserParser::REGULAR_CHAR_INSIDE);
        break;
      }

      case MyParserParser::REGULAR_STRING_INSIDE: {
        enterOuterAlt(_localctx, 4);
        setState(2118);
        match(MyParserParser::REGULAR_STRING_INSIDE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interpolated_verbatium_string_partContext ------------------------------------------------------------------

MyParserParser::Interpolated_verbatium_string_partContext::Interpolated_verbatium_string_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Interpolated_string_expressionContext* MyParserParser::Interpolated_verbatium_string_partContext::interpolated_string_expression() {
  return getRuleContext<MyParserParser::Interpolated_string_expressionContext>(0);
}

tree::TerminalNode* MyParserParser::Interpolated_verbatium_string_partContext::DOUBLE_CURLY_INSIDE() {
  return getToken(MyParserParser::DOUBLE_CURLY_INSIDE, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_verbatium_string_partContext::VERBATIUM_DOUBLE_QUOTE_INSIDE() {
  return getToken(MyParserParser::VERBATIUM_DOUBLE_QUOTE_INSIDE, 0);
}

tree::TerminalNode* MyParserParser::Interpolated_verbatium_string_partContext::VERBATIUM_INSIDE_STRING() {
  return getToken(MyParserParser::VERBATIUM_INSIDE_STRING, 0);
}


size_t MyParserParser::Interpolated_verbatium_string_partContext::getRuleIndex() const {
  return MyParserParser::RuleInterpolated_verbatium_string_part;
}

void MyParserParser::Interpolated_verbatium_string_partContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterpolated_verbatium_string_part(this);
}

void MyParserParser::Interpolated_verbatium_string_partContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterpolated_verbatium_string_part(this);
}

MyParserParser::Interpolated_verbatium_string_partContext* MyParserParser::interpolated_verbatium_string_part() {
  Interpolated_verbatium_string_partContext *_localctx = _tracker.createInstance<Interpolated_verbatium_string_partContext>(_ctx, getState());
  enterRule(_localctx, 356, MyParserParser::RuleInterpolated_verbatium_string_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__2:
      case MyParserParser::T__8:
      case MyParserParser::T__9:
      case MyParserParser::T__10:
      case MyParserParser::T__12:
      case MyParserParser::T__13:
      case MyParserParser::T__14:
      case MyParserParser::T__15:
      case MyParserParser::T__16:
      case MyParserParser::T__18:
      case MyParserParser::T__19:
      case MyParserParser::T__20:
      case MyParserParser::T__22:
      case MyParserParser::T__23:
      case MyParserParser::T__24:
      case MyParserParser::T__25:
      case MyParserParser::T__27:
      case MyParserParser::T__28:
      case MyParserParser::T__29:
      case MyParserParser::T__30:
      case MyParserParser::T__32:
      case MyParserParser::T__33:
      case MyParserParser::EQUALS:
      case MyParserParser::FALSE:
      case MyParserParser::FLOAT:
      case MyParserParser::FROM:
      case MyParserParser::GET:
      case MyParserParser::GROUP:
      case MyParserParser::INT:
      case MyParserParser::INTO:
      case MyParserParser::JOIN:
      case MyParserParser::LET:
      case MyParserParser::LONG:
      case MyParserParser::NAMEOF:
      case MyParserParser::NEW:
      case MyParserParser::NULLL:
      case MyParserParser::OBJECT:
      case MyParserParser::ON:
      case MyParserParser::ORDERBY:
      case MyParserParser::PARTIAL:
      case MyParserParser::REMOVE:
      case MyParserParser::SBYTE:
      case MyParserParser::SELECT:
      case MyParserParser::SET:
      case MyParserParser::SHORT:
      case MyParserParser::SIZEOF:
      case MyParserParser::STRING:
      case MyParserParser::THIS:
      case MyParserParser::TRUE:
      case MyParserParser::TYPEOF:
      case MyParserParser::UINT:
      case MyParserParser::ULONG:
      case MyParserParser::UNCHECKED:
      case MyParserParser::USHORT:
      case MyParserParser::WHEN:
      case MyParserParser::WHERE:
      case MyParserParser::YIELD:
      case MyParserParser::IDENTIFIER:
      case MyParserParser::LITERAL_ACCESS:
      case MyParserParser::INTEGER_LITERAL:
      case MyParserParser::HEX_INTEGER_LITERAL:
      case MyParserParser::REAL_LITERAL:
      case MyParserParser::CHARACTER_LITERAL:
      case MyParserParser::REGULAR_STRING:
      case MyParserParser::VERBATIUM_STRING:
      case MyParserParser::INTERPOLATED_REGULAR_STRING_START:
      case MyParserParser::INTERPOLATED_VERBATIUM_STRING_START:
      case MyParserParser::OPEN_PARENS:
      case MyParserParser::BANG: {
        enterOuterAlt(_localctx, 1);
        setState(2121);
        interpolated_string_expression();
        break;
      }

      case MyParserParser::DOUBLE_CURLY_INSIDE: {
        enterOuterAlt(_localctx, 2);
        setState(2122);
        match(MyParserParser::DOUBLE_CURLY_INSIDE);
        break;
      }

      case MyParserParser::VERBATIUM_DOUBLE_QUOTE_INSIDE: {
        enterOuterAlt(_localctx, 3);
        setState(2123);
        match(MyParserParser::VERBATIUM_DOUBLE_QUOTE_INSIDE);
        break;
      }

      case MyParserParser::VERBATIUM_INSIDE_STRING: {
        enterOuterAlt(_localctx, 4);
        setState(2124);
        match(MyParserParser::VERBATIUM_INSIDE_STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interpolated_string_expressionContext ------------------------------------------------------------------

MyParserParser::Interpolated_string_expressionContext::Interpolated_string_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::ExpressionContext *> MyParserParser::Interpolated_string_expressionContext::expression() {
  return getRuleContexts<MyParserParser::ExpressionContext>();
}

MyParserParser::ExpressionContext* MyParserParser::Interpolated_string_expressionContext::expression(size_t i) {
  return getRuleContext<MyParserParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MyParserParser::Interpolated_string_expressionContext::FORMAT_STRING() {
  return getTokens(MyParserParser::FORMAT_STRING);
}

tree::TerminalNode* MyParserParser::Interpolated_string_expressionContext::FORMAT_STRING(size_t i) {
  return getToken(MyParserParser::FORMAT_STRING, i);
}


size_t MyParserParser::Interpolated_string_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleInterpolated_string_expression;
}

void MyParserParser::Interpolated_string_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterpolated_string_expression(this);
}

void MyParserParser::Interpolated_string_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterpolated_string_expression(this);
}

MyParserParser::Interpolated_string_expressionContext* MyParserParser::interpolated_string_expression() {
  Interpolated_string_expressionContext *_localctx = _tracker.createInstance<Interpolated_string_expressionContext>(_ctx, getState());
  enterRule(_localctx, 358, MyParserParser::RuleInterpolated_string_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2127);
    expression();
    setState(2132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyParserParser::T__4) {
      setState(2128);
      match(MyParserParser::T__4);
      setState(2129);
      expression();
      setState(2134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2135);
      match(MyParserParser::T__6);
      setState(2137); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(2136);
        match(MyParserParser::FORMAT_STRING);
        setState(2139); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == MyParserParser::FORMAT_STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

MyParserParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::KeywordContext::ABSTRACT() {
  return getToken(MyParserParser::ABSTRACT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::AS() {
  return getToken(MyParserParser::AS, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::BASE() {
  return getToken(MyParserParser::BASE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::BOOL() {
  return getToken(MyParserParser::BOOL, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::BREAK() {
  return getToken(MyParserParser::BREAK, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::BYTE() {
  return getToken(MyParserParser::BYTE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CASE() {
  return getToken(MyParserParser::CASE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CATCH() {
  return getToken(MyParserParser::CATCH, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CHAR() {
  return getToken(MyParserParser::CHAR, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CHECKED() {
  return getToken(MyParserParser::CHECKED, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CLASS() {
  return getToken(MyParserParser::CLASS, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CONST() {
  return getToken(MyParserParser::CONST, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::CONTINUE() {
  return getToken(MyParserParser::CONTINUE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::DECIMAL() {
  return getToken(MyParserParser::DECIMAL, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::DEFAULT() {
  return getToken(MyParserParser::DEFAULT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::DELEGATE() {
  return getToken(MyParserParser::DELEGATE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::DO() {
  return getToken(MyParserParser::DO, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::DOUBLE() {
  return getToken(MyParserParser::DOUBLE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::ELSE() {
  return getToken(MyParserParser::ELSE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::ENUM() {
  return getToken(MyParserParser::ENUM, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::EVENT() {
  return getToken(MyParserParser::EVENT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::EXPLICIT() {
  return getToken(MyParserParser::EXPLICIT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::EXTERN() {
  return getToken(MyParserParser::EXTERN, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FALSE() {
  return getToken(MyParserParser::FALSE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FINALLY() {
  return getToken(MyParserParser::FINALLY, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FIXED() {
  return getToken(MyParserParser::FIXED, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FLOAT() {
  return getToken(MyParserParser::FLOAT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FOR() {
  return getToken(MyParserParser::FOR, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::FOREACH() {
  return getToken(MyParserParser::FOREACH, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::GOTO() {
  return getToken(MyParserParser::GOTO, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::IF() {
  return getToken(MyParserParser::IF, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::IMPLICIT() {
  return getToken(MyParserParser::IMPLICIT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::IN() {
  return getToken(MyParserParser::IN, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::INT() {
  return getToken(MyParserParser::INT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::INTERFACE() {
  return getToken(MyParserParser::INTERFACE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::INTERNAL() {
  return getToken(MyParserParser::INTERNAL, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::IS() {
  return getToken(MyParserParser::IS, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::LOCK() {
  return getToken(MyParserParser::LOCK, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::LONG() {
  return getToken(MyParserParser::LONG, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::NAMESPACE() {
  return getToken(MyParserParser::NAMESPACE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::NEW() {
  return getToken(MyParserParser::NEW, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::NULLL() {
  return getToken(MyParserParser::NULLL, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::OBJECT() {
  return getToken(MyParserParser::OBJECT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::OPERATOR() {
  return getToken(MyParserParser::OPERATOR, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::OUT() {
  return getToken(MyParserParser::OUT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::OVERRIDE() {
  return getToken(MyParserParser::OVERRIDE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::PARAMS() {
  return getToken(MyParserParser::PARAMS, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::PRIVATE() {
  return getToken(MyParserParser::PRIVATE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::PROTECTED() {
  return getToken(MyParserParser::PROTECTED, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::PUBLIC() {
  return getToken(MyParserParser::PUBLIC, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::READONLY() {
  return getToken(MyParserParser::READONLY, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::REF() {
  return getToken(MyParserParser::REF, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::RETURN() {
  return getToken(MyParserParser::RETURN, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::SBYTE() {
  return getToken(MyParserParser::SBYTE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::SEALED() {
  return getToken(MyParserParser::SEALED, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::SHORT() {
  return getToken(MyParserParser::SHORT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::SIZEOF() {
  return getToken(MyParserParser::SIZEOF, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::STACKALLOC() {
  return getToken(MyParserParser::STACKALLOC, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::STATIC() {
  return getToken(MyParserParser::STATIC, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::STRING() {
  return getToken(MyParserParser::STRING, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::STRUCT() {
  return getToken(MyParserParser::STRUCT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::SWITCH() {
  return getToken(MyParserParser::SWITCH, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::THROW() {
  return getToken(MyParserParser::THROW, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::TRUE() {
  return getToken(MyParserParser::TRUE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::TRY() {
  return getToken(MyParserParser::TRY, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::TYPEOF() {
  return getToken(MyParserParser::TYPEOF, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::UINT() {
  return getToken(MyParserParser::UINT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::ULONG() {
  return getToken(MyParserParser::ULONG, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::UNCHECKED() {
  return getToken(MyParserParser::UNCHECKED, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::UNSAFE() {
  return getToken(MyParserParser::UNSAFE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::USHORT() {
  return getToken(MyParserParser::USHORT, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::USING() {
  return getToken(MyParserParser::USING, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::VIRTUAL() {
  return getToken(MyParserParser::VIRTUAL, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::VOID() {
  return getToken(MyParserParser::VOID, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::VOLATILE() {
  return getToken(MyParserParser::VOLATILE, 0);
}

tree::TerminalNode* MyParserParser::KeywordContext::WHILE() {
  return getToken(MyParserParser::WHILE, 0);
}


size_t MyParserParser::KeywordContext::getRuleIndex() const {
  return MyParserParser::RuleKeyword;
}

void MyParserParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void MyParserParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}

MyParserParser::KeywordContext* MyParserParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 360, MyParserParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2143);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__7)
      | (1ULL << MyParserParser::T__11)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__17)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__21)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__26)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__31)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__34)
      | (1ULL << MyParserParser::T__35)
      | (1ULL << MyParserParser::EVENT)
      | (1ULL << MyParserParser::EXPLICIT)
      | (1ULL << MyParserParser::EXTERN)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FINALLY)
      | (1ULL << MyParserParser::FIXED)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FOR)
      | (1ULL << MyParserParser::FOREACH)
      | (1ULL << MyParserParser::GOTO)
      | (1ULL << MyParserParser::IF)
      | (1ULL << MyParserParser::IMPLICIT)
      | (1ULL << MyParserParser::IN)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTERFACE)
      | (1ULL << MyParserParser::INTERNAL)
      | (1ULL << MyParserParser::IS)
      | (1ULL << MyParserParser::LOCK)
      | (1ULL << MyParserParser::LONG))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (MyParserParser::NAMESPACE - 64))
      | (1ULL << (MyParserParser::NEW - 64))
      | (1ULL << (MyParserParser::NULLL - 64))
      | (1ULL << (MyParserParser::OBJECT - 64))
      | (1ULL << (MyParserParser::OPERATOR - 64))
      | (1ULL << (MyParserParser::OUT - 64))
      | (1ULL << (MyParserParser::OVERRIDE - 64))
      | (1ULL << (MyParserParser::PARAMS - 64))
      | (1ULL << (MyParserParser::PRIVATE - 64))
      | (1ULL << (MyParserParser::PROTECTED - 64))
      | (1ULL << (MyParserParser::PUBLIC - 64))
      | (1ULL << (MyParserParser::READONLY - 64))
      | (1ULL << (MyParserParser::REF - 64))
      | (1ULL << (MyParserParser::RETURN - 64))
      | (1ULL << (MyParserParser::SBYTE - 64))
      | (1ULL << (MyParserParser::SEALED - 64))
      | (1ULL << (MyParserParser::SHORT - 64))
      | (1ULL << (MyParserParser::SIZEOF - 64))
      | (1ULL << (MyParserParser::STACKALLOC - 64))
      | (1ULL << (MyParserParser::STATIC - 64))
      | (1ULL << (MyParserParser::STRING - 64))
      | (1ULL << (MyParserParser::STRUCT - 64))
      | (1ULL << (MyParserParser::SWITCH - 64))
      | (1ULL << (MyParserParser::THIS - 64))
      | (1ULL << (MyParserParser::THROW - 64))
      | (1ULL << (MyParserParser::TRUE - 64))
      | (1ULL << (MyParserParser::TRY - 64))
      | (1ULL << (MyParserParser::TYPEOF - 64))
      | (1ULL << (MyParserParser::UINT - 64))
      | (1ULL << (MyParserParser::ULONG - 64))
      | (1ULL << (MyParserParser::UNCHECKED - 64))
      | (1ULL << (MyParserParser::UNSAFE - 64))
      | (1ULL << (MyParserParser::USHORT - 64))
      | (1ULL << (MyParserParser::USING - 64))
      | (1ULL << (MyParserParser::VIRTUAL - 64))
      | (1ULL << (MyParserParser::VOID - 64))
      | (1ULL << (MyParserParser::VOLATILE - 64))
      | (1ULL << (MyParserParser::WHILE - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_definitionContext ------------------------------------------------------------------

MyParserParser::Class_definitionContext::Class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Class_definitionContext::CLASS() {
  return getToken(MyParserParser::CLASS, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Class_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Class_bodyContext* MyParserParser::Class_definitionContext::class_body() {
  return getRuleContext<MyParserParser::Class_bodyContext>(0);
}

MyParserParser::Type_parameter_listContext* MyParserParser::Class_definitionContext::type_parameter_list() {
  return getRuleContext<MyParserParser::Type_parameter_listContext>(0);
}

MyParserParser::Class_baseContext* MyParserParser::Class_definitionContext::class_base() {
  return getRuleContext<MyParserParser::Class_baseContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Class_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Class_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleClass_definition;
}

void MyParserParser::Class_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_definition(this);
}

void MyParserParser::Class_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_definition(this);
}

MyParserParser::Class_definitionContext* MyParserParser::class_definition() {
  Class_definitionContext *_localctx = _tracker.createInstance<Class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 362, MyParserParser::RuleClass_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2145);
    match(MyParserParser::T__24);
    setState(2146);
    identifier();
    setState(2148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__3) {
      setState(2147);
      type_parameter_list();
    }
    setState(2151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2150);
      class_base();
    }
    setState(2154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHERE) {
      setState(2153);
      type_parameter_constraints_clauses();
    }
    setState(2156);
    class_body();
    setState(2158);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 263, _ctx)) {
    case 1: {
      setState(2157);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_definitionContext ------------------------------------------------------------------

MyParserParser::Struct_definitionContext::Struct_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Struct_definitionContext::STRUCT() {
  return getToken(MyParserParser::STRUCT, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Struct_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Struct_bodyContext* MyParserParser::Struct_definitionContext::struct_body() {
  return getRuleContext<MyParserParser::Struct_bodyContext>(0);
}

MyParserParser::Type_parameter_listContext* MyParserParser::Struct_definitionContext::type_parameter_list() {
  return getRuleContext<MyParserParser::Type_parameter_listContext>(0);
}

MyParserParser::Struct_interfacesContext* MyParserParser::Struct_definitionContext::struct_interfaces() {
  return getRuleContext<MyParserParser::Struct_interfacesContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Struct_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Struct_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleStruct_definition;
}

void MyParserParser::Struct_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_definition(this);
}

void MyParserParser::Struct_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_definition(this);
}

MyParserParser::Struct_definitionContext* MyParserParser::struct_definition() {
  Struct_definitionContext *_localctx = _tracker.createInstance<Struct_definitionContext>(_ctx, getState());
  enterRule(_localctx, 364, MyParserParser::RuleStruct_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2160);
    match(MyParserParser::STRUCT);
    setState(2161);
    identifier();
    setState(2163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__3) {
      setState(2162);
      type_parameter_list();
    }
    setState(2166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2165);
      struct_interfaces();
    }
    setState(2169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHERE) {
      setState(2168);
      type_parameter_constraints_clauses();
    }
    setState(2171);
    struct_body();
    setState(2173);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
    case 1: {
      setState(2172);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_definitionContext ------------------------------------------------------------------

MyParserParser::Interface_definitionContext::Interface_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Interface_definitionContext::INTERFACE() {
  return getToken(MyParserParser::INTERFACE, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Interface_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Interface_bodyContext* MyParserParser::Interface_definitionContext::interface_body() {
  return getRuleContext<MyParserParser::Interface_bodyContext>(0);
}

MyParserParser::Variant_type_parameter_listContext* MyParserParser::Interface_definitionContext::variant_type_parameter_list() {
  return getRuleContext<MyParserParser::Variant_type_parameter_listContext>(0);
}

MyParserParser::Interface_baseContext* MyParserParser::Interface_definitionContext::interface_base() {
  return getRuleContext<MyParserParser::Interface_baseContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Interface_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Interface_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleInterface_definition;
}

void MyParserParser::Interface_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_definition(this);
}

void MyParserParser::Interface_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_definition(this);
}

MyParserParser::Interface_definitionContext* MyParserParser::interface_definition() {
  Interface_definitionContext *_localctx = _tracker.createInstance<Interface_definitionContext>(_ctx, getState());
  enterRule(_localctx, 366, MyParserParser::RuleInterface_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2175);
    match(MyParserParser::INTERFACE);
    setState(2176);
    identifier();
    setState(2178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__3) {
      setState(2177);
      variant_type_parameter_list();
    }
    setState(2181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2180);
      interface_base();
    }
    setState(2184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHERE) {
      setState(2183);
      type_parameter_constraints_clauses();
    }
    setState(2186);
    interface_body();
    setState(2188);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      setState(2187);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_definitionContext ------------------------------------------------------------------

MyParserParser::Enum_definitionContext::Enum_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Enum_definitionContext::ENUM() {
  return getToken(MyParserParser::ENUM, 0);
}

MyParserParser::IdentifierContext* MyParserParser::Enum_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::Enum_bodyContext* MyParserParser::Enum_definitionContext::enum_body() {
  return getRuleContext<MyParserParser::Enum_bodyContext>(0);
}

MyParserParser::Enum_baseContext* MyParserParser::Enum_definitionContext::enum_base() {
  return getRuleContext<MyParserParser::Enum_baseContext>(0);
}


size_t MyParserParser::Enum_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleEnum_definition;
}

void MyParserParser::Enum_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_definition(this);
}

void MyParserParser::Enum_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_definition(this);
}

MyParserParser::Enum_definitionContext* MyParserParser::enum_definition() {
  Enum_definitionContext *_localctx = _tracker.createInstance<Enum_definitionContext>(_ctx, getState());
  enterRule(_localctx, 368, MyParserParser::RuleEnum_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2190);
    match(MyParserParser::T__35);
    setState(2191);
    identifier();
    setState(2193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2192);
      enum_base();
    }
    setState(2195);
    enum_body();
    setState(2197);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      setState(2196);
      match(MyParserParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delegate_definitionContext ------------------------------------------------------------------

MyParserParser::Delegate_definitionContext::Delegate_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Delegate_definitionContext::DELEGATE() {
  return getToken(MyParserParser::DELEGATE, 0);
}

MyParserParser::Return_typeContext* MyParserParser::Delegate_definitionContext::return_type() {
  return getRuleContext<MyParserParser::Return_typeContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Delegate_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::Delegate_definitionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Delegate_definitionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Variant_type_parameter_listContext* MyParserParser::Delegate_definitionContext::variant_type_parameter_list() {
  return getRuleContext<MyParserParser::Variant_type_parameter_listContext>(0);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::Delegate_definitionContext::formal_parameter_list() {
  return getRuleContext<MyParserParser::Formal_parameter_listContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Delegate_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Delegate_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleDelegate_definition;
}

void MyParserParser::Delegate_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegate_definition(this);
}

void MyParserParser::Delegate_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegate_definition(this);
}

MyParserParser::Delegate_definitionContext* MyParserParser::delegate_definition() {
  Delegate_definitionContext *_localctx = _tracker.createInstance<Delegate_definitionContext>(_ctx, getState());
  enterRule(_localctx, 370, MyParserParser::RuleDelegate_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2199);
    match(MyParserParser::T__29);
    setState(2200);
    return_type();
    setState(2201);
    identifier();
    setState(2203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__3) {
      setState(2202);
      variant_type_parameter_list();
    }
    setState(2205);
    match(MyParserParser::OPEN_PARENS);
    setState(2207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
      | (1ULL << (MyParserParser::ON - 67))
      | (1ULL << (MyParserParser::ORDERBY - 67))
      | (1ULL << (MyParserParser::OUT - 67))
      | (1ULL << (MyParserParser::PARAMS - 67))
      | (1ULL << (MyParserParser::PARTIAL - 67))
      | (1ULL << (MyParserParser::REF - 67))
      | (1ULL << (MyParserParser::REMOVE - 67))
      | (1ULL << (MyParserParser::SBYTE - 67))
      | (1ULL << (MyParserParser::SELECT - 67))
      | (1ULL << (MyParserParser::SET - 67))
      | (1ULL << (MyParserParser::SHORT - 67))
      | (1ULL << (MyParserParser::STRING - 67))
      | (1ULL << (MyParserParser::THIS - 67))
      | (1ULL << (MyParserParser::UINT - 67))
      | (1ULL << (MyParserParser::ULONG - 67))
      | (1ULL << (MyParserParser::USHORT - 67))
      | (1ULL << (MyParserParser::VOID - 67))
      | (1ULL << (MyParserParser::WHEN - 67))
      | (1ULL << (MyParserParser::WHERE - 67))
      | (1ULL << (MyParserParser::YIELD - 67))
      | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
      setState(2206);
      formal_parameter_list();
    }
    setState(2209);
    match(MyParserParser::CLOSE_PARENS);
    setState(2211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHERE) {
      setState(2210);
      type_parameter_constraints_clauses();
    }
    setState(2213);
    match(MyParserParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_declarationContext ------------------------------------------------------------------

MyParserParser::Event_declarationContext::Event_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Event_declarationContext::EVENT() {
  return getToken(MyParserParser::EVENT, 0);
}

MyParserParser::TypeContext* MyParserParser::Event_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::Variable_declaratorsContext* MyParserParser::Event_declarationContext::variable_declarators() {
  return getRuleContext<MyParserParser::Variable_declaratorsContext>(0);
}

MyParserParser::Member_nameContext* MyParserParser::Event_declarationContext::member_name() {
  return getRuleContext<MyParserParser::Member_nameContext>(0);
}

tree::TerminalNode* MyParserParser::Event_declarationContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

MyParserParser::Event_accessor_declarationsContext* MyParserParser::Event_declarationContext::event_accessor_declarations() {
  return getRuleContext<MyParserParser::Event_accessor_declarationsContext>(0);
}

tree::TerminalNode* MyParserParser::Event_declarationContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}


size_t MyParserParser::Event_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleEvent_declaration;
}

void MyParserParser::Event_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent_declaration(this);
}

void MyParserParser::Event_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent_declaration(this);
}

MyParserParser::Event_declarationContext* MyParserParser::event_declaration() {
  Event_declarationContext *_localctx = _tracker.createInstance<Event_declarationContext>(_ctx, getState());
  enterRule(_localctx, 372, MyParserParser::RuleEvent_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2215);
    match(MyParserParser::EVENT);
    setState(2216);
    type();
    setState(2225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      setState(2217);
      variable_declarators();
      setState(2218);
      match(MyParserParser::T__35);
      break;
    }

    case 2: {
      setState(2220);
      member_name();
      setState(2221);
      match(MyParserParser::OPEN_BRACE);
      setState(2222);
      event_accessor_declarations();
      setState(2223);
      match(MyParserParser::CLOSE_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_declarationContext ------------------------------------------------------------------

MyParserParser::Field_declarationContext::Field_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Variable_declaratorsContext* MyParserParser::Field_declarationContext::variable_declarators() {
  return getRuleContext<MyParserParser::Variable_declaratorsContext>(0);
}


size_t MyParserParser::Field_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleField_declaration;
}

void MyParserParser::Field_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_declaration(this);
}

void MyParserParser::Field_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_declaration(this);
}

MyParserParser::Field_declarationContext* MyParserParser::field_declaration() {
  Field_declarationContext *_localctx = _tracker.createInstance<Field_declarationContext>(_ctx, getState());
  enterRule(_localctx, 374, MyParserParser::RuleField_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2227);
    variable_declarators();
    setState(2228);
    match(MyParserParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Property_declarationContext ------------------------------------------------------------------

MyParserParser::Property_declarationContext::Property_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Member_nameContext* MyParserParser::Property_declarationContext::member_name() {
  return getRuleContext<MyParserParser::Member_nameContext>(0);
}

tree::TerminalNode* MyParserParser::Property_declarationContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

MyParserParser::Accessor_declarationsContext* MyParserParser::Property_declarationContext::accessor_declarations() {
  return getRuleContext<MyParserParser::Accessor_declarationsContext>(0);
}

tree::TerminalNode* MyParserParser::Property_declarationContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Right_arrowContext* MyParserParser::Property_declarationContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Property_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Variable_initializerContext* MyParserParser::Property_declarationContext::variable_initializer() {
  return getRuleContext<MyParserParser::Variable_initializerContext>(0);
}


size_t MyParserParser::Property_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleProperty_declaration;
}

void MyParserParser::Property_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProperty_declaration(this);
}

void MyParserParser::Property_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProperty_declaration(this);
}

MyParserParser::Property_declarationContext* MyParserParser::property_declaration() {
  Property_declarationContext *_localctx = _tracker.createInstance<Property_declarationContext>(_ctx, getState());
  enterRule(_localctx, 376, MyParserParser::RuleProperty_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2230);
    member_name();
    setState(2244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        setState(2231);
        match(MyParserParser::OPEN_BRACE);
        setState(2232);
        accessor_declarations();
        setState(2233);
        match(MyParserParser::CLOSE_BRACE);
        setState(2238);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
        case 1: {
          setState(2234);
          match(MyParserParser::T__7);
          setState(2235);
          variable_initializer();
          setState(2236);
          match(MyParserParser::T__35);
          break;
        }

        }
        break;
      }

      case MyParserParser::T__7: {
        setState(2240);
        right_arrow();
        setState(2241);
        expression();
        setState(2242);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declarationContext ------------------------------------------------------------------

MyParserParser::Constant_declarationContext::Constant_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Constant_declarationContext::CONST() {
  return getToken(MyParserParser::CONST, 0);
}

MyParserParser::TypeContext* MyParserParser::Constant_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::Constant_declaratorsContext* MyParserParser::Constant_declarationContext::constant_declarators() {
  return getRuleContext<MyParserParser::Constant_declaratorsContext>(0);
}


size_t MyParserParser::Constant_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleConstant_declaration;
}

void MyParserParser::Constant_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declaration(this);
}

void MyParserParser::Constant_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declaration(this);
}

MyParserParser::Constant_declarationContext* MyParserParser::constant_declaration() {
  Constant_declarationContext *_localctx = _tracker.createInstance<Constant_declarationContext>(_ctx, getState());
  enterRule(_localctx, 378, MyParserParser::RuleConstant_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2246);
    match(MyParserParser::T__25);
    setState(2247);
    type();
    setState(2248);
    constant_declarators();
    setState(2249);
    match(MyParserParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexer_declarationContext ------------------------------------------------------------------

MyParserParser::Indexer_declarationContext::Indexer_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Indexer_declarationContext::THIS() {
  return getToken(MyParserParser::THIS, 0);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::Indexer_declarationContext::formal_parameter_list() {
  return getRuleContext<MyParserParser::Formal_parameter_listContext>(0);
}

tree::TerminalNode* MyParserParser::Indexer_declarationContext::OPEN_BRACE() {
  return getToken(MyParserParser::OPEN_BRACE, 0);
}

MyParserParser::Accessor_declarationsContext* MyParserParser::Indexer_declarationContext::accessor_declarations() {
  return getRuleContext<MyParserParser::Accessor_declarationsContext>(0);
}

tree::TerminalNode* MyParserParser::Indexer_declarationContext::CLOSE_BRACE() {
  return getToken(MyParserParser::CLOSE_BRACE, 0);
}

MyParserParser::Right_arrowContext* MyParserParser::Indexer_declarationContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Indexer_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Indexer_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleIndexer_declaration;
}

void MyParserParser::Indexer_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexer_declaration(this);
}

void MyParserParser::Indexer_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexer_declaration(this);
}

MyParserParser::Indexer_declarationContext* MyParserParser::indexer_declaration() {
  Indexer_declarationContext *_localctx = _tracker.createInstance<Indexer_declarationContext>(_ctx, getState());
  enterRule(_localctx, 380, MyParserParser::RuleIndexer_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2251);
    match(MyParserParser::THIS);
    setState(2252);
    match(MyParserParser::T__32);
    setState(2253);
    formal_parameter_list();
    setState(2254);
    match(MyParserParser::T__33);
    setState(2263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::OPEN_BRACE: {
        setState(2255);
        match(MyParserParser::OPEN_BRACE);
        setState(2256);
        accessor_declarations();
        setState(2257);
        match(MyParserParser::CLOSE_BRACE);
        break;
      }

      case MyParserParser::T__7: {
        setState(2259);
        right_arrow();
        setState(2260);
        expression();
        setState(2261);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Destructor_definitionContext ------------------------------------------------------------------

MyParserParser::Destructor_definitionContext::Destructor_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Destructor_definitionContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::Destructor_definitionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Destructor_definitionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::BodyContext* MyParserParser::Destructor_definitionContext::body() {
  return getRuleContext<MyParserParser::BodyContext>(0);
}


size_t MyParserParser::Destructor_definitionContext::getRuleIndex() const {
  return MyParserParser::RuleDestructor_definition;
}

void MyParserParser::Destructor_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDestructor_definition(this);
}

void MyParserParser::Destructor_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDestructor_definition(this);
}

MyParserParser::Destructor_definitionContext* MyParserParser::destructor_definition() {
  Destructor_definitionContext *_localctx = _tracker.createInstance<Destructor_definitionContext>(_ctx, getState());
  enterRule(_localctx, 382, MyParserParser::RuleDestructor_definition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2265);
    match(MyParserParser::T__28);
    setState(2266);
    identifier();
    setState(2267);
    match(MyParserParser::OPEN_PARENS);
    setState(2268);
    match(MyParserParser::CLOSE_PARENS);
    setState(2269);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_declarationContext ------------------------------------------------------------------

MyParserParser::Constructor_declarationContext::Constructor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::IdentifierContext* MyParserParser::Constructor_declarationContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

tree::TerminalNode* MyParserParser::Constructor_declarationContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Constructor_declarationContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::BodyContext* MyParserParser::Constructor_declarationContext::body() {
  return getRuleContext<MyParserParser::BodyContext>(0);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::Constructor_declarationContext::formal_parameter_list() {
  return getRuleContext<MyParserParser::Formal_parameter_listContext>(0);
}

MyParserParser::Constructor_initializerContext* MyParserParser::Constructor_declarationContext::constructor_initializer() {
  return getRuleContext<MyParserParser::Constructor_initializerContext>(0);
}


size_t MyParserParser::Constructor_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleConstructor_declaration;
}

void MyParserParser::Constructor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_declaration(this);
}

void MyParserParser::Constructor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_declaration(this);
}

MyParserParser::Constructor_declarationContext* MyParserParser::constructor_declaration() {
  Constructor_declarationContext *_localctx = _tracker.createInstance<Constructor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 384, MyParserParser::RuleConstructor_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2271);
    identifier();
    setState(2272);
    match(MyParserParser::OPEN_PARENS);
    setState(2274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
      | (1ULL << (MyParserParser::ON - 67))
      | (1ULL << (MyParserParser::ORDERBY - 67))
      | (1ULL << (MyParserParser::OUT - 67))
      | (1ULL << (MyParserParser::PARAMS - 67))
      | (1ULL << (MyParserParser::PARTIAL - 67))
      | (1ULL << (MyParserParser::REF - 67))
      | (1ULL << (MyParserParser::REMOVE - 67))
      | (1ULL << (MyParserParser::SBYTE - 67))
      | (1ULL << (MyParserParser::SELECT - 67))
      | (1ULL << (MyParserParser::SET - 67))
      | (1ULL << (MyParserParser::SHORT - 67))
      | (1ULL << (MyParserParser::STRING - 67))
      | (1ULL << (MyParserParser::THIS - 67))
      | (1ULL << (MyParserParser::UINT - 67))
      | (1ULL << (MyParserParser::ULONG - 67))
      | (1ULL << (MyParserParser::USHORT - 67))
      | (1ULL << (MyParserParser::VOID - 67))
      | (1ULL << (MyParserParser::WHEN - 67))
      | (1ULL << (MyParserParser::WHERE - 67))
      | (1ULL << (MyParserParser::YIELD - 67))
      | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
      setState(2273);
      formal_parameter_list();
    }
    setState(2276);
    match(MyParserParser::CLOSE_PARENS);
    setState(2278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__6) {
      setState(2277);
      constructor_initializer();
    }
    setState(2280);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_declarationContext ------------------------------------------------------------------

MyParserParser::Method_declarationContext::Method_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::Method_member_nameContext* MyParserParser::Method_declarationContext::method_member_name() {
  return getRuleContext<MyParserParser::Method_member_nameContext>(0);
}

tree::TerminalNode* MyParserParser::Method_declarationContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Method_declarationContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Method_bodyContext* MyParserParser::Method_declarationContext::method_body() {
  return getRuleContext<MyParserParser::Method_bodyContext>(0);
}

MyParserParser::Right_arrowContext* MyParserParser::Method_declarationContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Method_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}

MyParserParser::Type_parameter_listContext* MyParserParser::Method_declarationContext::type_parameter_list() {
  return getRuleContext<MyParserParser::Type_parameter_listContext>(0);
}

MyParserParser::Formal_parameter_listContext* MyParserParser::Method_declarationContext::formal_parameter_list() {
  return getRuleContext<MyParserParser::Formal_parameter_listContext>(0);
}

MyParserParser::Type_parameter_constraints_clausesContext* MyParserParser::Method_declarationContext::type_parameter_constraints_clauses() {
  return getRuleContext<MyParserParser::Type_parameter_constraints_clausesContext>(0);
}


size_t MyParserParser::Method_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleMethod_declaration;
}

void MyParserParser::Method_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_declaration(this);
}

void MyParserParser::Method_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_declaration(this);
}

MyParserParser::Method_declarationContext* MyParserParser::method_declaration() {
  Method_declarationContext *_localctx = _tracker.createInstance<Method_declarationContext>(_ctx, getState());
  enterRule(_localctx, 386, MyParserParser::RuleMethod_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2282);
    method_member_name();
    setState(2284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__3) {
      setState(2283);
      type_parameter_list();
    }
    setState(2286);
    match(MyParserParser::OPEN_PARENS);
    setState(2288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (MyParserParser::OBJECT - 67))
      | (1ULL << (MyParserParser::ON - 67))
      | (1ULL << (MyParserParser::ORDERBY - 67))
      | (1ULL << (MyParserParser::OUT - 67))
      | (1ULL << (MyParserParser::PARAMS - 67))
      | (1ULL << (MyParserParser::PARTIAL - 67))
      | (1ULL << (MyParserParser::REF - 67))
      | (1ULL << (MyParserParser::REMOVE - 67))
      | (1ULL << (MyParserParser::SBYTE - 67))
      | (1ULL << (MyParserParser::SELECT - 67))
      | (1ULL << (MyParserParser::SET - 67))
      | (1ULL << (MyParserParser::SHORT - 67))
      | (1ULL << (MyParserParser::STRING - 67))
      | (1ULL << (MyParserParser::THIS - 67))
      | (1ULL << (MyParserParser::UINT - 67))
      | (1ULL << (MyParserParser::ULONG - 67))
      | (1ULL << (MyParserParser::USHORT - 67))
      | (1ULL << (MyParserParser::VOID - 67))
      | (1ULL << (MyParserParser::WHEN - 67))
      | (1ULL << (MyParserParser::WHERE - 67))
      | (1ULL << (MyParserParser::YIELD - 67))
      | (1ULL << (MyParserParser::IDENTIFIER - 67)))) != 0)) {
      setState(2287);
      formal_parameter_list();
    }
    setState(2290);
    match(MyParserParser::CLOSE_PARENS);
    setState(2292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::WHERE) {
      setState(2291);
      type_parameter_constraints_clauses();
    }
    setState(2299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__35:
      case MyParserParser::OPEN_BRACE: {
        setState(2294);
        method_body();
        break;
      }

      case MyParserParser::T__7: {
        setState(2295);
        right_arrow();
        setState(2296);
        expression();
        setState(2297);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_member_nameContext ------------------------------------------------------------------

MyParserParser::Method_member_nameContext::Method_member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyParserParser::IdentifierContext *> MyParserParser::Method_member_nameContext::identifier() {
  return getRuleContexts<MyParserParser::IdentifierContext>();
}

MyParserParser::IdentifierContext* MyParserParser::Method_member_nameContext::identifier(size_t i) {
  return getRuleContext<MyParserParser::IdentifierContext>(i);
}

std::vector<MyParserParser::Type_argument_listContext *> MyParserParser::Method_member_nameContext::type_argument_list() {
  return getRuleContexts<MyParserParser::Type_argument_listContext>();
}

MyParserParser::Type_argument_listContext* MyParserParser::Method_member_nameContext::type_argument_list(size_t i) {
  return getRuleContext<MyParserParser::Type_argument_listContext>(i);
}


size_t MyParserParser::Method_member_nameContext::getRuleIndex() const {
  return MyParserParser::RuleMethod_member_name;
}

void MyParserParser::Method_member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_member_name(this);
}

void MyParserParser::Method_member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_member_name(this);
}

MyParserParser::Method_member_nameContext* MyParserParser::method_member_name() {
  Method_member_nameContext *_localctx = _tracker.createInstance<Method_member_nameContext>(_ctx, getState());
  enterRule(_localctx, 388, MyParserParser::RuleMethod_member_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2306);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
    case 1: {
      setState(2301);
      identifier();
      break;
    }

    case 2: {
      setState(2302);
      identifier();
      setState(2303);
      match(MyParserParser::T__34);
      setState(2304);
      identifier();
      break;
    }

    }
    setState(2315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2309);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MyParserParser::T__3) {
          setState(2308);
          type_argument_list();
        }
        setState(2311);
        match(MyParserParser::T__0);
        setState(2312);
        identifier(); 
      }
      setState(2317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_declarationContext ------------------------------------------------------------------

MyParserParser::Operator_declarationContext::Operator_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Operator_declarationContext::OPERATOR() {
  return getToken(MyParserParser::OPERATOR, 0);
}

MyParserParser::Overloadable_operatorContext* MyParserParser::Operator_declarationContext::overloadable_operator() {
  return getRuleContext<MyParserParser::Overloadable_operatorContext>(0);
}

tree::TerminalNode* MyParserParser::Operator_declarationContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

std::vector<MyParserParser::Arg_declarationContext *> MyParserParser::Operator_declarationContext::arg_declaration() {
  return getRuleContexts<MyParserParser::Arg_declarationContext>();
}

MyParserParser::Arg_declarationContext* MyParserParser::Operator_declarationContext::arg_declaration(size_t i) {
  return getRuleContext<MyParserParser::Arg_declarationContext>(i);
}

tree::TerminalNode* MyParserParser::Operator_declarationContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::BodyContext* MyParserParser::Operator_declarationContext::body() {
  return getRuleContext<MyParserParser::BodyContext>(0);
}

MyParserParser::Right_arrowContext* MyParserParser::Operator_declarationContext::right_arrow() {
  return getRuleContext<MyParserParser::Right_arrowContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Operator_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Operator_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleOperator_declaration;
}

void MyParserParser::Operator_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator_declaration(this);
}

void MyParserParser::Operator_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator_declaration(this);
}

MyParserParser::Operator_declarationContext* MyParserParser::operator_declaration() {
  Operator_declarationContext *_localctx = _tracker.createInstance<Operator_declarationContext>(_ctx, getState());
  enterRule(_localctx, 390, MyParserParser::RuleOperator_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2318);
    match(MyParserParser::OPERATOR);
    setState(2319);
    overloadable_operator();
    setState(2320);
    match(MyParserParser::OPEN_PARENS);
    setState(2321);
    arg_declaration();
    setState(2324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__4) {
      setState(2322);
      match(MyParserParser::T__4);
      setState(2323);
      arg_declaration();
    }
    setState(2326);
    match(MyParserParser::CLOSE_PARENS);
    setState(2332);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyParserParser::T__35:
      case MyParserParser::OPEN_BRACE: {
        setState(2327);
        body();
        break;
      }

      case MyParserParser::T__7: {
        setState(2328);
        right_arrow();
        setState(2329);
        expression();
        setState(2330);
        match(MyParserParser::T__35);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_declarationContext ------------------------------------------------------------------

MyParserParser::Arg_declarationContext::Arg_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyParserParser::TypeContext* MyParserParser::Arg_declarationContext::type() {
  return getRuleContext<MyParserParser::TypeContext>(0);
}

MyParserParser::IdentifierContext* MyParserParser::Arg_declarationContext::identifier() {
  return getRuleContext<MyParserParser::IdentifierContext>(0);
}

MyParserParser::ExpressionContext* MyParserParser::Arg_declarationContext::expression() {
  return getRuleContext<MyParserParser::ExpressionContext>(0);
}


size_t MyParserParser::Arg_declarationContext::getRuleIndex() const {
  return MyParserParser::RuleArg_declaration;
}

void MyParserParser::Arg_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_declaration(this);
}

void MyParserParser::Arg_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_declaration(this);
}

MyParserParser::Arg_declarationContext* MyParserParser::arg_declaration() {
  Arg_declarationContext *_localctx = _tracker.createInstance<Arg_declarationContext>(_ctx, getState());
  enterRule(_localctx, 392, MyParserParser::RuleArg_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2334);
    type();
    setState(2335);
    identifier();
    setState(2338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::T__7) {
      setState(2336);
      match(MyParserParser::T__7);
      setState(2337);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_invocationContext ------------------------------------------------------------------

MyParserParser::Method_invocationContext::Method_invocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Method_invocationContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Method_invocationContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Argument_listContext* MyParserParser::Method_invocationContext::argument_list() {
  return getRuleContext<MyParserParser::Argument_listContext>(0);
}


size_t MyParserParser::Method_invocationContext::getRuleIndex() const {
  return MyParserParser::RuleMethod_invocation;
}

void MyParserParser::Method_invocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_invocation(this);
}

void MyParserParser::Method_invocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_invocation(this);
}

MyParserParser::Method_invocationContext* MyParserParser::method_invocation() {
  Method_invocationContext *_localctx = _tracker.createInstance<Method_invocationContext>(_ctx, getState());
  enterRule(_localctx, 394, MyParserParser::RuleMethod_invocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2340);
    match(MyParserParser::OPEN_PARENS);
    setState(2342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OUT - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REF - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
      setState(2341);
      argument_list();
    }
    setState(2344);
    match(MyParserParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_creation_expressionContext ------------------------------------------------------------------

MyParserParser::Object_creation_expressionContext::Object_creation_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::Object_creation_expressionContext::OPEN_PARENS() {
  return getToken(MyParserParser::OPEN_PARENS, 0);
}

tree::TerminalNode* MyParserParser::Object_creation_expressionContext::CLOSE_PARENS() {
  return getToken(MyParserParser::CLOSE_PARENS, 0);
}

MyParserParser::Argument_listContext* MyParserParser::Object_creation_expressionContext::argument_list() {
  return getRuleContext<MyParserParser::Argument_listContext>(0);
}

MyParserParser::Object_or_collection_initializerContext* MyParserParser::Object_creation_expressionContext::object_or_collection_initializer() {
  return getRuleContext<MyParserParser::Object_or_collection_initializerContext>(0);
}


size_t MyParserParser::Object_creation_expressionContext::getRuleIndex() const {
  return MyParserParser::RuleObject_creation_expression;
}

void MyParserParser::Object_creation_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_creation_expression(this);
}

void MyParserParser::Object_creation_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_creation_expression(this);
}

MyParserParser::Object_creation_expressionContext* MyParserParser::object_creation_expression() {
  Object_creation_expressionContext *_localctx = _tracker.createInstance<Object_creation_expressionContext>(_ctx, getState());
  enterRule(_localctx, 396, MyParserParser::RuleObject_creation_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2346);
    match(MyParserParser::OPEN_PARENS);
    setState(2348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__2)
      | (1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__15)
      | (1ULL << MyParserParser::T__16)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__19)
      | (1ULL << MyParserParser::T__20)
      | (1ULL << MyParserParser::T__22)
      | (1ULL << MyParserParser::T__23)
      | (1ULL << MyParserParser::T__24)
      | (1ULL << MyParserParser::T__25)
      | (1ULL << MyParserParser::T__27)
      | (1ULL << MyParserParser::T__28)
      | (1ULL << MyParserParser::T__29)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__32)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FALSE)
      | (1ULL << MyParserParser::FLOAT)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INT)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::LONG)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (MyParserParser::NEW - 65))
      | (1ULL << (MyParserParser::NULLL - 65))
      | (1ULL << (MyParserParser::OBJECT - 65))
      | (1ULL << (MyParserParser::ON - 65))
      | (1ULL << (MyParserParser::ORDERBY - 65))
      | (1ULL << (MyParserParser::OUT - 65))
      | (1ULL << (MyParserParser::PARTIAL - 65))
      | (1ULL << (MyParserParser::REF - 65))
      | (1ULL << (MyParserParser::REMOVE - 65))
      | (1ULL << (MyParserParser::SBYTE - 65))
      | (1ULL << (MyParserParser::SELECT - 65))
      | (1ULL << (MyParserParser::SET - 65))
      | (1ULL << (MyParserParser::SHORT - 65))
      | (1ULL << (MyParserParser::SIZEOF - 65))
      | (1ULL << (MyParserParser::STRING - 65))
      | (1ULL << (MyParserParser::THIS - 65))
      | (1ULL << (MyParserParser::TRUE - 65))
      | (1ULL << (MyParserParser::TYPEOF - 65))
      | (1ULL << (MyParserParser::UINT - 65))
      | (1ULL << (MyParserParser::ULONG - 65))
      | (1ULL << (MyParserParser::UNCHECKED - 65))
      | (1ULL << (MyParserParser::USHORT - 65))
      | (1ULL << (MyParserParser::WHEN - 65))
      | (1ULL << (MyParserParser::WHERE - 65))
      | (1ULL << (MyParserParser::YIELD - 65))
      | (1ULL << (MyParserParser::IDENTIFIER - 65))
      | (1ULL << (MyParserParser::LITERAL_ACCESS - 65))
      | (1ULL << (MyParserParser::INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::HEX_INTEGER_LITERAL - 65))
      | (1ULL << (MyParserParser::REAL_LITERAL - 65))
      | (1ULL << (MyParserParser::CHARACTER_LITERAL - 65))
      | (1ULL << (MyParserParser::REGULAR_STRING - 65))
      | (1ULL << (MyParserParser::VERBATIUM_STRING - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_REGULAR_STRING_START - 65))
      | (1ULL << (MyParserParser::INTERPOLATED_VERBATIUM_STRING_START - 65))
      | (1ULL << (MyParserParser::OPEN_PARENS - 65)))) != 0) || _la == MyParserParser::BANG) {
      setState(2347);
      argument_list();
    }
    setState(2350);
    match(MyParserParser::CLOSE_PARENS);
    setState(2352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyParserParser::OPEN_BRACE) {
      setState(2351);
      object_or_collection_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

MyParserParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyParserParser::IdentifierContext::IDENTIFIER() {
  return getToken(MyParserParser::IDENTIFIER, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ADD() {
  return getToken(MyParserParser::ADD, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ALIAS() {
  return getToken(MyParserParser::ALIAS, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ARGLIST() {
  return getToken(MyParserParser::ARGLIST, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ASCENDING() {
  return getToken(MyParserParser::ASCENDING, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ASYNC() {
  return getToken(MyParserParser::ASYNC, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::AWAIT() {
  return getToken(MyParserParser::AWAIT, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::BY() {
  return getToken(MyParserParser::BY, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::DESCENDING() {
  return getToken(MyParserParser::DESCENDING, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::DYNAMIC() {
  return getToken(MyParserParser::DYNAMIC, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::EQUALS() {
  return getToken(MyParserParser::EQUALS, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::FROM() {
  return getToken(MyParserParser::FROM, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::GET() {
  return getToken(MyParserParser::GET, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::GROUP() {
  return getToken(MyParserParser::GROUP, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::INTO() {
  return getToken(MyParserParser::INTO, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::JOIN() {
  return getToken(MyParserParser::JOIN, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::LET() {
  return getToken(MyParserParser::LET, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::NAMEOF() {
  return getToken(MyParserParser::NAMEOF, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ON() {
  return getToken(MyParserParser::ON, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::ORDERBY() {
  return getToken(MyParserParser::ORDERBY, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::PARTIAL() {
  return getToken(MyParserParser::PARTIAL, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::REMOVE() {
  return getToken(MyParserParser::REMOVE, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::SELECT() {
  return getToken(MyParserParser::SELECT, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::SET() {
  return getToken(MyParserParser::SET, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::WHEN() {
  return getToken(MyParserParser::WHEN, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::WHERE() {
  return getToken(MyParserParser::WHERE, 0);
}

tree::TerminalNode* MyParserParser::IdentifierContext::YIELD() {
  return getToken(MyParserParser::YIELD, 0);
}


size_t MyParserParser::IdentifierContext::getRuleIndex() const {
  return MyParserParser::RuleIdentifier;
}

void MyParserParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void MyParserParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

MyParserParser::IdentifierContext* MyParserParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 398, MyParserParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2354);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyParserParser::T__8)
      | (1ULL << MyParserParser::T__9)
      | (1ULL << MyParserParser::T__10)
      | (1ULL << MyParserParser::T__12)
      | (1ULL << MyParserParser::T__13)
      | (1ULL << MyParserParser::T__14)
      | (1ULL << MyParserParser::T__18)
      | (1ULL << MyParserParser::T__30)
      | (1ULL << MyParserParser::T__33)
      | (1ULL << MyParserParser::EQUALS)
      | (1ULL << MyParserParser::FROM)
      | (1ULL << MyParserParser::GET)
      | (1ULL << MyParserParser::GROUP)
      | (1ULL << MyParserParser::INTO)
      | (1ULL << MyParserParser::JOIN)
      | (1ULL << MyParserParser::LET)
      | (1ULL << MyParserParser::NAMEOF))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MyParserParser::ON - 68))
      | (1ULL << (MyParserParser::ORDERBY - 68))
      | (1ULL << (MyParserParser::PARTIAL - 68))
      | (1ULL << (MyParserParser::REMOVE - 68))
      | (1ULL << (MyParserParser::SELECT - 68))
      | (1ULL << (MyParserParser::SET - 68))
      | (1ULL << (MyParserParser::WHEN - 68))
      | (1ULL << (MyParserParser::WHERE - 68))
      | (1ULL << (MyParserParser::YIELD - 68))
      | (1ULL << (MyParserParser::IDENTIFIER - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MyParserParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 169: return right_arrowSempred(dynamic_cast<Right_arrowContext *>(context), predicateIndex);
    case 170: return right_shiftSempred(dynamic_cast<Right_shiftContext *>(context), predicateIndex);
    case 171: return right_shift_assignmentSempred(dynamic_cast<Right_shift_assignmentContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MyParserParser::right_arrowSempred(Right_arrowContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return (dynamic_cast<Right_arrowContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_arrowContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

bool MyParserParser::right_shiftSempred(Right_shiftContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return (dynamic_cast<Right_shiftContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shiftContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

bool MyParserParser::right_shift_assignmentSempred(Right_shift_assignmentContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MyParserParser::_decisionToDFA;
atn::PredictionContextCache MyParserParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MyParserParser::_atn;
std::vector<uint16_t> MyParserParser::_serializedATN;

std::vector<std::string> MyParserParser::_ruleNames = {
  "compilation_unit", "namespace_or_type_name", "type", "base_type", "simple_type", 
  "numeric_type", "integral_type", "floating_point_type", "class_type", 
  "type_argument_list", "argument_list", "argument", "expression", "non_assignment_expression", 
  "assignment", "assignment_operator", "conditional_expression", "null_coalescing_expression", 
  "conditional_or_expression", "conditional_and_expression", "inclusive_or_expression", 
  "exclusive_or_expression", "and_expression", "equality_expression", "relational_expression", 
  "shift_expression", "additive_expression", "multiplicative_expression", 
  "unary_expression", "primary_expression", "primary_expression_start", 
  "member_access", "bracket_expression", "indexer_argument", "predefined_type", 
  "expression_list", "object_or_collection_initializer", "object_initializer", 
  "member_initializer_list", "member_initializer", "initializer_value", 
  "collection_initializer", "element_initializer", "anonymous_object_initializer", 
  "member_declarator_list", "member_declarator", "unbound_type_name", "generic_dimension_specifier", 
  "isType", "lambda_expression", "anonymous_function_signature", "explicit_anonymous_function_parameter_list", 
  "explicit_anonymous_function_parameter", "implicit_anonymous_function_parameter_list", 
  "anonymous_function_body", "query_expression", "from_clause", "query_body", 
  "query_body_clause", "let_clause", "where_clause", "combined_join_clause", 
  "orderby_clause", "ordering", "select_or_group_clause", "query_continuation", 
  "statement", "embedded_statement", "simple_embedded_statement", "block", 
  "local_variable_declaration", "local_variable_declarator", "local_variable_initializer", 
  "local_constant_declaration", "if_body", "switch_section", "switch_label", 
  "statement_list", "for_initializer", "for_iterator", "catch_clauses", 
  "specific_catch_clause", "general_catch_clause", "exception_filter", "finally_clause", 
  "resource_acquisition", "namespace_declaration", "qualified_identifier", 
  "namespace_body", "extern_alias_directives", "extern_alias_directive", 
  "using_directives", "using_directive", "namespace_member_declarations", 
  "namespace_member_declaration", "type_declaration", "qualified_alias_member", 
  "type_parameter_list", "type_parameter", "class_base", "interface_type_list", 
  "type_parameter_constraints_clauses", "type_parameter_constraints_clause", 
  "type_parameter_constraints", "primary_constraint", "secondary_constraints", 
  "constructor_constraint", "class_body", "class_member_declarations", "class_member_declaration", 
  "all_member_modifiers", "all_member_modifier", "common_member_declaration", 
  "typed_member_declaration", "constant_declarators", "constant_declarator", 
  "variable_declarators", "variable_declarator", "variable_initializer", 
  "return_type", "member_name", "method_body", "formal_parameter_list", 
  "fixed_parameters", "fixed_parameter", "parameter_modifier", "parameter_array", 
  "accessor_declarations", "get_accessor_declaration", "set_accessor_declaration", 
  "accessor_modifier", "accessor_body", "event_accessor_declarations", "add_accessor_declaration", 
  "remove_accessor_declaration", "overloadable_operator", "conversion_operator_declarator", 
  "constructor_initializer", "body", "struct_interfaces", "struct_body", 
  "struct_member_declaration", "array_type", "rank_specifier", "array_initializer", 
  "variant_type_parameter_list", "variant_type_parameter", "variance_annotation", 
  "interface_base", "interface_body", "interface_member_declaration", "interface_accessors", 
  "enum_base", "enum_body", "enum_member_declaration", "global_attribute_section", 
  "global_attribute_target", "attributes", "attribute_section", "attribute_target", 
  "attribute_list", "attribute", "attribute_argument", "pointer_type", "fixed_pointer_declarators", 
  "fixed_pointer_declarator", "fixed_pointer_initializer", "fixed_size_buffer_declarator", 
  "local_variable_initializer_unsafe", "right_arrow", "right_shift", "right_shift_assignment", 
  "literal", "boolean_literal", "string_literal", "interpolated_regular_string", 
  "interpolated_verbatium_string", "interpolated_regular_string_part", "interpolated_verbatium_string_part", 
  "interpolated_string_expression", "keyword", "class_definition", "struct_definition", 
  "interface_definition", "enum_definition", "delegate_definition", "event_declaration", 
  "field_declaration", "property_declaration", "constant_declaration", "indexer_declaration", 
  "destructor_definition", "constructor_declaration", "method_declaration", 
  "method_member_name", "operator_declaration", "arg_declaration", "method_invocation", 
  "object_creation_expression", "identifier"
};

std::vector<std::string> MyParserParser::_literalNames = {
  "", "'\u00EF\u00BB\u00BF'", "'?'", "'*'", "'<'", "','", "'>'", "'#'", 
  "'abstract'", "'add'", "'alias'", "'__arglist'", "'as'", "'ascending'", 
  "'async'", "'await'", "'base'", "'bool'", "'break'", "'by'", "'byte'", 
  "'case'", "'catch'", "'char'", "'checked'", "'class'", "'const'", "'continue'", 
  "'decimal'", "'default'", "'delegate'", "'descending'", "'do'", "'double'", 
  "'dynamic'", "'else'", "'enum'", "'equals'", "'event'", "'explicit'", 
  "'extern'", "'false'", "'finally'", "'fixed'", "'float'", "'for'", "'foreach'", 
  "'from'", "'get'", "'goto'", "'group'", "'if'", "'implicit'", "'in'", 
  "'int'", "'interface'", "'internal'", "'into'", "'is'", "'join'", "'let'", 
  "'lock'", "'long'", "'nameof'", "'namespace'", "'new'", "'null'", "'object'", 
  "'on'", "'operator'", "'orderby'", "'out'", "'override'", "'params'", 
  "'partial'", "'private'", "'protected'", "'public'", "'readonly'", "'ref'", 
  "'remove'", "'return'", "'sbyte'", "'sealed'", "'select'", "'set'", "'short'", 
  "'sizeof'", "'stackalloc'", "'static'", "'string'", "'struct'", "'switch'", 
  "'this'", "'throw'", "'true'", "'try'", "'typeof'", "'uint'", "'ulong'", 
  "'unchecked'", "'unsafe'", "'ushort'", "'using'", "'virtual'", "'void'", 
  "'volatile'", "'when'", "'where'", "'while'", "'yield'", "", "", "", "", 
  "", "", "", "", "", "", "'{'", "'}'", "", "", "'('", "')'", "", "", "", 
  "", "", "", "", "", "", "", "", "", "'!'", "", "", "", "", "", "", "", 
  "", "", "'&&'", "'||'", "", "'=='", "'!='", "", "", "", "", "", "", "", 
  "", "", "", "", "", "'{{'", "", "", "", "", "", "", "", "", "", "", "'define'", 
  "'undef'", "'elif'", "'endif'", "'line'", "", "", "", "", "", "'hidden'", 
  "", "", "", "'}}'"
};

std::vector<std::string> MyParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "EQUALS", "EVENT", "EXPLICIT", "EXTERN", "FALSE", "FINALLY", "FIXED", 
  "FLOAT", "FOR", "FOREACH", "FROM", "GET", "GOTO", "GROUP", "IF", "IMPLICIT", 
  "IN", "INT", "INTERFACE", "INTERNAL", "INTO", "IS", "JOIN", "LET", "LOCK", 
  "LONG", "NAMEOF", "NAMESPACE", "NEW", "NULLL", "OBJECT", "ON", "OPERATOR", 
  "ORDERBY", "OUT", "OVERRIDE", "PARAMS", "PARTIAL", "PRIVATE", "PROTECTED", 
  "PUBLIC", "READONLY", "REF", "REMOVE", "RETURN", "SBYTE", "SEALED", "SELECT", 
  "SET", "SHORT", "SIZEOF", "STACKALLOC", "STATIC", "STRING", "STRUCT", 
  "SWITCH", "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "UNCHECKED", 
  "UNSAFE", "USHORT", "USING", "VIRTUAL", "VOID", "VOLATILE", "WHEN", "WHERE", 
  "WHILE", "YIELD", "IDENTIFIER", "LITERAL_ACCESS", "INTEGER_LITERAL", "HEX_INTEGER_LITERAL", 
  "REAL_LITERAL", "CHARACTER_LITERAL", "REGULAR_STRING", "VERBATIUM_STRING", 
  "INTERPOLATED_REGULAR_STRING_START", "INTERPOLATED_VERBATIUM_STRING_START", 
  "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_PARENS", 
  "CLOSE_PARENS", "DOT", "COMMA", "COLON", "SEMICOLON", "PLUS", "MINUS", 
  "STAR", "DIV", "PERCENT", "AMP", "BITWISE_OR", "CARET", "BANG", "TILDE", 
  "ASSIGNMENT", "LT", "GT", "INTERR", "DOUBLE_COLON", "OP_COALESCING", "OP_INC", 
  "OP_DEC", "OP_AND", "OP_OR", "OP_PTR", "OP_EQ", "OP_NE", "OP_LE", "OP_GE", 
  "OP_ADD_ASSIGNMENT", "OP_SUB_ASSIGNMENT", "OP_MULT_ASSIGNMENT", "OP_DIV_ASSIGNMENT", 
  "OP_MOD_ASSIGNMENT", "OP_AND_ASSIGNMENT", "OP_OR_ASSIGNMENT", "OP_XOR_ASSIGNMENT", 
  "OP_LEFT_SHIFT", "OP_LEFT_SHIFT_ASSIGNMENT", "DOUBLE_CURLY_INSIDE", "OPEN_BRACE_INSIDE", 
  "REGULAR_CHAR_INSIDE", "VERBATIUM_DOUBLE_QUOTE_INSIDE", "DOUBLE_QUOTE_INSIDE", 
  "REGULAR_STRING_INSIDE", "VERBATIUM_INSIDE_STRING", "CLOSE_BRACE_INSIDE", 
  "FORMAT_STRING", "DIRECTIVE_WHITESPACES", "DIGITS", "DEFINE", "UNDEF", 
  "ELIF", "ENDIF", "LINE", "ERROR", "WARNING", "REGION", "ENDREGION", "PRAGMA", 
  "DIRECTIVE_HIDDEN", "CONDITIONAL_SYMBOL", "DIRECTIVE_NEW_LINE", "TEXT", 
  "DOUBLE_CURLY_CLOSE_INSIDE"
};

dfa::Vocabulary MyParserParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MyParserParser::_tokenNames;

MyParserParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xc1, 0x937, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 
    0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 
    0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 
    0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 
    0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 
    0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 
    0xbb, 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 
    0x9, 0xbe, 0x4, 0xbf, 0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 
    0xc1, 0x4, 0xc2, 0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 
    0x4, 0xc5, 0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 
    0xc8, 0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x3, 0x2, 0x5, 0x2, 0x194, 0xa, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x197, 0xa, 0x2, 0x3, 0x2, 0x5, 0x2, 0x19a, 
    0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x19d, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1a0, 
    0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1a3, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x1a9, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1ac, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1b1, 0xa, 0x3, 0x7, 
    0x3, 0x1b3, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1b6, 0xb, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x1bc, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x1bf, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x1c5, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1c9, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1ce, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x1d8, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1de, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1e1, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1e8, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0x1eb, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1f0, 0xa, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x1f3, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x1f9, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x1fe, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x20f, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0x217, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x21c, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x221, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x224, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x229, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x22c, 
    0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x231, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0x234, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x239, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x23c, 0xb, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x241, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x244, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x249, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x24c, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 
    0x1a, 0x255, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x258, 0xb, 0x1a, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x25d, 0xa, 0x1b, 0x3, 0x1b, 
    0x7, 0x1b, 0x260, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x263, 0xb, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x268, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x26b, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
    0x270, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x273, 0xb, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x28d, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x291, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x294, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x5, 0x1f, 0x29c, 0xa, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x29f, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x2a2, 0xb, 0x1f, 0x7, 0x1f, 0x2a4, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x2a7, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x2ac, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2ba, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2c0, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x7, 0x20, 0x2ca, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x2cd, 0xb, 
    0x20, 0x3, 0x20, 0x5, 0x20, 0x2d0, 0xa, 0x20, 0x3, 0x20, 0x6, 0x20, 
    0x2d3, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x2d4, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x2d9, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x2df, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x2e6, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x2f9, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x2fe, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x301, 0xa, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x30e, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x311, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x316, 0xa, 0x20, 0x3, 0x21, 0x5, 0x21, 0x319, 
    0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x31e, 0xa, 0x21, 
    0x3, 0x22, 0x5, 0x22, 0x321, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x327, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x32a, 
    0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x331, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x33a, 0xa, 0x25, 0xc, 0x25, 
    0xe, 0x25, 0x33d, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x341, 
    0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x346, 0xa, 0x27, 
    0x5, 0x27, 0x348, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x7, 0x28, 0x34f, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x352, 
    0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 
    0x29, 0x359, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x5, 0x2a, 0x360, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x7, 0x2b, 0x366, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x369, 
    0xb, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x36c, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x375, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x37a, 0xa, 0x2d, 
    0x5, 0x2d, 0x37c, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x7, 0x2e, 0x383, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x386, 
    0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x38d, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x391, 0xa, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x396, 0xa, 0x30, 
    0x5, 0x30, 0x398, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 
    0x39d, 0xa, 0x30, 0x7, 0x30, 0x39f, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 
    0x3a2, 0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x3a6, 0xa, 0x31, 
    0xc, 0x31, 0xe, 0x31, 0x3a9, 0xb, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x3b0, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 
    0x3b3, 0xb, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3b6, 0xa, 0x32, 0x3, 0x33, 
    0x5, 0x33, 0x3b9, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x3ca, 
    0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x3cf, 0xa, 0x35, 
    0xc, 0x35, 0xe, 0x35, 0x3d2, 0xb, 0x35, 0x3, 0x36, 0x5, 0x36, 0x3d5, 
    0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x7, 0x37, 0x3dd, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x3e0, 0xb, 
    0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3e4, 0xa, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x3eb, 0xa, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x7, 0x3b, 0x3f2, 
    0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x3f5, 0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x5, 0x3b, 0x3f9, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x400, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 
    0x3f, 0x5, 0x3f, 0x40c, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x417, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x7, 0x40, 0x41d, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x420, 0xb, 0x40, 
    0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x424, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x42d, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x439, 
    0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x43e, 0xa, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x442, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x44f, 0xa, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x457, 
    0xa, 0x46, 0xc, 0x46, 0xe, 0x46, 0x45a, 0xb, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x46f, 0xa, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x473, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x5, 0x46, 0x477, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x48d, 0xa, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x492, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x5, 0x46, 0x497, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x49e, 0xa, 0x46, 0x3, 0x46, 0x5, 0x46, 
    0x4a1, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x4b7, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x5, 0x46, 0x4c3, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 
    0x5, 0x47, 0x4c7, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x4cf, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 
    0x4d2, 0xb, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x4d7, 
    0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x4dc, 0xa, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x5, 
    0x4c, 0x4e4, 0xa, 0x4c, 0x3, 0x4d, 0x6, 0x4d, 0x4e7, 0xa, 0x4d, 0xd, 
    0x4d, 0xe, 0x4d, 0x4e8, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x4f3, 0xa, 0x4e, 
    0x3, 0x4f, 0x6, 0x4f, 0x4f6, 0xa, 0x4f, 0xd, 0x4f, 0xe, 0x4f, 0x4f7, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x4fe, 0xa, 0x50, 
    0xc, 0x50, 0xe, 0x50, 0x501, 0xb, 0x50, 0x5, 0x50, 0x503, 0xa, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 0x51, 0x508, 0xa, 0x51, 0xc, 0x51, 
    0xe, 0x51, 0x50b, 0xb, 0x51, 0x3, 0x52, 0x3, 0x52, 0x7, 0x52, 0x50f, 
    0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x512, 0xb, 0x52, 0x3, 0x52, 0x5, 0x52, 
    0x515, 0xa, 0x52, 0x3, 0x52, 0x5, 0x52, 0x518, 0xa, 0x52, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x51e, 0xa, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x522, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 
    0x3, 0x54, 0x5, 0x54, 0x528, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x536, 0xa, 0x57, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x53c, 0xa, 0x58, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 0x541, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 
    0x544, 0xb, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x548, 0xa, 0x5a, 
    0x3, 0x5a, 0x5, 0x5a, 0x54b, 0xa, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x54e, 
    0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x6, 0x5b, 0x553, 0xa, 0x5b, 
    0xd, 0x5b, 0xe, 0x5b, 0x554, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5d, 0x6, 0x5d, 0x55d, 0xa, 0x5d, 0xd, 0x5d, 0xe, 0x5d, 
    0x55e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x570, 0xa, 0x5e, 0x3, 0x5f, 
    0x6, 0x5f, 0x573, 0xa, 0x5f, 0xd, 0x5f, 0xe, 0x5f, 0x574, 0x3, 0x60, 
    0x3, 0x60, 0x5, 0x60, 0x579, 0xa, 0x60, 0x3, 0x61, 0x5, 0x61, 0x57c, 
    0xa, 0x61, 0x3, 0x61, 0x5, 0x61, 0x57f, 0xa, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x586, 0xa, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x58c, 0xa, 0x62, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x592, 0xa, 0x63, 0xc, 0x63, 
    0xe, 0x63, 0x595, 0xb, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x5, 0x64, 
    0x59a, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x7, 0x65, 0x5a2, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x5a5, 
    0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x7, 0x66, 0x5aa, 0xa, 0x66, 
    0xc, 0x66, 0xe, 0x66, 0x5ad, 0xb, 0x66, 0x3, 0x67, 0x6, 0x67, 0x5b0, 
    0xa, 0x67, 0xd, 0x67, 0xe, 0x67, 0x5b1, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 
    0x69, 0x5bd, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x5c1, 0xa, 
    0x69, 0x5, 0x69, 0x5c3, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x5, 0x6a, 0x5c8, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 0x6b, 
    0x5cd, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x5d0, 0xb, 0x6b, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x5d8, 
    0xa, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x6, 0x6e, 0x5dd, 0xa, 0x6e, 
    0xd, 0x6e, 0xe, 0x6e, 0x5de, 0x3, 0x6f, 0x5, 0x6f, 0x5e2, 0xa, 0x6f, 
    0x3, 0x6f, 0x5, 0x6f, 0x5e5, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 
    0x5e9, 0xa, 0x6f, 0x3, 0x70, 0x6, 0x70, 0x5ec, 0xa, 0x70, 0xd, 0x70, 
    0xe, 0x70, 0x5ed, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 
    0x72, 0x5fb, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x605, 0xa, 0x72, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
    0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x611, 0xa, 0x73, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x7, 0x74, 0x616, 0xa, 0x74, 0xc, 0x74, 
    0xe, 0x74, 0x619, 0xb, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 0x622, 0xa, 0x76, 0xc, 0x76, 
    0xe, 0x76, 0x625, 0xb, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 
    0x62a, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x62e, 0xa, 0x78, 
    0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x632, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x638, 0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x63e, 0xa, 0x7c, 0x5, 0x7c, 0x640, 
    0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x7, 0x7d, 0x645, 0xa, 0x7d, 
    0xc, 0x7d, 0xe, 0x7d, 0x648, 0xb, 0x7d, 0x3, 0x7e, 0x5, 0x7e, 0x64b, 
    0xa, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x64e, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x5, 0x7e, 0x652, 0xa, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x5, 0x80, 
    0x657, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 
    0x5, 0x81, 0x65e, 0xa, 0x81, 0x3, 0x81, 0x5, 0x81, 0x661, 0xa, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x666, 0xa, 0x81, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x66b, 0xa, 0x81, 0x5, 0x81, 0x66d, 
    0xa, 0x81, 0x3, 0x82, 0x5, 0x82, 0x670, 0xa, 0x82, 0x3, 0x82, 0x5, 0x82, 
    0x673, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x5, 0x83, 
    0x679, 0xa, 0x83, 0x3, 0x83, 0x5, 0x83, 0x67c, 0xa, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x688, 0xa, 0x84, 0x3, 0x85, 
    0x3, 0x85, 0x5, 0x85, 0x68c, 0xa, 0x85, 0x3, 0x86, 0x5, 0x86, 0x68f, 
    0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 
    0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x699, 0xa, 0x86, 0x3, 0x87, 
    0x5, 0x87, 0x69c, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 
    0x5, 0x88, 0x6a2, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 
    0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 
    0x89, 0x3, 0x89, 0x5, 0x89, 0x6bd, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
    0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 
    0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x6ca, 0xa, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x6d0, 0xa, 0x8c, 0x3, 0x8d, 
    0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x7, 0x8e, 0x6d7, 0xa, 0x8e, 
    0xc, 0x8e, 0xe, 0x8e, 0x6da, 0xb, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 
    0x5, 0x8f, 0x6df, 0xa, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x6e2, 0xa, 0x8f, 
    0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x6, 0x8f, 0x6e8, 0xa, 0x8f, 
    0xd, 0x8f, 0xe, 0x8f, 0x6e9, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x6ee, 
    0xa, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x7, 0x90, 0x6f2, 0xa, 0x90, 0xc, 0x90, 
    0xe, 0x90, 0x6f5, 0xb, 0x90, 0x3, 0x90, 0x6, 0x90, 0x6f8, 0xa, 0x90, 
    0xd, 0x90, 0xe, 0x90, 0x6f9, 0x3, 0x91, 0x3, 0x91, 0x7, 0x91, 0x6fe, 
    0xa, 0x91, 0xc, 0x91, 0xe, 0x91, 0x701, 0xb, 0x91, 0x3, 0x91, 0x3, 0x91, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x7, 0x92, 0x709, 0xa, 0x92, 
    0xc, 0x92, 0xe, 0x92, 0x70c, 0xb, 0x92, 0x3, 0x92, 0x5, 0x92, 0x70f, 
    0xa, 0x92, 0x5, 0x92, 0x711, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x7, 0x93, 0x719, 0xa, 0x93, 0xc, 0x93, 
    0xe, 0x93, 0x71c, 0xb, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x5, 0x94, 
    0x721, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x724, 0xa, 0x94, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
    0x97, 0x3, 0x97, 0x7, 0x97, 0x72f, 0xa, 0x97, 0xc, 0x97, 0xe, 0x97, 
    0x732, 0xb, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x5, 0x98, 0x737, 
    0xa, 0x98, 0x3, 0x98, 0x5, 0x98, 0x73a, 0xa, 0x98, 0x3, 0x98, 0x5, 0x98, 
    0x73d, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x742, 
    0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x746, 0xa, 0x98, 0x3, 0x98, 
    0x3, 0x98, 0x5, 0x98, 0x74a, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 
    0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
    0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 
    0x75b, 0xa, 0x98, 0x3, 0x98, 0x5, 0x98, 0x75e, 0xa, 0x98, 0x3, 0x98, 
    0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x763, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 
    0x5, 0x98, 0x767, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x76b, 
    0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
    0x98, 0x3, 0x98, 0x5, 0x98, 0x774, 0xa, 0x98, 0x3, 0x99, 0x5, 0x99, 
    0x777, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x77c, 
    0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x780, 0xa, 0x99, 0x3, 0x99, 
    0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x785, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 
    0x5, 0x99, 0x789, 0xa, 0x99, 0x5, 0x99, 0x78b, 0xa, 0x99, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x7, 
    0x9b, 0x794, 0xa, 0x9b, 0xc, 0x9b, 0xe, 0x9b, 0x797, 0xb, 0x9b, 0x3, 
    0x9b, 0x5, 0x9b, 0x79a, 0xa, 0x9b, 0x5, 0x9b, 0x79c, 0xa, 0x9b, 0x3, 
    0x9b, 0x3, 0x9b, 0x3, 0x9c, 0x5, 0x9c, 0x7a1, 0xa, 0x9c, 0x3, 0x9c, 
    0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7a6, 0xa, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 
    0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x7ad, 0xa, 0x9d, 0x3, 0x9d, 
    0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x7b3, 0xa, 0x9e, 0x3, 0x9f, 
    0x6, 0x9f, 0x7b6, 0xa, 0x9f, 0xd, 0x9f, 0xe, 0x9f, 0x7b7, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x7be, 0xa, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x5, 0xa0, 0x7c2, 0xa, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 
    0x3, 0xa1, 0x5, 0xa1, 0x7c8, 0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
    0x7, 0xa2, 0x7cd, 0xa, 0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x7d0, 0xb, 0xa2, 
    0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x7, 0xa3, 0x7d7, 
    0xa, 0xa3, 0xc, 0xa3, 0xe, 0xa3, 0x7da, 0xb, 0xa3, 0x5, 0xa3, 0x7dc, 
    0xa, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x7df, 0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa4, 0x5, 0xa4, 0x7e4, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 
    0x3, 0xa5, 0x5, 0xa5, 0x7ea, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x7, 0xa5, 
    0x7ee, 0xa, 0xa5, 0xc, 0xa5, 0xe, 0xa5, 0x7f1, 0xb, 0xa5, 0x3, 0xa5, 
    0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x7f7, 0xa, 0xa5, 0x3, 0xa6, 
    0x3, 0xa6, 0x3, 0xa6, 0x7, 0xa6, 0x7fc, 0xa, 0xa6, 0xc, 0xa6, 0xe, 0xa6, 
    0x7ff, 0xb, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 
    0x5, 0xa8, 0x806, 0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x80a, 
    0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
    0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xab, 
    0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 
    0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 
    0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x82a, 
    0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 
    0xb0, 0x5, 0xb0, 0x832, 0xa, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x7, 0xb1, 
    0x836, 0xa, 0xb1, 0xc, 0xb1, 0xe, 0xb1, 0x839, 0xb, 0xb1, 0x3, 0xb1, 
    0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x7, 0xb2, 0x83f, 0xa, 0xb2, 0xc, 0xb2, 
    0xe, 0xb2, 0x842, 0xb, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 
    0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x84a, 0xa, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 
    0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x850, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 
    0x3, 0xb5, 0x7, 0xb5, 0x855, 0xa, 0xb5, 0xc, 0xb5, 0xe, 0xb5, 0x858, 
    0xb, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x6, 0xb5, 0x85c, 0xa, 0xb5, 0xd, 0xb5, 
    0xe, 0xb5, 0x85d, 0x5, 0xb5, 0x860, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
    0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x867, 0xa, 0xb7, 0x3, 0xb7, 
    0x5, 0xb7, 0x86a, 0xa, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x86d, 0xa, 0xb7, 
    0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x871, 0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 
    0x3, 0xb8, 0x5, 0xb8, 0x876, 0xa, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x879, 
    0xa, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x87c, 0xa, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 
    0x5, 0xb8, 0x880, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 
    0x885, 0xa, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x888, 0xa, 0xb9, 0x3, 0xb9, 
    0x5, 0xb9, 0x88b, 0xa, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x88f, 
    0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 0x894, 0xa, 0xba, 
    0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 0x898, 0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 
    0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x89e, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
    0x5, 0xbb, 0x8a2, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8a6, 
    0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
    0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
    0x5, 0xbc, 0x8b4, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbe, 
    0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
    0xbe, 0x5, 0xbe, 0x8c1, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbe, 0x5, 0xbe, 0x8c7, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
    0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 
    0x3, 0xc0, 0x5, 0xc0, 0x8da, 0xa, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 
    0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 
    0xc2, 0x8e5, 0xa, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x8e9, 0xa, 
    0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x8ef, 
    0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x8f3, 0xa, 0xc3, 0x3, 0xc3, 
    0x3, 0xc3, 0x5, 0xc3, 0x8f7, 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
    0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x8fe, 0xa, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 
    0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x905, 0xa, 0xc4, 0x3, 0xc4, 
    0x5, 0xc4, 0x908, 0xa, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x7, 0xc4, 0x90c, 
    0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 0x90f, 0xb, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x917, 0xa, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 
    0xc5, 0x91f, 0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
    0x5, 0xc6, 0x925, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x929, 
    0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x92f, 
    0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x933, 0xa, 0xc8, 0x3, 0xc9, 
    0x3, 0xc9, 0x3, 0xc9, 0x2, 0x2, 0xca, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 
    0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 
    0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 
    0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 
    0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 
    0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 
    0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 
    0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 
    0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 
    0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 
    0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 
    0x18a, 0x18c, 0x18e, 0x190, 0x2, 0x14, 0xa, 0x2, 0x16, 0x16, 0x19, 0x19, 
    0x38, 0x38, 0x40, 0x40, 0x54, 0x54, 0x58, 0x58, 0x64, 0x65, 0x68, 0x68, 
    0x4, 0x2, 0x23, 0x23, 0x2e, 0x2e, 0x4, 0x2, 0x49, 0x49, 0x51, 0x51, 
    0x3, 0x2, 0x9a, 0x9b, 0x5, 0x2, 0x6, 0x6, 0x8, 0x8, 0x18, 0x19, 0x3, 
    0x2, 0x1b, 0x1c, 0x4, 0x2, 0x5, 0x5, 0x1d, 0x1e, 0x10, 0x2, 0x13, 0x13, 
    0x16, 0x16, 0x19, 0x19, 0x1e, 0x1e, 0x23, 0x23, 0x2e, 0x2e, 0x38, 0x38, 
    0x40, 0x40, 0x45, 0x45, 0x54, 0x54, 0x58, 0x58, 0x5c, 0x5c, 0x64, 0x65, 
    0x68, 0x68, 0x4, 0x2, 0xf, 0xf, 0x21, 0x21, 0xe, 0x2, 0xa, 0xa, 0x10, 
    0x10, 0x2a, 0x2a, 0x3a, 0x3a, 0x43, 0x43, 0x4a, 0x4a, 0x4c, 0x50, 0x55, 
    0x55, 0x5b, 0x5b, 0x67, 0x67, 0x6a, 0x6a, 0x6c, 0x6c, 0x5, 0x2, 0x49, 
    0x49, 0x51, 0x51, 0x5f, 0x5f, 0x4, 0x2, 0x29, 0x29, 0x36, 0x36, 0x4, 
    0x2, 0x12, 0x12, 0x5f, 0x5f, 0x3, 0x2, 0x4, 0x5, 0x4, 0x2, 0x37, 0x37, 
    0x49, 0x49, 0x4, 0x2, 0x2b, 0x2b, 0x61, 0x61, 0x14, 0x2, 0xa, 0xa, 0xe, 
    0xe, 0x12, 0x14, 0x16, 0x20, 0x22, 0x23, 0x25, 0x26, 0x28, 0x30, 0x33, 
    0x33, 0x35, 0x3a, 0x3c, 0x3c, 0x3f, 0x40, 0x42, 0x45, 0x47, 0x47, 0x49, 
    0x4b, 0x4d, 0x51, 0x53, 0x55, 0x58, 0x6c, 0x6f, 0x6f, 0x14, 0x2, 0xb, 
    0xd, 0xf, 0x11, 0x15, 0x15, 0x21, 0x21, 0x24, 0x24, 0x27, 0x27, 0x31, 
    0x32, 0x34, 0x34, 0x3b, 0x3b, 0x3d, 0x3e, 0x41, 0x41, 0x46, 0x46, 0x48, 
    0x48, 0x4c, 0x4c, 0x52, 0x52, 0x56, 0x57, 0x6d, 0x6e, 0x70, 0x71, 0x2, 
    0xa15, 0x2, 0x193, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1d7, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1ff, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x210, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x26, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x225, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x235, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x245, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x34, 0x259, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x264, 0x3, 0x2, 0x2, 0x2, 0x38, 0x26c, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x315, 0x3, 0x2, 0x2, 0x2, 0x40, 0x318, 0x3, 0x2, 0x2, 0x2, 0x42, 0x320, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x330, 0x3, 0x2, 0x2, 0x2, 0x46, 0x334, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x336, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x340, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x342, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x34b, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x358, 0x3, 0x2, 0x2, 0x2, 0x52, 0x35f, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x361, 0x3, 0x2, 0x2, 0x2, 0x56, 0x374, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x376, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x38c, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x3a3, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x64, 0x3b8, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x68, 0x3cb, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x3d9, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x70, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x74, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x76, 0x3ff, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x401, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x406, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x409, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x418, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x421, 0x3, 0x2, 0x2, 0x2, 0x82, 0x42c, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x86, 0x43d, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x441, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x4c4, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x90, 0x4d3, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x94, 0x4dd, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x98, 0x4e6, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x4f5, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x502, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x504, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x517, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x519, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0x525, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x52b, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x530, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0x535, 0x3, 0x2, 0x2, 0x2, 0xae, 0x537, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0x53d, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x545, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0x552, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x556, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0x55c, 0x3, 0x2, 0x2, 0x2, 0xba, 0x56f, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0x572, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x578, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0x57b, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x587, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x58d, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0x599, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x59d, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5af, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x5c2, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x5c9, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0x5dc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0xde, 0x5eb, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x604, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0x606, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x612, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0x61a, 0x3, 0x2, 0x2, 0x2, 0xea, 0x61e, 0x3, 0x2, 0x2, 
    0x2, 0xec, 0x626, 0x3, 0x2, 0x2, 0x2, 0xee, 0x62d, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0x631, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x633, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0x637, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x63f, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x641, 
    0x3, 0x2, 0x2, 0x2, 0xfa, 0x651, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x653, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0x656, 0x3, 0x2, 0x2, 0x2, 0x100, 0x65d, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x104, 0x678, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x687, 0x3, 0x2, 0x2, 0x2, 0x108, 0x68b, 0x3, 0x2, 
    0x2, 0x2, 0x10a, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x69b, 0x3, 0x2, 
    0x2, 0x2, 0x10e, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x110, 0x6bc, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x114, 0x6c5, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x118, 0x6d1, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x6d4, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x6de, 0x3, 0x2, 
    0x2, 0x2, 0x11e, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x120, 0x6fb, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x704, 0x3, 0x2, 0x2, 0x2, 0x124, 0x714, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x720, 0x3, 0x2, 0x2, 0x2, 0x128, 0x727, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x729, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x72c, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x736, 0x3, 0x2, 0x2, 0x2, 0x130, 0x776, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x134, 0x78f, 0x3, 0x2, 
    0x2, 0x2, 0x136, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x138, 0x7a7, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x7b5, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x140, 0x7c7, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0x144, 0x7d1, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x148, 0x7f6, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x800, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x809, 0x3, 0x2, 0x2, 0x2, 0x150, 0x80b, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x810, 0x3, 0x2, 0x2, 0x2, 0x154, 0x816, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x81e, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x829, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x82b, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x831, 0x3, 0x2, 0x2, 0x2, 0x160, 0x833, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x164, 0x849, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x84f, 0x3, 0x2, 0x2, 0x2, 0x168, 0x851, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x861, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x863, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x872, 0x3, 0x2, 0x2, 0x2, 0x170, 0x881, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x890, 0x3, 0x2, 0x2, 0x2, 0x174, 0x899, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x178, 0x8b5, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x8c8, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x180, 0x8db, 0x3, 0x2, 
    0x2, 0x2, 0x182, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x184, 0x8ec, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x904, 0x3, 0x2, 0x2, 0x2, 0x188, 0x910, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x920, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x926, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x190, 0x934, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x194, 0x7, 0x3, 0x2, 0x2, 0x193, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x197, 0x5, 0xb4, 0x5b, 0x2, 0x196, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x19a, 0x5, 0xb8, 0x5d, 0x2, 0x199, 0x198, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x19d, 0x5, 0x138, 0x9d, 0x2, 0x19c, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x5, 0xbc, 
    0x5f, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 
    0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x2, 
    0x2, 0x3, 0x1a5, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x5, 0x190, 
    0xc9, 0x2, 0x1a7, 0x1a9, 0x5, 0x14, 0xb, 0x2, 0x1a8, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ac, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x1ac, 0x5, 0xc2, 0x62, 0x2, 0x1ab, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x3, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x190, 
    0xc9, 0x2, 0x1af, 0x1b1, 0x5, 0x14, 0xb, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1bd, 0x5, 0x8, 0x5, 0x2, 0x1b8, 0x1bc, 0x7, 0x4, 0x2, 
    0x2, 0x1b9, 0x1bc, 0x5, 0x120, 0x91, 0x2, 0x1ba, 0x1bc, 0x7, 0x5, 0x2, 
    0x2, 0x1bb, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1bb, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1be, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 
    0x1c0, 0x1c5, 0x5, 0xa, 0x6, 0x2, 0x1c1, 0x1c5, 0x5, 0x12, 0xa, 0x2, 
    0x1c2, 0x1c3, 0x7, 0x6b, 0x2, 0x2, 0x1c3, 0x1c5, 0x7, 0x5, 0x2, 0x2, 
    0x1c4, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
    0x1c9, 0x5, 0xc, 0x7, 0x2, 0x1c7, 0x1c9, 0x7, 0x13, 0x2, 0x2, 0x1c8, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1ce, 0x5, 0xe, 0x8, 0x2, 0x1cb, 0x1ce, 
    0x5, 0x10, 0x9, 0x2, 0x1cc, 0x1ce, 0x7, 0x1e, 0x2, 0x2, 0x1cd, 0x1ca, 
    0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cc, 
    0x3, 0x2, 0x2, 0x2, 0x1ce, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x9, 
    0x2, 0x2, 0x2, 0x1d0, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x9, 0x3, 
    0x2, 0x2, 0x1d2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d8, 0x5, 0x4, 0x3, 
    0x2, 0x1d4, 0x1d8, 0x7, 0x45, 0x2, 0x2, 0x1d5, 0x1d8, 0x7, 0x24, 0x2, 
    0x2, 0x1d6, 0x1d8, 0x7, 0x5c, 0x2, 0x2, 0x1d7, 0x1d3, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1da, 0x7, 0x6, 0x2, 0x2, 0x1da, 0x1df, 0x5, 0x6, 0x4, 0x2, 
    0x1db, 0x1dc, 0x7, 0x7, 0x2, 0x2, 0x1dc, 0x1de, 0x5, 0x6, 0x4, 0x2, 
    0x1dd, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1e3, 0x7, 0x8, 0x2, 0x2, 0x1e3, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e9, 0x5, 0x18, 0xd, 0x2, 0x1e5, 0x1e6, 0x7, 0x7, 0x2, 0x2, 0x1e6, 
    0x1e8, 0x5, 0x18, 0xd, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e9, 
    0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x5, 0x190, 0xc9, 0x2, 0x1ed, 0x1ee, 
    0x7, 0x9, 0x2, 0x2, 0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ec, 
    0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f2, 
    0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 0x9, 0x4, 0x2, 0x2, 0x1f2, 0x1f1, 
    0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 
    0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x5, 0x1a, 0xe, 0x2, 0x1f5, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x5, 0x1e, 0x10, 0x2, 0x1f7, 0x1f9, 
    0x5, 0x1c, 0xf, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f7, 
    0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x5, 
    0x64, 0x33, 0x2, 0x1fb, 0x1fe, 0x5, 0x70, 0x39, 0x2, 0x1fc, 0x1fe, 0x5, 
    0x22, 0x12, 0x2, 0x1fd, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 0x3, 
    0x2, 0x2, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x1ff, 0x200, 0x5, 0x3a, 0x1e, 0x2, 0x200, 0x201, 0x5, 0x20, 
    0x11, 0x2, 0x201, 0x202, 0x5, 0x1a, 0xe, 0x2, 0x202, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x20f, 0x7, 0xa, 0x2, 0x2, 0x204, 0x20f, 0x7, 0xb, 
    0x2, 0x2, 0x205, 0x20f, 0x7, 0xc, 0x2, 0x2, 0x206, 0x20f, 0x7, 0xd, 
    0x2, 0x2, 0x207, 0x20f, 0x7, 0xe, 0x2, 0x2, 0x208, 0x20f, 0x7, 0xf, 
    0x2, 0x2, 0x209, 0x20f, 0x7, 0x10, 0x2, 0x2, 0x20a, 0x20f, 0x7, 0x11, 
    0x2, 0x2, 0x20b, 0x20f, 0x7, 0x12, 0x2, 0x2, 0x20c, 0x20f, 0x7, 0x13, 
    0x2, 0x2, 0x20d, 0x20f, 0x5, 0x158, 0xad, 0x2, 0x20e, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x204, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x206, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x207, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x210, 0x216, 0x5, 0x24, 
    0x13, 0x2, 0x211, 0x212, 0x7, 0x4, 0x2, 0x2, 0x212, 0x213, 0x5, 0x1a, 
    0xe, 0x2, 0x213, 0x214, 0x7, 0x9, 0x2, 0x2, 0x214, 0x215, 0x5, 0x1a, 
    0xe, 0x2, 0x215, 0x217, 0x3, 0x2, 0x2, 0x2, 0x216, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x21b, 0x5, 0x26, 0x14, 0x2, 0x219, 0x21a, 0x7, 0x14, 0x2, 
    0x2, 0x21a, 0x21c, 0x5, 0x24, 0x13, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 
    0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x21d, 0x222, 0x5, 0x28, 0x15, 0x2, 0x21e, 0x21f, 0x7, 0x98, 0x2, 0x2, 
    0x21f, 0x221, 0x5, 0x28, 0x15, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 
    0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 
    0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x27, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x22a, 0x5, 0x2a, 0x16, 0x2, 0x226, 
    0x227, 0x7, 0x97, 0x2, 0x2, 0x227, 0x229, 0x5, 0x2a, 0x16, 0x2, 0x228, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x232, 
    0x5, 0x2c, 0x17, 0x2, 0x22e, 0x22f, 0x7, 0x15, 0x2, 0x2, 0x22f, 0x231, 
    0x5, 0x2c, 0x17, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x234, 
    0x3, 0x2, 0x2, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 
    0x3, 0x2, 0x2, 0x2, 0x233, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x234, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x235, 0x23a, 0x5, 0x2e, 0x18, 0x2, 0x236, 0x237, 0x7, 
    0x16, 0x2, 0x2, 0x237, 0x239, 0x5, 0x2e, 0x18, 0x2, 0x238, 0x236, 0x3, 
    0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x242, 0x5, 0x30, 
    0x19, 0x2, 0x23e, 0x23f, 0x7, 0x17, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x30, 
    0x19, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x245, 0x24a, 0x5, 0x32, 0x1a, 0x2, 0x246, 0x247, 0x9, 0x5, 0x2, 
    0x2, 0x247, 0x249, 0x5, 0x32, 0x1a, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x249, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 
    0x2, 0x24a, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x256, 0x5, 0x34, 0x1b, 0x2, 
    0x24e, 0x24f, 0x9, 0x6, 0x2, 0x2, 0x24f, 0x255, 0x5, 0x34, 0x1b, 0x2, 
    0x250, 0x251, 0x7, 0x3c, 0x2, 0x2, 0x251, 0x255, 0x5, 0x62, 0x32, 0x2, 
    0x252, 0x253, 0x7, 0xe, 0x2, 0x2, 0x253, 0x255, 0x5, 0x6, 0x4, 0x2, 
    0x254, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x254, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x3, 0x2, 0x2, 0x2, 
    0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 
    0x257, 0x33, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x261, 0x5, 0x36, 0x1c, 0x2, 0x25a, 0x25d, 0x7, 0x1a, 0x2, 0x2, 0x25b, 
    0x25d, 0x5, 0x156, 0xac, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x260, 0x5, 0x36, 0x1c, 0x2, 0x25f, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x263, 0x3, 0x2, 0x2, 0x2, 0x261, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x35, 0x3, 0x2, 0x2, 0x2, 0x263, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x269, 0x5, 0x38, 0x1d, 0x2, 0x265, 0x266, 
    0x9, 0x7, 0x2, 0x2, 0x266, 0x268, 0x5, 0x38, 0x1d, 0x2, 0x267, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x268, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 
    0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x271, 0x5, 
    0x3a, 0x1e, 0x2, 0x26d, 0x26e, 0x9, 0x8, 0x2, 0x2, 0x26e, 0x270, 0x5, 
    0x3a, 0x1e, 0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x270, 0x273, 0x3, 
    0x2, 0x2, 0x2, 0x271, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 
    0x2, 0x2, 0x2, 0x272, 0x39, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x28d, 0x5, 0x3c, 0x1f, 0x2, 0x275, 0x276, 0x7, 0x1b, 
    0x2, 0x2, 0x276, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x277, 0x278, 0x7, 0x1c, 
    0x2, 0x2, 0x278, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x279, 0x27a, 0x7, 0x8d, 
    0x2, 0x2, 0x27a, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x27b, 0x27c, 0x7, 0x1f, 
    0x2, 0x2, 0x27c, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x27d, 0x27e, 0x7, 0x20, 
    0x2, 0x2, 0x27e, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x27f, 0x280, 0x7, 0x21, 
    0x2, 0x2, 0x280, 0x28d, 0x5, 0x3a, 0x1e, 0x2, 0x281, 0x282, 0x7, 0x7f, 
    0x2, 0x2, 0x282, 0x283, 0x5, 0x6, 0x4, 0x2, 0x283, 0x284, 0x7, 0x80, 
    0x2, 0x2, 0x284, 0x285, 0x5, 0x3a, 0x1e, 0x2, 0x285, 0x28d, 0x3, 0x2, 
    0x2, 0x2, 0x286, 0x287, 0x7, 0x11, 0x2, 0x2, 0x287, 0x28d, 0x5, 0x3a, 
    0x1e, 0x2, 0x288, 0x289, 0x7, 0x17, 0x2, 0x2, 0x289, 0x28d, 0x5, 0x3a, 
    0x1e, 0x2, 0x28a, 0x28b, 0x7, 0x5, 0x2, 0x2, 0x28b, 0x28d, 0x5, 0x3a, 
    0x1e, 0x2, 0x28c, 0x274, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x277, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x286, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x28e, 0x292, 0x5, 0x3e, 0x20, 0x2, 0x28f, 0x291, 0x5, 0x42, 0x22, 
    0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x294, 0x3, 0x2, 0x2, 
    0x2, 0x292, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 
    0x2, 0x293, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x294, 0x292, 0x3, 0x2, 0x2, 
    0x2, 0x295, 0x29c, 0x5, 0x40, 0x21, 0x2, 0x296, 0x29c, 0x5, 0x18c, 0xc7, 
    0x2, 0x297, 0x29c, 0x7, 0x20, 0x2, 0x2, 0x298, 0x29c, 0x7, 0x21, 0x2, 
    0x2, 0x299, 0x29a, 0x7, 0x22, 0x2, 0x2, 0x29a, 0x29c, 0x5, 0x190, 0xc9, 
    0x2, 0x29b, 0x295, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x296, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x298, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x2a0, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x29f, 0x5, 0x42, 0x22, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 
    0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a4, 0x3, 0x2, 0x2, 
    0x2, 0x2a2, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x2a4, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x316, 0x5, 0x15a, 0xae, 0x2, 
    0x2a9, 0x2ab, 0x5, 0x190, 0xc9, 0x2, 0x2aa, 0x2ac, 0x5, 0x14, 0xb, 0x2, 
    0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x316, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0x7f, 0x2, 0x2, 
    0x2ae, 0x2af, 0x5, 0x1a, 0xe, 0x2, 0x2af, 0x2b0, 0x7, 0x80, 0x2, 0x2, 
    0x2b0, 0x316, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x316, 0x5, 0x46, 0x24, 0x2, 
    0x2b2, 0x316, 0x5, 0xc2, 0x62, 0x2, 0x2b3, 0x316, 0x7, 0x72, 0x2, 0x2, 
    0x2b4, 0x316, 0x7, 0x5f, 0x2, 0x2, 0x2b5, 0x2bf, 0x7, 0x12, 0x2, 0x2, 
    0x2b6, 0x2b7, 0x7, 0x3, 0x2, 0x2, 0x2b7, 0x2b9, 0x5, 0x190, 0xc9, 0x2, 
    0x2b8, 0x2ba, 0x5, 0x14, 0xb, 0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
    0x2bb, 0x2bc, 0x7, 0x23, 0x2, 0x2, 0x2bc, 0x2bd, 0x5, 0x48, 0x25, 0x2, 
    0x2bd, 0x2be, 0x7, 0x24, 0x2, 0x2, 0x2be, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
    0x2bf, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bb, 0x3, 0x2, 0x2, 0x2, 
    0x2c0, 0x316, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2de, 0x7, 0x43, 0x2, 0x2, 
    0x2c2, 0x2d8, 0x5, 0x6, 0x4, 0x2, 0x2c3, 0x2d9, 0x5, 0x18e, 0xc8, 0x2, 
    0x2c4, 0x2d9, 0x5, 0x4a, 0x26, 0x2, 0x2c5, 0x2c6, 0x7, 0x23, 0x2, 0x2, 
    0x2c6, 0x2c7, 0x5, 0x48, 0x25, 0x2, 0x2c7, 0x2cb, 0x7, 0x24, 0x2, 0x2, 
    0x2c8, 0x2ca, 0x5, 0x120, 0x91, 0x2, 0x2c9, 0x2c8, 0x3, 0x2, 0x2, 0x2, 
    0x2ca, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d0, 0x5, 0x122, 0x92, 0x2, 
    0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 
    0x2d0, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d3, 0x5, 0x120, 0x91, 0x2, 
    0x2d2, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 
    0x2d4, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 
    0x2d5, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0x122, 0x92, 0x2, 
    0x2d7, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x2d8, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2c5, 0x3, 0x2, 0x2, 0x2, 
    0x2d8, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2df, 0x3, 0x2, 0x2, 0x2, 
    0x2da, 0x2df, 0x5, 0x58, 0x2d, 0x2, 0x2db, 0x2dc, 0x5, 0x120, 0x91, 
    0x2, 0x2dc, 0x2dd, 0x5, 0x122, 0x92, 0x2, 0x2dd, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2de, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2de, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x316, 0x3, 0x2, 0x2, 
    0x2, 0x2e0, 0x2e1, 0x7, 0x63, 0x2, 0x2, 0x2e1, 0x2e5, 0x7, 0x7f, 0x2, 
    0x2, 0x2e2, 0x2e6, 0x5, 0x5e, 0x30, 0x2, 0x2e3, 0x2e6, 0x5, 0x6, 0x4, 
    0x2, 0x2e4, 0x2e6, 0x7, 0x6b, 0x2, 0x2, 0x2e5, 0x2e2, 0x3, 0x2, 0x2, 
    0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e6, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x316, 0x7, 0x80, 0x2, 
    0x2, 0x2e8, 0x2e9, 0x7, 0x1a, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 0x7f, 0x2, 
    0x2, 0x2ea, 0x2eb, 0x5, 0x1a, 0xe, 0x2, 0x2eb, 0x2ec, 0x7, 0x80, 0x2, 
    0x2, 0x2ec, 0x316, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x66, 0x2, 
    0x2, 0x2ee, 0x2ef, 0x7, 0x7f, 0x2, 0x2, 0x2ef, 0x2f0, 0x5, 0x1a, 0xe, 
    0x2, 0x2f0, 0x2f1, 0x7, 0x80, 0x2, 0x2, 0x2f1, 0x316, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x2f3, 0x7, 0x1f, 0x2, 0x2, 0x2f3, 0x2f4, 0x7, 0x7f, 0x2, 
    0x2, 0x2f4, 0x2f5, 0x5, 0x6, 0x4, 0x2, 0x2f5, 0x2f6, 0x7, 0x80, 0x2, 
    0x2, 0x2f6, 0x316, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 0x7, 0x10, 0x2, 
    0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 0x2, 
    0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x300, 0x7, 0x20, 0x2, 
    0x2, 0x2fb, 0x2fd, 0x7, 0x7f, 0x2, 0x2, 0x2fc, 0x2fe, 0x5, 0x68, 0x35, 
    0x2, 0x2fd, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 
    0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x301, 0x7, 0x80, 0x2, 
    0x2, 0x300, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 0x2, 0x2, 
    0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 0x316, 0x5, 0x8c, 0x47, 
    0x2, 0x303, 0x304, 0x7, 0x59, 0x2, 0x2, 0x304, 0x305, 0x7, 0x7f, 0x2, 
    0x2, 0x305, 0x306, 0x5, 0x6, 0x4, 0x2, 0x306, 0x307, 0x7, 0x80, 0x2, 
    0x2, 0x307, 0x316, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x7, 0x41, 0x2, 
    0x2, 0x309, 0x30f, 0x7, 0x7f, 0x2, 0x2, 0x30a, 0x30b, 0x5, 0x190, 0xc9, 
    0x2, 0x30b, 0x30c, 0x7, 0x3, 0x2, 0x2, 0x30c, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x312, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0x312, 0x313, 0x5, 0x190, 0xc9, 0x2, 0x313, 0x314, 0x7, 0x80, 0x2, 
    0x2, 0x314, 0x316, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2a8, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2ad, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2b2, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2b4, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2c1, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2e8, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x315, 0x2f2, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x315, 0x303, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x308, 0x3, 0x2, 0x2, 0x2, 0x316, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x317, 0x319, 0x7, 0x4, 0x2, 0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x3, 0x2, 0x2, 0x2, 
    0x31a, 0x31b, 0x7, 0x3, 0x2, 0x2, 0x31b, 0x31d, 0x5, 0x190, 0xc9, 0x2, 
    0x31c, 0x31e, 0x5, 0x14, 0xb, 0x2, 0x31d, 0x31c, 0x3, 0x2, 0x2, 0x2, 
    0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x31f, 
    0x321, 0x7, 0x4, 0x2, 0x2, 0x320, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x320, 
    0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 
    0x323, 0x7, 0x23, 0x2, 0x2, 0x323, 0x328, 0x5, 0x44, 0x23, 0x2, 0x324, 
    0x325, 0x7, 0x7, 0x2, 0x2, 0x325, 0x327, 0x5, 0x44, 0x23, 0x2, 0x326, 
    0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x328, 
    0x326, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x3, 0x2, 0x2, 0x2, 0x329, 
    0x32b, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32c, 0x7, 0x24, 0x2, 0x2, 0x32c, 0x43, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x32e, 0x5, 0x190, 0xc9, 0x2, 0x32e, 0x32f, 0x7, 0x9, 0x2, 0x2, 0x32f, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 0x3, 0x2, 0x2, 0x2, 0x332, 
    0x333, 0x5, 0x1a, 0xe, 0x2, 0x333, 0x45, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x335, 0x9, 0x9, 0x2, 0x2, 0x335, 0x47, 0x3, 0x2, 0x2, 0x2, 0x336, 0x33b, 
    0x5, 0x1a, 0xe, 0x2, 0x337, 0x338, 0x7, 0x7, 0x2, 0x2, 0x338, 0x33a, 
    0x5, 0x1a, 0xe, 0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33d, 
    0x3, 0x2, 0x2, 0x2, 0x33b, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 
    0x3, 0x2, 0x2, 0x2, 0x33c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33b, 0x3, 
    0x2, 0x2, 0x2, 0x33e, 0x341, 0x5, 0x4c, 0x27, 0x2, 0x33f, 0x341, 0x5, 
    0x54, 0x2b, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33f, 0x3, 
    0x2, 0x2, 0x2, 0x341, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x342, 0x347, 0x7, 0x7b, 
    0x2, 0x2, 0x343, 0x345, 0x5, 0x4e, 0x28, 0x2, 0x344, 0x346, 0x7, 0x7, 
    0x2, 0x2, 0x345, 0x344, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x3, 0x2, 
    0x2, 0x2, 0x346, 0x348, 0x3, 0x2, 0x2, 0x2, 0x347, 0x343, 0x3, 0x2, 
    0x2, 0x2, 0x347, 0x348, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x3, 0x2, 
    0x2, 0x2, 0x349, 0x34a, 0x7, 0x7c, 0x2, 0x2, 0x34a, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x34b, 0x350, 0x5, 0x50, 0x29, 0x2, 0x34c, 0x34d, 0x7, 0x7, 
    0x2, 0x2, 0x34d, 0x34f, 0x5, 0x50, 0x29, 0x2, 0x34e, 0x34c, 0x3, 0x2, 
    0x2, 0x2, 0x34f, 0x352, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x352, 0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 0x359, 0x5, 0x190, 0xc9, 
    0x2, 0x354, 0x355, 0x7, 0x23, 0x2, 0x2, 0x355, 0x356, 0x5, 0x1a, 0xe, 
    0x2, 0x356, 0x357, 0x7, 0x24, 0x2, 0x2, 0x357, 0x359, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0x353, 0x3, 0x2, 0x2, 0x2, 0x358, 0x354, 0x3, 0x2, 0x2, 
    0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0xa, 0x2, 
    0x2, 0x35b, 0x35c, 0x5, 0x52, 0x2a, 0x2, 0x35c, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x35d, 0x360, 0x5, 0x1a, 0xe, 0x2, 0x35e, 0x360, 0x5, 0x4a, 0x26, 
    0x2, 0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x35e, 0x3, 0x2, 0x2, 
    0x2, 0x360, 0x53, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x7, 0x7b, 0x2, 
    0x2, 0x362, 0x367, 0x5, 0x56, 0x2c, 0x2, 0x363, 0x364, 0x7, 0x7, 0x2, 
    0x2, 0x364, 0x366, 0x5, 0x56, 0x2c, 0x2, 0x365, 0x363, 0x3, 0x2, 0x2, 
    0x2, 0x366, 0x369, 0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 
    0x2, 0x367, 0x368, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36b, 0x3, 0x2, 0x2, 
    0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36c, 0x7, 0x7, 0x2, 
    0x2, 0x36b, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x3, 0x2, 0x2, 
    0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x7c, 0x2, 
    0x2, 0x36e, 0x55, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x375, 0x5, 0x1c, 0xf, 
    0x2, 0x370, 0x371, 0x7, 0x7b, 0x2, 0x2, 0x371, 0x372, 0x5, 0x48, 0x25, 
    0x2, 0x372, 0x373, 0x7, 0x7c, 0x2, 0x2, 0x373, 0x375, 0x3, 0x2, 0x2, 
    0x2, 0x374, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x374, 0x370, 0x3, 0x2, 0x2, 
    0x2, 0x375, 0x57, 0x3, 0x2, 0x2, 0x2, 0x376, 0x37b, 0x7, 0x7b, 0x2, 
    0x2, 0x377, 0x379, 0x5, 0x5a, 0x2e, 0x2, 0x378, 0x37a, 0x7, 0x7, 0x2, 
    0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x377, 0x3, 0x2, 0x2, 
    0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 
    0x2, 0x37d, 0x37e, 0x7, 0x7c, 0x2, 0x2, 0x37e, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x37f, 0x384, 0x5, 0x5c, 0x2f, 0x2, 0x380, 0x381, 0x7, 0x7, 0x2, 
    0x2, 0x381, 0x383, 0x5, 0x5c, 0x2f, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 
    0x2, 0x383, 0x386, 0x3, 0x2, 0x2, 0x2, 0x384, 0x382, 0x3, 0x2, 0x2, 
    0x2, 0x384, 0x385, 0x3, 0x2, 0x2, 0x2, 0x385, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 0x387, 0x38d, 0x5, 0x3c, 0x1f, 0x2, 
    0x388, 0x389, 0x5, 0x190, 0xc9, 0x2, 0x389, 0x38a, 0x7, 0xa, 0x2, 0x2, 
    0x38a, 0x38b, 0x5, 0x1a, 0xe, 0x2, 0x38b, 0x38d, 0x3, 0x2, 0x2, 0x2, 
    0x38c, 0x387, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x388, 0x3, 0x2, 0x2, 0x2, 
    0x38d, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x397, 0x5, 0x190, 0xc9, 0x2, 
    0x38f, 0x391, 0x5, 0x60, 0x31, 0x2, 0x390, 0x38f, 0x3, 0x2, 0x2, 0x2, 
    0x390, 0x391, 0x3, 0x2, 0x2, 0x2, 0x391, 0x398, 0x3, 0x2, 0x2, 0x2, 
    0x392, 0x393, 0x7, 0x25, 0x2, 0x2, 0x393, 0x395, 0x5, 0x190, 0xc9, 0x2, 
    0x394, 0x396, 0x5, 0x60, 0x31, 0x2, 0x395, 0x394, 0x3, 0x2, 0x2, 0x2, 
    0x395, 0x396, 0x3, 0x2, 0x2, 0x2, 0x396, 0x398, 0x3, 0x2, 0x2, 0x2, 
    0x397, 0x390, 0x3, 0x2, 0x2, 0x2, 0x397, 0x392, 0x3, 0x2, 0x2, 0x2, 
    0x398, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x3, 0x2, 0x2, 
    0x39a, 0x39c, 0x5, 0x190, 0xc9, 0x2, 0x39b, 0x39d, 0x5, 0x60, 0x31, 
    0x2, 0x39c, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x39d, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x399, 0x3, 0x2, 0x2, 
    0x2, 0x39f, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39e, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x3a2, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a7, 0x7, 0x6, 0x2, 0x2, 
    0x3a4, 0x3a6, 0x7, 0x7, 0x2, 0x2, 0x3a5, 0x3a4, 0x3, 0x2, 0x2, 0x2, 
    0x3a6, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a5, 0x3, 0x2, 0x2, 0x2, 
    0x3a7, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3a9, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x8, 0x2, 0x2, 
    0x3ab, 0x61, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3b1, 0x5, 0x8, 0x5, 0x2, 0x3ad, 
    0x3b0, 0x5, 0x120, 0x91, 0x2, 0x3ae, 0x3b0, 0x7, 0x5, 0x2, 0x2, 0x3af, 
    0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b0, 
    0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 
    0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b3, 
    0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x7, 0x4, 0x2, 0x2, 0x3b5, 
    0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b9, 0x7, 0x10, 0x2, 0x2, 0x3b8, 
    0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
    0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 0x66, 0x34, 0x2, 0x3bb, 
    0x3bc, 0x5, 0x154, 0xab, 0x2, 0x3bc, 0x3bd, 0x5, 0x6e, 0x38, 0x2, 0x3bd, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x7f, 0x2, 0x2, 0x3bf, 
    0x3ca, 0x7, 0x80, 0x2, 0x2, 0x3c0, 0x3c1, 0x7, 0x7f, 0x2, 0x2, 0x3c1, 
    0x3c2, 0x5, 0x68, 0x35, 0x2, 0x3c2, 0x3c3, 0x7, 0x80, 0x2, 0x2, 0x3c3, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x7f, 0x2, 0x2, 0x3c5, 
    0x3c6, 0x5, 0x6c, 0x37, 0x2, 0x3c6, 0x3c7, 0x7, 0x80, 0x2, 0x2, 0x3c7, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3ca, 0x5, 0x190, 0xc9, 0x2, 0x3c9, 
    0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c9, 
    0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3d0, 0x5, 0x6a, 0x36, 0x2, 0x3cc, 
    0x3cd, 0x7, 0x7, 0x2, 0x2, 0x3cd, 0x3cf, 0x5, 0x6a, 0x36, 0x2, 0x3ce, 
    0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d0, 
    0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d1, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d5, 
    0x9, 0x4, 0x2, 0x2, 0x3d4, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 
    0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 
    0x5, 0x6, 0x4, 0x2, 0x3d7, 0x3d8, 0x5, 0x190, 0xc9, 0x2, 0x3d8, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3de, 0x5, 0x190, 0xc9, 0x2, 0x3da, 0x3db, 
    0x7, 0x7, 0x2, 0x2, 0x3db, 0x3dd, 0x5, 0x190, 0xc9, 0x2, 0x3dc, 0x3da, 
    0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3dc, 
    0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x3e0, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e4, 0x5, 
    0x1a, 0xe, 0x2, 0x3e2, 0x3e4, 0x5, 0x8c, 0x47, 0x2, 0x3e3, 0x3e1, 0x3, 
    0x2, 0x2, 0x2, 0x3e3, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x3e5, 0x3e6, 0x5, 0x72, 0x3a, 0x2, 0x3e6, 0x3e7, 0x5, 0x74, 
    0x3b, 0x2, 0x3e7, 0x71, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3ea, 0x7, 0x31, 
    0x2, 0x2, 0x3e9, 0x3eb, 0x5, 0x6, 0x4, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 
    0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x3, 0x2, 
    0x2, 0x2, 0x3ec, 0x3ed, 0x5, 0x190, 0xc9, 0x2, 0x3ed, 0x3ee, 0x7, 0x37, 
    0x2, 0x2, 0x3ee, 0x3ef, 0x5, 0x1a, 0xe, 0x2, 0x3ef, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x3f0, 0x3f2, 0x5, 0x76, 0x3c, 0x2, 0x3f1, 0x3f0, 0x3, 0x2, 
    0x2, 0x2, 0x3f2, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f1, 0x3, 0x2, 
    0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f6, 0x3, 0x2, 
    0x2, 0x2, 0x3f5, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f8, 0x5, 0x82, 
    0x42, 0x2, 0x3f7, 0x3f9, 0x5, 0x84, 0x43, 0x2, 0x3f8, 0x3f7, 0x3, 0x2, 
    0x2, 0x2, 0x3f8, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x3fa, 0x400, 0x5, 0x72, 0x3a, 0x2, 0x3fb, 0x400, 0x5, 0x78, 0x3d, 
    0x2, 0x3fc, 0x400, 0x5, 0x7a, 0x3e, 0x2, 0x3fd, 0x400, 0x5, 0x7c, 0x3f, 
    0x2, 0x3fe, 0x400, 0x5, 0x7e, 0x40, 0x2, 0x3ff, 0x3fa, 0x3, 0x2, 0x2, 
    0x2, 0x3ff, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x3fc, 0x3, 0x2, 0x2, 
    0x2, 0x3ff, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x3fe, 0x3, 0x2, 0x2, 
    0x2, 0x400, 0x77, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x7, 0x3e, 0x2, 
    0x2, 0x402, 0x403, 0x5, 0x190, 0xc9, 0x2, 0x403, 0x404, 0x7, 0xa, 0x2, 
    0x2, 0x404, 0x405, 0x5, 0x1a, 0xe, 0x2, 0x405, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x406, 0x407, 0x7, 0x6e, 0x2, 0x2, 0x407, 0x408, 0x5, 0x1a, 0xe, 
    0x2, 0x408, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40b, 0x7, 0x3d, 0x2, 
    0x2, 0x40a, 0x40c, 0x5, 0x6, 0x4, 0x2, 0x40b, 0x40a, 0x3, 0x2, 0x2, 
    0x2, 0x40b, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x3, 0x2, 0x2, 
    0x2, 0x40d, 0x40e, 0x5, 0x190, 0xc9, 0x2, 0x40e, 0x40f, 0x7, 0x37, 0x2, 
    0x2, 0x40f, 0x410, 0x5, 0x1a, 0xe, 0x2, 0x410, 0x411, 0x7, 0x46, 0x2, 
    0x2, 0x411, 0x412, 0x5, 0x1a, 0xe, 0x2, 0x412, 0x413, 0x7, 0x27, 0x2, 
    0x2, 0x413, 0x416, 0x5, 0x1a, 0xe, 0x2, 0x414, 0x415, 0x7, 0x3b, 0x2, 
    0x2, 0x415, 0x417, 0x5, 0x190, 0xc9, 0x2, 0x416, 0x414, 0x3, 0x2, 0x2, 
    0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x418, 0x419, 0x7, 0x48, 0x2, 0x2, 0x419, 0x41e, 0x5, 0x80, 0x41, 0x2, 
    0x41a, 0x41b, 0x7, 0x7, 0x2, 0x2, 0x41b, 0x41d, 0x5, 0x80, 0x41, 0x2, 
    0x41c, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x420, 0x3, 0x2, 0x2, 0x2, 
    0x41e, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 
    0x41f, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 
    0x423, 0x5, 0x1a, 0xe, 0x2, 0x422, 0x424, 0x9, 0xa, 0x2, 0x2, 0x423, 
    0x422, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x3, 0x2, 0x2, 0x2, 0x424, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 0x7, 0x56, 0x2, 0x2, 0x426, 
    0x42d, 0x5, 0x1a, 0xe, 0x2, 0x427, 0x428, 0x7, 0x34, 0x2, 0x2, 0x428, 
    0x429, 0x5, 0x1a, 0xe, 0x2, 0x429, 0x42a, 0x7, 0x15, 0x2, 0x2, 0x42a, 
    0x42b, 0x5, 0x1a, 0xe, 0x2, 0x42b, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42c, 
    0x425, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42d, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x7, 0x3b, 0x2, 0x2, 0x42f, 
    0x430, 0x5, 0x190, 0xc9, 0x2, 0x430, 0x431, 0x5, 0x74, 0x3b, 0x2, 0x431, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x432, 0x433, 0x5, 0x190, 0xc9, 0x2, 0x433, 
    0x434, 0x7, 0x9, 0x2, 0x2, 0x434, 0x435, 0x5, 0x86, 0x44, 0x2, 0x435, 
    0x43e, 0x3, 0x2, 0x2, 0x2, 0x436, 0x439, 0x5, 0x8e, 0x48, 0x2, 0x437, 
    0x439, 0x5, 0x94, 0x4b, 0x2, 0x438, 0x436, 0x3, 0x2, 0x2, 0x2, 0x438, 
    0x437, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43a, 
    0x43b, 0x7, 0x26, 0x2, 0x2, 0x43b, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43c, 
    0x43e, 0x5, 0x88, 0x45, 0x2, 0x43d, 0x432, 0x3, 0x2, 0x2, 0x2, 0x43d, 
    0x438, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43e, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x442, 0x5, 0x8c, 0x47, 0x2, 0x440, 
    0x442, 0x5, 0x8a, 0x46, 0x2, 0x441, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x441, 
    0x440, 0x3, 0x2, 0x2, 0x2, 0x442, 0x89, 0x3, 0x2, 0x2, 0x2, 0x443, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x444, 0x445, 0x5, 0x1a, 0xe, 0x2, 0x445, 0x446, 
    0x7, 0x26, 0x2, 0x2, 0x446, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 
    0x7, 0x35, 0x2, 0x2, 0x448, 0x449, 0x7, 0x7f, 0x2, 0x2, 0x449, 0x44a, 
    0x5, 0x1a, 0xe, 0x2, 0x44a, 0x44b, 0x7, 0x80, 0x2, 0x2, 0x44b, 0x44e, 
    0x5, 0x96, 0x4c, 0x2, 0x44c, 0x44d, 0x7, 0x25, 0x2, 0x2, 0x44d, 0x44f, 
    0x5, 0x96, 0x4c, 0x2, 0x44e, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 
    0x3, 0x2, 0x2, 0x2, 0x44f, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 
    0x7, 0x5e, 0x2, 0x2, 0x451, 0x452, 0x7, 0x7f, 0x2, 0x2, 0x452, 0x453, 
    0x5, 0x1a, 0xe, 0x2, 0x453, 0x454, 0x7, 0x80, 0x2, 0x2, 0x454, 0x458, 
    0x7, 0x7b, 0x2, 0x2, 0x455, 0x457, 0x5, 0x98, 0x4d, 0x2, 0x456, 0x455, 
    0x3, 0x2, 0x2, 0x2, 0x457, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x458, 0x456, 
    0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 0x3, 0x2, 0x2, 0x2, 0x459, 0x45b, 
    0x3, 0x2, 0x2, 0x2, 0x45a, 0x458, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 
    0x7, 0x7c, 0x2, 0x2, 0x45c, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 
    0x7, 0x6f, 0x2, 0x2, 0x45e, 0x45f, 0x7, 0x7f, 0x2, 0x2, 0x45f, 0x460, 
    0x5, 0x1a, 0xe, 0x2, 0x460, 0x461, 0x7, 0x80, 0x2, 0x2, 0x461, 0x462, 
    0x5, 0x88, 0x45, 0x2, 0x462, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 
    0x7, 0x22, 0x2, 0x2, 0x464, 0x465, 0x5, 0x88, 0x45, 0x2, 0x465, 0x466, 
    0x7, 0x6f, 0x2, 0x2, 0x466, 0x467, 0x7, 0x7f, 0x2, 0x2, 0x467, 0x468, 
    0x5, 0x1a, 0xe, 0x2, 0x468, 0x469, 0x7, 0x80, 0x2, 0x2, 0x469, 0x46a, 
    0x7, 0x26, 0x2, 0x2, 0x46a, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x46c, 
    0x7, 0x2f, 0x2, 0x2, 0x46c, 0x46e, 0x7, 0x7f, 0x2, 0x2, 0x46d, 0x46f, 
    0x5, 0x9e, 0x50, 0x2, 0x46e, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 
    0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0x3, 0x2, 0x2, 0x2, 0x470, 0x472, 
    0x7, 0x26, 0x2, 0x2, 0x471, 0x473, 0x5, 0x1a, 0xe, 0x2, 0x472, 0x471, 
    0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x3, 0x2, 0x2, 0x2, 0x473, 0x474, 
    0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 0x7, 0x26, 0x2, 0x2, 0x475, 0x477, 
    0x5, 0xa0, 0x51, 0x2, 0x476, 0x475, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 
    0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0x3, 0x2, 0x2, 0x2, 0x478, 0x479, 
    0x7, 0x80, 0x2, 0x2, 0x479, 0x4c3, 0x5, 0x88, 0x45, 0x2, 0x47a, 0x47b, 
    0x7, 0x30, 0x2, 0x2, 0x47b, 0x47c, 0x7, 0x7f, 0x2, 0x2, 0x47c, 0x47d, 
    0x5, 0x6, 0x4, 0x2, 0x47d, 0x47e, 0x5, 0x190, 0xc9, 0x2, 0x47e, 0x47f, 
    0x7, 0x37, 0x2, 0x2, 0x47f, 0x480, 0x5, 0x1a, 0xe, 0x2, 0x480, 0x481, 
    0x7, 0x80, 0x2, 0x2, 0x481, 0x482, 0x5, 0x88, 0x45, 0x2, 0x482, 0x4c3, 
    0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x7, 0x14, 0x2, 0x2, 0x484, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x485, 0x486, 0x7, 0x1d, 0x2, 0x2, 0x486, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x487, 0x48c, 0x7, 0x33, 0x2, 0x2, 0x488, 0x48d, 
    0x5, 0x190, 0xc9, 0x2, 0x489, 0x48a, 0x7, 0x17, 0x2, 0x2, 0x48a, 0x48d, 
    0x5, 0x1a, 0xe, 0x2, 0x48b, 0x48d, 0x7, 0x1f, 0x2, 0x2, 0x48c, 0x488, 
    0x3, 0x2, 0x2, 0x2, 0x48c, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48b, 
    0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x48f, 0x491, 0x7, 0x53, 0x2, 0x2, 0x490, 0x492, 
    0x5, 0x1a, 0xe, 0x2, 0x491, 0x490, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 
    0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x3, 0x2, 0x2, 0x2, 0x493, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x494, 0x496, 0x7, 0x60, 0x2, 0x2, 0x495, 0x497, 
    0x5, 0x1a, 0xe, 0x2, 0x496, 0x495, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 
    0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 0x2, 0x2, 0x498, 0x4c3, 
    0x7, 0x26, 0x2, 0x2, 0x499, 0x49a, 0x7, 0x62, 0x2, 0x2, 0x49a, 0x4a0, 
    0x5, 0x8c, 0x47, 0x2, 0x49b, 0x49d, 0x5, 0xa2, 0x52, 0x2, 0x49c, 0x49e, 
    0x5, 0xaa, 0x56, 0x2, 0x49d, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49e, 
    0x3, 0x2, 0x2, 0x2, 0x49e, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a1, 
    0x5, 0xaa, 0x56, 0x2, 0x4a0, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x49f, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 
    0x7, 0x1a, 0x2, 0x2, 0x4a3, 0x4c3, 0x5, 0x8c, 0x47, 0x2, 0x4a4, 0x4a5, 
    0x7, 0x66, 0x2, 0x2, 0x4a5, 0x4c3, 0x5, 0x8c, 0x47, 0x2, 0x4a6, 0x4a7, 
    0x7, 0x3f, 0x2, 0x2, 0x4a7, 0x4a8, 0x7, 0x7f, 0x2, 0x2, 0x4a8, 0x4a9, 
    0x5, 0x1a, 0xe, 0x2, 0x4a9, 0x4aa, 0x7, 0x80, 0x2, 0x2, 0x4aa, 0x4ab, 
    0x5, 0x88, 0x45, 0x2, 0x4ab, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 
    0x7, 0x69, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 0x7f, 0x2, 0x2, 0x4ae, 0x4af, 
    0x5, 0xac, 0x57, 0x2, 0x4af, 0x4b0, 0x7, 0x80, 0x2, 0x2, 0x4b0, 0x4b1, 
    0x5, 0x88, 0x45, 0x2, 0x4b1, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b6, 
    0x7, 0x70, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0x53, 0x2, 0x2, 0x4b4, 0x4b7, 
    0x5, 0x1a, 0xe, 0x2, 0x4b5, 0x4b7, 0x7, 0x14, 0x2, 0x2, 0x4b6, 0x4b3, 
    0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 
    0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4c3, 0x7, 0x26, 0x2, 0x2, 0x4b9, 0x4ba, 
    0x7, 0x67, 0x2, 0x2, 0x4ba, 0x4c3, 0x5, 0x8c, 0x47, 0x2, 0x4bb, 0x4bc, 
    0x7, 0x2d, 0x2, 0x2, 0x4bc, 0x4bd, 0x7, 0x7f, 0x2, 0x2, 0x4bd, 0x4be, 
    0x5, 0x148, 0xa5, 0x2, 0x4be, 0x4bf, 0x5, 0x14a, 0xa6, 0x2, 0x4bf, 0x4c0, 
    0x7, 0x80, 0x2, 0x2, 0x4c0, 0x4c1, 0x5, 0x88, 0x45, 0x2, 0x4c1, 0x4c3, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x443, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x444, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x447, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x450, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x463, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x47a, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x483, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x485, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x487, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x48f, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x494, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x499, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4a4, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4ac, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4b9, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x4c4, 0x4c6, 0x7, 0x7b, 0x2, 0x2, 0x4c5, 0x4c7, 0x5, 
    0x9c, 0x4f, 0x2, 0x4c6, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 0x3, 
    0x2, 0x2, 0x2, 0x4c7, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x7, 
    0x7c, 0x2, 0x2, 0x4c9, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x5, 
    0x6, 0x4, 0x2, 0x4cb, 0x4d0, 0x5, 0x90, 0x49, 0x2, 0x4cc, 0x4cd, 0x7, 
    0x7, 0x2, 0x2, 0x4cd, 0x4cf, 0x5, 0x90, 0x49, 0x2, 0x4ce, 0x4cc, 0x3, 
    0x2, 0x2, 0x2, 0x4cf, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4ce, 0x3, 
    0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x4d2, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d6, 0x5, 0x190, 
    0xc9, 0x2, 0x4d4, 0x4d5, 0x7, 0xa, 0x2, 0x2, 0x4d5, 0x4d7, 0x5, 0x92, 
    0x4a, 0x2, 0x4d6, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d7, 0x3, 0x2, 
    0x2, 0x2, 0x4d7, 0x91, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4dc, 0x5, 0x1a, 
    0xe, 0x2, 0x4d9, 0x4dc, 0x5, 0x122, 0x92, 0x2, 0x4da, 0x4dc, 0x5, 0x152, 
    0xaa, 0x2, 0x4db, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d9, 0x3, 0x2, 
    0x2, 0x2, 0x4db, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x4dd, 0x4de, 0x7, 0x1c, 0x2, 0x2, 0x4de, 0x4df, 0x5, 0x6, 0x4, 
    0x2, 0x4df, 0x4e0, 0x5, 0xe6, 0x74, 0x2, 0x4e0, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x4e1, 0x4e4, 0x5, 0x8c, 0x47, 0x2, 0x4e2, 0x4e4, 0x5, 0x8a, 0x46, 
    0x2, 0x4e3, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e2, 0x3, 0x2, 0x2, 
    0x2, 0x4e4, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e7, 0x5, 0x9a, 0x4e, 
    0x2, 0x4e6, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e8, 0x3, 0x2, 0x2, 
    0x2, 0x4e8, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x3, 0x2, 0x2, 
    0x2, 0x4e9, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x5, 0x9c, 0x4f, 
    0x2, 0x4eb, 0x99, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x7, 0x17, 0x2, 
    0x2, 0x4ed, 0x4ee, 0x5, 0x1a, 0xe, 0x2, 0x4ee, 0x4ef, 0x7, 0x9, 0x2, 
    0x2, 0x4ef, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f1, 0x7, 0x1f, 0x2, 
    0x2, 0x4f1, 0x4f3, 0x7, 0x9, 0x2, 0x2, 0x4f2, 0x4ec, 0x3, 0x2, 0x2, 
    0x2, 0x4f2, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4f6, 0x5, 0x86, 0x44, 0x2, 0x4f5, 0x4f4, 0x3, 0x2, 0x2, 0x2, 
    0x4f6, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 0x2, 
    0x4f7, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4f9, 
    0x503, 0x5, 0x8e, 0x48, 0x2, 0x4fa, 0x4ff, 0x5, 0x1a, 0xe, 0x2, 0x4fb, 
    0x4fc, 0x7, 0x7, 0x2, 0x2, 0x4fc, 0x4fe, 0x5, 0x1a, 0xe, 0x2, 0x4fd, 
    0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x501, 0x3, 0x2, 0x2, 0x2, 0x4ff, 
    0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x3, 0x2, 0x2, 0x2, 0x500, 
    0x503, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x502, 
    0x4f9, 0x3, 0x2, 0x2, 0x2, 0x502, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x503, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x504, 0x509, 0x5, 0x1a, 0xe, 0x2, 0x505, 
    0x506, 0x7, 0x7, 0x2, 0x2, 0x506, 0x508, 0x5, 0x1a, 0xe, 0x2, 0x507, 
    0x505, 0x3, 0x2, 0x2, 0x2, 0x508, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x509, 
    0x507, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50a, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x509, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x510, 
    0x5, 0xa4, 0x53, 0x2, 0x50d, 0x50f, 0x5, 0xa4, 0x53, 0x2, 0x50e, 0x50d, 
    0x3, 0x2, 0x2, 0x2, 0x50f, 0x512, 0x3, 0x2, 0x2, 0x2, 0x510, 0x50e, 
    0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 0x2, 0x2, 0x511, 0x514, 
    0x3, 0x2, 0x2, 0x2, 0x512, 0x510, 0x3, 0x2, 0x2, 0x2, 0x513, 0x515, 
    0x5, 0xa6, 0x54, 0x2, 0x514, 0x513, 0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 
    0x3, 0x2, 0x2, 0x2, 0x515, 0x518, 0x3, 0x2, 0x2, 0x2, 0x516, 0x518, 
    0x5, 0xa6, 0x54, 0x2, 0x517, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x517, 0x516, 
    0x3, 0x2, 0x2, 0x2, 0x518, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51a, 0x7, 
    0x18, 0x2, 0x2, 0x51a, 0x51b, 0x7, 0x7f, 0x2, 0x2, 0x51b, 0x51d, 0x5, 
    0x12, 0xa, 0x2, 0x51c, 0x51e, 0x5, 0x190, 0xc9, 0x2, 0x51d, 0x51c, 0x3, 
    0x2, 0x2, 0x2, 0x51d, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 0x3, 
    0x2, 0x2, 0x2, 0x51f, 0x521, 0x7, 0x80, 0x2, 0x2, 0x520, 0x522, 0x5, 
    0xa8, 0x55, 0x2, 0x521, 0x520, 0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x3, 
    0x2, 0x2, 0x2, 0x522, 0x523, 0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 0x5, 
    0x8c, 0x47, 0x2, 0x524, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x525, 0x527, 0x7, 
    0x18, 0x2, 0x2, 0x526, 0x528, 0x5, 0xa8, 0x55, 0x2, 0x527, 0x526, 0x3, 
    0x2, 0x2, 0x2, 0x527, 0x528, 0x3, 0x2, 0x2, 0x2, 0x528, 0x529, 0x3, 
    0x2, 0x2, 0x2, 0x529, 0x52a, 0x5, 0x8c, 0x47, 0x2, 0x52a, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x6d, 0x2, 0x2, 0x52c, 0x52d, 0x7, 
    0x7f, 0x2, 0x2, 0x52d, 0x52e, 0x5, 0x1a, 0xe, 0x2, 0x52e, 0x52f, 0x7, 
    0x80, 0x2, 0x2, 0x52f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x7, 
    0x2c, 0x2, 0x2, 0x531, 0x532, 0x5, 0x8c, 0x47, 0x2, 0x532, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0x533, 0x536, 0x5, 0x8e, 0x48, 0x2, 0x534, 0x536, 0x5, 
    0x1a, 0xe, 0x2, 0x535, 0x533, 0x3, 0x2, 0x2, 0x2, 0x535, 0x534, 0x3, 
    0x2, 0x2, 0x2, 0x536, 0xad, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x7, 0x42, 
    0x2, 0x2, 0x538, 0x539, 0x5, 0xb0, 0x59, 0x2, 0x539, 0x53b, 0x5, 0xb2, 
    0x5a, 0x2, 0x53a, 0x53c, 0x7, 0x26, 0x2, 0x2, 0x53b, 0x53a, 0x3, 0x2, 
    0x2, 0x2, 0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53c, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0x53d, 0x542, 0x5, 0x190, 0xc9, 0x2, 0x53e, 0x53f, 0x7, 0x3, 0x2, 
    0x2, 0x53f, 0x541, 0x5, 0x190, 0xc9, 0x2, 0x540, 0x53e, 0x3, 0x2, 0x2, 
    0x2, 0x541, 0x544, 0x3, 0x2, 0x2, 0x2, 0x542, 0x540, 0x3, 0x2, 0x2, 
    0x2, 0x542, 0x543, 0x3, 0x2, 0x2, 0x2, 0x543, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x544, 0x542, 0x3, 0x2, 0x2, 0x2, 0x545, 0x547, 0x7, 0x7b, 0x2, 0x2, 
    0x546, 0x548, 0x5, 0xb4, 0x5b, 0x2, 0x547, 0x546, 0x3, 0x2, 0x2, 0x2, 
    0x547, 0x548, 0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 0x3, 0x2, 0x2, 0x2, 
    0x549, 0x54b, 0x5, 0xb8, 0x5d, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 
    0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54d, 0x3, 0x2, 0x2, 0x2, 
    0x54c, 0x54e, 0x5, 0xbc, 0x5f, 0x2, 0x54d, 0x54c, 0x3, 0x2, 0x2, 0x2, 
    0x54d, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54f, 0x3, 0x2, 0x2, 0x2, 
    0x54f, 0x550, 0x7, 0x7c, 0x2, 0x2, 0x550, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x551, 0x553, 0x5, 0xb6, 0x5c, 0x2, 0x552, 0x551, 0x3, 0x2, 0x2, 0x2, 
    0x553, 0x554, 0x3, 0x2, 0x2, 0x2, 0x554, 0x552, 0x3, 0x2, 0x2, 0x2, 
    0x554, 0x555, 0x3, 0x2, 0x2, 0x2, 0x555, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x556, 
    0x557, 0x7, 0x2a, 0x2, 0x2, 0x557, 0x558, 0x7, 0xc, 0x2, 0x2, 0x558, 
    0x559, 0x5, 0x190, 0xc9, 0x2, 0x559, 0x55a, 0x7, 0x26, 0x2, 0x2, 0x55a, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55d, 0x5, 0xba, 0x5e, 0x2, 0x55c, 
    0x55b, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x55e, 
    0x55c, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55f, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x560, 0x561, 0x7, 0x69, 0x2, 0x2, 0x561, 
    0x562, 0x5, 0x190, 0xc9, 0x2, 0x562, 0x563, 0x7, 0xa, 0x2, 0x2, 0x563, 
    0x564, 0x5, 0x4, 0x3, 0x2, 0x564, 0x565, 0x7, 0x26, 0x2, 0x2, 0x565, 
    0x570, 0x3, 0x2, 0x2, 0x2, 0x566, 0x567, 0x7, 0x69, 0x2, 0x2, 0x567, 
    0x568, 0x5, 0x4, 0x3, 0x2, 0x568, 0x569, 0x7, 0x26, 0x2, 0x2, 0x569, 
    0x570, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56b, 0x7, 0x69, 0x2, 0x2, 0x56b, 
    0x56c, 0x7, 0x5b, 0x2, 0x2, 0x56c, 0x56d, 0x5, 0x4, 0x3, 0x2, 0x56d, 
    0x56e, 0x7, 0x26, 0x2, 0x2, 0x56e, 0x570, 0x3, 0x2, 0x2, 0x2, 0x56f, 
    0x560, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x566, 0x3, 0x2, 0x2, 0x2, 0x56f, 
    0x56a, 0x3, 0x2, 0x2, 0x2, 0x570, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x571, 0x573, 
    0x5, 0xbe, 0x60, 0x2, 0x572, 0x571, 0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 
    0x3, 0x2, 0x2, 0x2, 0x574, 0x572, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 
    0x3, 0x2, 0x2, 0x2, 0x575, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x576, 0x579, 0x5, 
    0xae, 0x58, 0x2, 0x577, 0x579, 0x5, 0xc0, 0x61, 0x2, 0x578, 0x576, 0x3, 
    0x2, 0x2, 0x2, 0x578, 0x577, 0x3, 0x2, 0x2, 0x2, 0x579, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0x57a, 0x57c, 0x5, 0x13c, 0x9f, 0x2, 0x57b, 0x57a, 0x3, 0x2, 
    0x2, 0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57e, 0x3, 0x2, 
    0x2, 0x2, 0x57d, 0x57f, 0x5, 0xde, 0x70, 0x2, 0x57e, 0x57d, 0x3, 0x2, 
    0x2, 0x2, 0x57e, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x585, 0x3, 0x2, 
    0x2, 0x2, 0x580, 0x586, 0x5, 0x16c, 0xb7, 0x2, 0x581, 0x586, 0x5, 0x16e, 
    0xb8, 0x2, 0x582, 0x586, 0x5, 0x170, 0xb9, 0x2, 0x583, 0x586, 0x5, 0x172, 
    0xba, 0x2, 0x584, 0x586, 0x5, 0x174, 0xbb, 0x2, 0x585, 0x580, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x581, 0x3, 0x2, 0x2, 0x2, 0x585, 0x582, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x583, 0x3, 0x2, 0x2, 0x2, 0x585, 0x584, 0x3, 0x2, 
    0x2, 0x2, 0x586, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x587, 0x588, 0x5, 0x190, 
    0xc9, 0x2, 0x588, 0x589, 0x7, 0x25, 0x2, 0x2, 0x589, 0x58b, 0x5, 0x190, 
    0xc9, 0x2, 0x58a, 0x58c, 0x5, 0x14, 0xb, 0x2, 0x58b, 0x58a, 0x3, 0x2, 
    0x2, 0x2, 0x58b, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x58c, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0x58d, 0x58e, 0x7, 0x6, 0x2, 0x2, 0x58e, 0x593, 0x5, 0xc6, 0x64, 
    0x2, 0x58f, 0x590, 0x7, 0x7, 0x2, 0x2, 0x590, 0x592, 0x5, 0xc6, 0x64, 
    0x2, 0x591, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x592, 0x595, 0x3, 0x2, 0x2, 
    0x2, 0x593, 0x591, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 0x3, 0x2, 0x2, 
    0x2, 0x594, 0x596, 0x3, 0x2, 0x2, 0x2, 0x595, 0x593, 0x3, 0x2, 0x2, 
    0x2, 0x596, 0x597, 0x7, 0x8, 0x2, 0x2, 0x597, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0x598, 0x59a, 0x5, 0x13c, 0x9f, 0x2, 0x599, 0x598, 0x3, 0x2, 0x2, 0x2, 
    0x599, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 0x3, 0x2, 0x2, 0x2, 
    0x59b, 0x59c, 0x5, 0x190, 0xc9, 0x2, 0x59c, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0x59d, 0x59e, 0x7, 0x9, 0x2, 0x2, 0x59e, 0x5a3, 0x5, 0x12, 0xa, 0x2, 
    0x59f, 0x5a0, 0x7, 0x7, 0x2, 0x2, 0x5a0, 0x5a2, 0x5, 0x4, 0x3, 0x2, 
    0x5a1, 0x59f, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a5, 0x3, 0x2, 0x2, 0x2, 
    0x5a3, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
    0x5a4, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a6, 
    0x5ab, 0x5, 0x4, 0x3, 0x2, 0x5a7, 0x5a8, 0x7, 0x7, 0x2, 0x2, 0x5a8, 
    0x5aa, 0x5, 0x4, 0x3, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5aa, 
    0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5ab, 
    0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ab, 
    0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b0, 0x5, 0xce, 0x68, 0x2, 0x5af, 0x5ae, 
    0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5af, 
    0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0x5b3, 0x5b4, 0x7, 0x6e, 0x2, 0x2, 0x5b4, 0x5b5, 0x5, 
    0x190, 0xc9, 0x2, 0x5b5, 0x5b6, 0x7, 0x9, 0x2, 0x2, 0x5b6, 0x5b7, 0x5, 
    0xd0, 0x69, 0x2, 0x5b7, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5c3, 0x5, 
    0xd6, 0x6c, 0x2, 0x5b9, 0x5bc, 0x5, 0xd2, 0x6a, 0x2, 0x5ba, 0x5bb, 0x7, 
    0x7, 0x2, 0x2, 0x5bb, 0x5bd, 0x5, 0xd4, 0x6b, 0x2, 0x5bc, 0x5ba, 0x3, 
    0x2, 0x2, 0x2, 0x5bc, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5c0, 0x3, 
    0x2, 0x2, 0x2, 0x5be, 0x5bf, 0x7, 0x7, 0x2, 0x2, 0x5bf, 0x5c1, 0x5, 
    0xd6, 0x6c, 0x2, 0x5c0, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x3, 
    0x2, 0x2, 0x2, 0x5c1, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5b8, 0x3, 
    0x2, 0x2, 0x2, 0x5c2, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c8, 0x5, 0x12, 0xa, 0x2, 0x5c5, 0x5c8, 0x7, 0x1b, 
    0x2, 0x2, 0x5c6, 0x5c8, 0x7, 0x5d, 0x2, 0x2, 0x5c7, 0x5c4, 0x3, 0x2, 
    0x2, 0x2, 0x5c7, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c6, 0x3, 0x2, 
    0x2, 0x2, 0x5c8, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ce, 0x5, 0x4, 0x3, 
    0x2, 0x5ca, 0x5cb, 0x7, 0x7, 0x2, 0x2, 0x5cb, 0x5cd, 0x5, 0x4, 0x3, 
    0x2, 0x5cc, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5d0, 0x3, 0x2, 0x2, 
    0x2, 0x5ce, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cf, 0x3, 0x2, 0x2, 
    0x2, 0x5cf, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5ce, 0x3, 0x2, 0x2, 0x2, 
    0x5d1, 0x5d2, 0x7, 0x43, 0x2, 0x2, 0x5d2, 0x5d3, 0x7, 0x7f, 0x2, 0x2, 
    0x5d3, 0x5d4, 0x7, 0x80, 0x2, 0x2, 0x5d4, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0x5d5, 0x5d7, 0x7, 0x7b, 0x2, 0x2, 0x5d6, 0x5d8, 0x5, 0xda, 0x6e, 0x2, 
    0x5d7, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 0x2, 0x2, 
    0x5d8, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0x7c, 0x2, 0x2, 
    0x5da, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5dd, 0x5, 0xdc, 0x6f, 0x2, 
    0x5dc, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 0x2, 0x2, 0x2, 
    0x5de, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5df, 0x3, 0x2, 0x2, 0x2, 
    0x5df, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e2, 0x5, 0x13c, 0x9f, 0x2, 
    0x5e1, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 0x3, 0x2, 0x2, 0x2, 
    0x5e2, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e5, 0x5, 0xde, 0x70, 0x2, 
    0x5e4, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e5, 0x3, 0x2, 0x2, 0x2, 
    0x5e5, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e9, 0x5, 0xe2, 0x72, 0x2, 
    0x5e7, 0x5e9, 0x5, 0x180, 0xc1, 0x2, 0x5e8, 0x5e6, 0x3, 0x2, 0x2, 0x2, 
    0x5e8, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x5ea, 
    0x5ec, 0x5, 0xe0, 0x71, 0x2, 0x5eb, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5ec, 
    0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ed, 
    0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 
    0x9, 0xb, 0x2, 0x2, 0x5f0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x605, 0x5, 
    0x17c, 0xbf, 0x2, 0x5f2, 0x605, 0x5, 0xe4, 0x73, 0x2, 0x5f3, 0x605, 
    0x5, 0x176, 0xbc, 0x2, 0x5f4, 0x5fa, 0x5, 0x112, 0x8a, 0x2, 0x5f5, 0x5fb, 
    0x5, 0x116, 0x8c, 0x2, 0x5f6, 0x5f7, 0x5, 0x154, 0xab, 0x2, 0x5f7, 0x5f8, 
    0x5, 0x1a, 0xe, 0x2, 0x5f8, 0x5f9, 0x7, 0x26, 0x2, 0x2, 0x5f9, 0x5fb, 
    0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5f6, 
    0x3, 0x2, 0x2, 0x2, 0x5fb, 0x605, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x605, 
    0x5, 0x182, 0xc2, 0x2, 0x5fd, 0x5fe, 0x7, 0x6b, 0x2, 0x2, 0x5fe, 0x605, 
    0x5, 0x184, 0xc3, 0x2, 0x5ff, 0x605, 0x5, 0x16c, 0xb7, 0x2, 0x600, 0x605, 
    0x5, 0x16e, 0xb8, 0x2, 0x601, 0x605, 0x5, 0x170, 0xb9, 0x2, 0x602, 0x605, 
    0x5, 0x172, 0xba, 0x2, 0x603, 0x605, 0x5, 0x174, 0xbb, 0x2, 0x604, 0x5f1, 
    0x3, 0x2, 0x2, 0x2, 0x604, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x604, 0x5f3, 
    0x3, 0x2, 0x2, 0x2, 0x604, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0x604, 0x5fc, 
    0x3, 0x2, 0x2, 0x2, 0x604, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x604, 0x5ff, 
    0x3, 0x2, 0x2, 0x2, 0x604, 0x600, 0x3, 0x2, 0x2, 0x2, 0x604, 0x601, 
    0x3, 0x2, 0x2, 0x2, 0x604, 0x602, 0x3, 0x2, 0x2, 0x2, 0x604, 0x603, 
    0x3, 0x2, 0x2, 0x2, 0x605, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x606, 0x610, 0x5, 
    0x6, 0x4, 0x2, 0x607, 0x608, 0x5, 0x4, 0x3, 0x2, 0x608, 0x609, 0x7, 
    0x3, 0x2, 0x2, 0x609, 0x60a, 0x5, 0x17e, 0xc0, 0x2, 0x60a, 0x611, 0x3, 
    0x2, 0x2, 0x2, 0x60b, 0x611, 0x5, 0x184, 0xc3, 0x2, 0x60c, 0x611, 0x5, 
    0x17a, 0xbe, 0x2, 0x60d, 0x611, 0x5, 0x17e, 0xc0, 0x2, 0x60e, 0x611, 
    0x5, 0x188, 0xc5, 0x2, 0x60f, 0x611, 0x5, 0x178, 0xbd, 0x2, 0x610, 0x607, 
    0x3, 0x2, 0x2, 0x2, 0x610, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x610, 0x60c, 
    0x3, 0x2, 0x2, 0x2, 0x610, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x610, 0x60e, 
    0x3, 0x2, 0x2, 0x2, 0x610, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x611, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0x612, 0x617, 0x5, 0xe8, 0x75, 0x2, 0x613, 0x614, 0x7, 
    0x7, 0x2, 0x2, 0x614, 0x616, 0x5, 0xe8, 0x75, 0x2, 0x615, 0x613, 0x3, 
    0x2, 0x2, 0x2, 0x616, 0x619, 0x3, 0x2, 0x2, 0x2, 0x617, 0x615, 0x3, 
    0x2, 0x2, 0x2, 0x617, 0x618, 0x3, 0x2, 0x2, 0x2, 0x618, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0x619, 0x617, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 0x5, 0x190, 
    0xc9, 0x2, 0x61b, 0x61c, 0x7, 0xa, 0x2, 0x2, 0x61c, 0x61d, 0x5, 0x1a, 
    0xe, 0x2, 0x61d, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x623, 0x5, 0xec, 
    0x77, 0x2, 0x61f, 0x620, 0x7, 0x7, 0x2, 0x2, 0x620, 0x622, 0x5, 0xec, 
    0x77, 0x2, 0x621, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x622, 0x625, 0x3, 0x2, 
    0x2, 0x2, 0x623, 0x621, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 0x3, 0x2, 
    0x2, 0x2, 0x624, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x625, 0x623, 0x3, 0x2, 0x2, 
    0x2, 0x626, 0x629, 0x5, 0x190, 0xc9, 0x2, 0x627, 0x628, 0x7, 0xa, 0x2, 
    0x2, 0x628, 0x62a, 0x5, 0xee, 0x78, 0x2, 0x629, 0x627, 0x3, 0x2, 0x2, 
    0x2, 0x629, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62a, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0x62b, 0x62e, 0x5, 0x1a, 0xe, 0x2, 0x62c, 0x62e, 0x5, 0x122, 0x92, 0x2, 
    0x62d, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62c, 0x3, 0x2, 0x2, 0x2, 
    0x62e, 0xef, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x632, 0x5, 0x6, 0x4, 0x2, 0x630, 
    0x632, 0x7, 0x6b, 0x2, 0x2, 0x631, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x631, 
    0x630, 0x3, 0x2, 0x2, 0x2, 0x632, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x633, 0x634, 
    0x5, 0x4, 0x3, 0x2, 0x634, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x635, 0x638, 0x5, 
    0x8c, 0x47, 0x2, 0x636, 0x638, 0x7, 0x26, 0x2, 0x2, 0x637, 0x635, 0x3, 
    0x2, 0x2, 0x2, 0x637, 0x636, 0x3, 0x2, 0x2, 0x2, 0x638, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x639, 0x640, 0x5, 0xfe, 0x80, 0x2, 0x63a, 0x63d, 0x5, 0xf8, 
    0x7d, 0x2, 0x63b, 0x63c, 0x7, 0x7, 0x2, 0x2, 0x63c, 0x63e, 0x5, 0xfe, 
    0x80, 0x2, 0x63d, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63e, 0x3, 0x2, 
    0x2, 0x2, 0x63e, 0x640, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x639, 0x3, 0x2, 
    0x2, 0x2, 0x63f, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x640, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0x641, 0x646, 0x5, 0xfa, 0x7e, 0x2, 0x642, 0x643, 0x7, 0x7, 0x2, 
    0x2, 0x643, 0x645, 0x5, 0xfa, 0x7e, 0x2, 0x644, 0x642, 0x3, 0x2, 0x2, 
    0x2, 0x645, 0x648, 0x3, 0x2, 0x2, 0x2, 0x646, 0x644, 0x3, 0x2, 0x2, 
    0x2, 0x646, 0x647, 0x3, 0x2, 0x2, 0x2, 0x647, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0x648, 0x646, 0x3, 0x2, 0x2, 0x2, 0x649, 0x64b, 0x5, 0x13c, 0x9f, 0x2, 
    0x64a, 0x649, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x3, 0x2, 0x2, 0x2, 
    0x64b, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64e, 0x5, 0xfc, 0x7f, 0x2, 
    0x64d, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64e, 0x3, 0x2, 0x2, 0x2, 
    0x64e, 0x64f, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x652, 0x5, 0x18a, 0xc6, 0x2, 
    0x650, 0x652, 0x7, 0xd, 0x2, 0x2, 0x651, 0x64a, 0x3, 0x2, 0x2, 0x2, 
    0x651, 0x650, 0x3, 0x2, 0x2, 0x2, 0x652, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x653, 
    0x654, 0x9, 0xc, 0x2, 0x2, 0x654, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x655, 0x657, 
    0x5, 0x13c, 0x9f, 0x2, 0x656, 0x655, 0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 
    0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 0x3, 0x2, 0x2, 0x2, 0x658, 0x659, 
    0x7, 0x4b, 0x2, 0x2, 0x659, 0x65a, 0x5, 0x11e, 0x90, 0x2, 0x65a, 0x65b, 
    0x5, 0x190, 0xc9, 0x2, 0x65b, 0xff, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65e, 
    0x5, 0x13c, 0x9f, 0x2, 0x65d, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 
    0x3, 0x2, 0x2, 0x2, 0x65e, 0x660, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x661, 
    0x5, 0x106, 0x84, 0x2, 0x660, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 
    0x3, 0x2, 0x2, 0x2, 0x661, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 
    0x7, 0x32, 0x2, 0x2, 0x663, 0x665, 0x5, 0x108, 0x85, 0x2, 0x664, 0x666, 
    0x5, 0x104, 0x83, 0x2, 0x665, 0x664, 0x3, 0x2, 0x2, 0x2, 0x665, 0x666, 
    0x3, 0x2, 0x2, 0x2, 0x666, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x667, 0x668, 
    0x7, 0x57, 0x2, 0x2, 0x668, 0x66a, 0x5, 0x108, 0x85, 0x2, 0x669, 0x66b, 
    0x5, 0x102, 0x82, 0x2, 0x66a, 0x669, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 
    0x3, 0x2, 0x2, 0x2, 0x66b, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x662, 
    0x3, 0x2, 0x2, 0x2, 0x66c, 0x667, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x66e, 0x670, 0x5, 0x13c, 0x9f, 0x2, 0x66f, 0x66e, 
    0x3, 0x2, 0x2, 0x2, 0x66f, 0x670, 0x3, 0x2, 0x2, 0x2, 0x670, 0x672, 
    0x3, 0x2, 0x2, 0x2, 0x671, 0x673, 0x5, 0x106, 0x84, 0x2, 0x672, 0x671, 
    0x3, 0x2, 0x2, 0x2, 0x672, 0x673, 0x3, 0x2, 0x2, 0x2, 0x673, 0x674, 
    0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0x7, 0x32, 0x2, 0x2, 0x675, 0x676, 
    0x5, 0x108, 0x85, 0x2, 0x676, 0x103, 0x3, 0x2, 0x2, 0x2, 0x677, 0x679, 
    0x5, 0x13c, 0x9f, 0x2, 0x678, 0x677, 0x3, 0x2, 0x2, 0x2, 0x678, 0x679, 
    0x3, 0x2, 0x2, 0x2, 0x679, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x67a, 0x67c, 
    0x5, 0x106, 0x84, 0x2, 0x67b, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67c, 
    0x3, 0x2, 0x2, 0x2, 0x67c, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x67d, 0x67e, 
    0x7, 0x57, 0x2, 0x2, 0x67e, 0x67f, 0x5, 0x108, 0x85, 0x2, 0x67f, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x680, 0x688, 0x7, 0x4e, 0x2, 0x2, 0x681, 0x688, 
    0x7, 0x3a, 0x2, 0x2, 0x682, 0x688, 0x7, 0x4d, 0x2, 0x2, 0x683, 0x684, 
    0x7, 0x4e, 0x2, 0x2, 0x684, 0x688, 0x7, 0x3a, 0x2, 0x2, 0x685, 0x686, 
    0x7, 0x3a, 0x2, 0x2, 0x686, 0x688, 0x7, 0x4e, 0x2, 0x2, 0x687, 0x680, 
    0x3, 0x2, 0x2, 0x2, 0x687, 0x681, 0x3, 0x2, 0x2, 0x2, 0x687, 0x682, 
    0x3, 0x2, 0x2, 0x2, 0x687, 0x683, 0x3, 0x2, 0x2, 0x2, 0x687, 0x685, 
    0x3, 0x2, 0x2, 0x2, 0x688, 0x107, 0x3, 0x2, 0x2, 0x2, 0x689, 0x68c, 
    0x5, 0x8c, 0x47, 0x2, 0x68a, 0x68c, 0x7, 0x26, 0x2, 0x2, 0x68b, 0x689, 
    0x3, 0x2, 0x2, 0x2, 0x68b, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x68d, 0x68f, 0x5, 0x13c, 0x9f, 0x2, 0x68e, 0x68d, 
    0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x698, 
    0x3, 0x2, 0x2, 0x2, 0x690, 0x691, 0x7, 0xb, 0x2, 0x2, 0x691, 0x692, 
    0x5, 0x8c, 0x47, 0x2, 0x692, 0x693, 0x5, 0x10e, 0x88, 0x2, 0x693, 0x699, 
    0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0x7, 0x52, 0x2, 0x2, 0x695, 0x696, 
    0x5, 0x8c, 0x47, 0x2, 0x696, 0x697, 0x5, 0x10c, 0x87, 0x2, 0x697, 0x699, 
    0x3, 0x2, 0x2, 0x2, 0x698, 0x690, 0x3, 0x2, 0x2, 0x2, 0x698, 0x694, 
    0x3, 0x2, 0x2, 0x2, 0x699, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69c, 
    0x5, 0x13c, 0x9f, 0x2, 0x69b, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69c, 
    0x3, 0x2, 0x2, 0x2, 0x69c, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69e, 
    0x7, 0xb, 0x2, 0x2, 0x69e, 0x69f, 0x5, 0x8c, 0x47, 0x2, 0x69f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a2, 0x5, 0x13c, 0x9f, 0x2, 0x6a1, 0x6a0, 
    0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 
    0x3, 0x2, 0x2, 0x2, 0x6a3, 0x6a4, 0x7, 0x52, 0x2, 0x2, 0x6a4, 0x6a5, 
    0x5, 0x8c, 0x47, 0x2, 0x6a5, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6bd, 
    0x7, 0x1b, 0x2, 0x2, 0x6a7, 0x6bd, 0x7, 0x1c, 0x2, 0x2, 0x6a8, 0x6bd, 
    0x7, 0x8d, 0x2, 0x2, 0x6a9, 0x6bd, 0x7, 0x1f, 0x2, 0x2, 0x6aa, 0x6bd, 
    0x7, 0x20, 0x2, 0x2, 0x6ab, 0x6bd, 0x7, 0x21, 0x2, 0x2, 0x6ac, 0x6bd, 
    0x7, 0x61, 0x2, 0x2, 0x6ad, 0x6bd, 0x7, 0x2b, 0x2, 0x2, 0x6ae, 0x6bd, 
    0x7, 0x5, 0x2, 0x2, 0x6af, 0x6bd, 0x7, 0x1d, 0x2, 0x2, 0x6b0, 0x6bd, 
    0x7, 0x1e, 0x2, 0x2, 0x6b1, 0x6bd, 0x7, 0x17, 0x2, 0x2, 0x6b2, 0x6bd, 
    0x7, 0x15, 0x2, 0x2, 0x6b3, 0x6bd, 0x7, 0x16, 0x2, 0x2, 0x6b4, 0x6bd, 
    0x7, 0x1a, 0x2, 0x2, 0x6b5, 0x6bd, 0x5, 0x156, 0xac, 0x2, 0x6b6, 0x6bd, 
    0x7, 0x9a, 0x2, 0x2, 0x6b7, 0x6bd, 0x7, 0x9b, 0x2, 0x2, 0x6b8, 0x6bd, 
    0x7, 0x8, 0x2, 0x2, 0x6b9, 0x6bd, 0x7, 0x6, 0x2, 0x2, 0x6ba, 0x6bd, 
    0x7, 0x19, 0x2, 0x2, 0x6bb, 0x6bd, 0x7, 0x18, 0x2, 0x2, 0x6bc, 0x6a6, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6a8, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6aa, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6ac, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6ae, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b2, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b4, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b6, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b8, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6ba, 
    0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x6be, 0x6bf, 0x9, 0xd, 0x2, 0x2, 0x6bf, 0x6c0, 
    0x7, 0x47, 0x2, 0x2, 0x6c0, 0x6c1, 0x5, 0x6, 0x4, 0x2, 0x6c1, 0x6c2, 
    0x7, 0x7f, 0x2, 0x2, 0x6c2, 0x6c3, 0x5, 0x18a, 0xc6, 0x2, 0x6c3, 0x6c4, 
    0x7, 0x80, 0x2, 0x2, 0x6c4, 0x113, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c6, 
    0x7, 0x9, 0x2, 0x2, 0x6c6, 0x6c7, 0x9, 0xe, 0x2, 0x2, 0x6c7, 0x6c9, 
    0x7, 0x7f, 0x2, 0x2, 0x6c8, 0x6ca, 0x5, 0x16, 0xc, 0x2, 0x6c9, 0x6c8, 
    0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cb, 
    0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0x80, 0x2, 0x2, 0x6cc, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6d0, 0x5, 0x8c, 0x47, 0x2, 0x6ce, 0x6d0, 
    0x7, 0x26, 0x2, 0x2, 0x6cf, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6ce, 
    0x3, 0x2, 0x2, 0x2, 0x6d0, 0x117, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d2, 
    0x7, 0x9, 0x2, 0x2, 0x6d2, 0x6d3, 0x5, 0xca, 0x66, 0x2, 0x6d3, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d8, 0x7, 0x7b, 0x2, 0x2, 0x6d5, 0x6d7, 
    0x5, 0x11c, 0x8f, 0x2, 0x6d6, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d7, 0x6da, 
    0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 
    0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6d8, 
    0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x7, 0x7c, 0x2, 0x2, 0x6dc, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6df, 0x5, 0x13c, 0x9f, 0x2, 0x6de, 0x6dd, 
    0x3, 0x2, 0x2, 0x2, 0x6de, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e1, 
    0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e2, 0x5, 0xde, 0x70, 0x2, 0x6e1, 0x6e0, 
    0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6ed, 
    0x3, 0x2, 0x2, 0x2, 0x6e3, 0x6ee, 0x5, 0xe2, 0x72, 0x2, 0x6e4, 0x6e5, 
    0x7, 0x2d, 0x2, 0x2, 0x6e5, 0x6e7, 0x5, 0x6, 0x4, 0x2, 0x6e6, 0x6e8, 
    0x5, 0x150, 0xa9, 0x2, 0x6e7, 0x6e6, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6e9, 
    0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6ea, 
    0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 
    0x7, 0x26, 0x2, 0x2, 0x6ec, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e3, 
    0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6f7, 0x5, 0x8, 0x5, 0x2, 0x6f0, 0x6f2, 
    0x9, 0xf, 0x2, 0x2, 0x6f1, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f5, 
    0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f4, 
    0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f3, 
    0x3, 0x2, 0x2, 0x2, 0x6f6, 0x6f8, 0x5, 0x120, 0x91, 0x2, 0x6f7, 0x6f3, 
    0x3, 0x2, 0x2, 0x2, 0x6f8, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6f7, 
    0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x11f, 
    0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6ff, 0x7, 0x23, 0x2, 0x2, 0x6fc, 0x6fe, 
    0x7, 0x7, 0x2, 0x2, 0x6fd, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6fe, 0x701, 
    0x3, 0x2, 0x2, 0x2, 0x6ff, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x700, 
    0x3, 0x2, 0x2, 0x2, 0x700, 0x702, 0x3, 0x2, 0x2, 0x2, 0x701, 0x6ff, 
    0x3, 0x2, 0x2, 0x2, 0x702, 0x703, 0x7, 0x24, 0x2, 0x2, 0x703, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x704, 0x710, 0x7, 0x7b, 0x2, 0x2, 0x705, 0x70a, 
    0x5, 0xee, 0x78, 0x2, 0x706, 0x707, 0x7, 0x7, 0x2, 0x2, 0x707, 0x709, 
    0x5, 0xee, 0x78, 0x2, 0x708, 0x706, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70c, 
    0x3, 0x2, 0x2, 0x2, 0x70a, 0x708, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 
    0x3, 0x2, 0x2, 0x2, 0x70b, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70a, 
    0x3, 0x2, 0x2, 0x2, 0x70d, 0x70f, 0x7, 0x7, 0x2, 0x2, 0x70e, 0x70d, 
    0x3, 0x2, 0x2, 0x2, 0x70e, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x711, 
    0x3, 0x2, 0x2, 0x2, 0x710, 0x705, 0x3, 0x2, 0x2, 0x2, 0x710, 0x711, 
    0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 0x3, 0x2, 0x2, 0x2, 0x712, 0x713, 
    0x7, 0x7c, 0x2, 0x2, 0x713, 0x123, 0x3, 0x2, 0x2, 0x2, 0x714, 0x715, 
    0x7, 0x6, 0x2, 0x2, 0x715, 0x71a, 0x5, 0x126, 0x94, 0x2, 0x716, 0x717, 
    0x7, 0x7, 0x2, 0x2, 0x717, 0x719, 0x5, 0x126, 0x94, 0x2, 0x718, 0x716, 
    0x3, 0x2, 0x2, 0x2, 0x719, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x718, 
    0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x71d, 
    0x3, 0x2, 0x2, 0x2, 0x71c, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 
    0x7, 0x8, 0x2, 0x2, 0x71e, 0x125, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x721, 
    0x5, 0x13c, 0x9f, 0x2, 0x720, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x720, 0x721, 
    0x3, 0x2, 0x2, 0x2, 0x721, 0x723, 0x3, 0x2, 0x2, 0x2, 0x722, 0x724, 
    0x5, 0x128, 0x95, 0x2, 0x723, 0x722, 0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 
    0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 0x3, 0x2, 0x2, 0x2, 0x725, 0x726, 
    0x5, 0x190, 0xc9, 0x2, 0x726, 0x127, 0x3, 0x2, 0x2, 0x2, 0x727, 0x728, 
    0x9, 0x10, 0x2, 0x2, 0x728, 0x129, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 
    0x7, 0x9, 0x2, 0x2, 0x72a, 0x72b, 0x5, 0xca, 0x66, 0x2, 0x72b, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x72c, 0x730, 0x7, 0x7b, 0x2, 0x2, 0x72d, 0x72f, 
    0x5, 0x12e, 0x98, 0x2, 0x72e, 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x732, 
    0x3, 0x2, 0x2, 0x2, 0x730, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x730, 0x731, 
    0x3, 0x2, 0x2, 0x2, 0x731, 0x733, 0x3, 0x2, 0x2, 0x2, 0x732, 0x730, 
    0x3, 0x2, 0x2, 0x2, 0x733, 0x734, 0x7, 0x7c, 0x2, 0x2, 0x734, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x735, 0x737, 0x5, 0x13c, 0x9f, 0x2, 0x736, 0x735, 
    0x3, 0x2, 0x2, 0x2, 0x736, 0x737, 0x3, 0x2, 0x2, 0x2, 0x737, 0x739, 
    0x3, 0x2, 0x2, 0x2, 0x738, 0x73a, 0x7, 0x43, 0x2, 0x2, 0x739, 0x738, 
    0x3, 0x2, 0x2, 0x2, 0x739, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x773, 
    0x3, 0x2, 0x2, 0x2, 0x73b, 0x73d, 0x7, 0x67, 0x2, 0x2, 0x73c, 0x73b, 
    0x3, 0x2, 0x2, 0x2, 0x73c, 0x73d, 0x3, 0x2, 0x2, 0x2, 0x73d, 0x73e, 
    0x3, 0x2, 0x2, 0x2, 0x73e, 0x75a, 0x5, 0x6, 0x4, 0x2, 0x73f, 0x741, 
    0x5, 0x190, 0xc9, 0x2, 0x740, 0x742, 0x5, 0xc4, 0x63, 0x2, 0x741, 0x740, 
    0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 
    0x3, 0x2, 0x2, 0x2, 0x743, 0x745, 0x7, 0x7f, 0x2, 0x2, 0x744, 0x746, 
    0x5, 0xf6, 0x7c, 0x2, 0x745, 0x744, 0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 
    0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 0x749, 
    0x7, 0x80, 0x2, 0x2, 0x748, 0x74a, 0x5, 0xcc, 0x67, 0x2, 0x749, 0x748, 
    0x3, 0x2, 0x2, 0x2, 0x749, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74b, 
    0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 0x7, 0x26, 0x2, 0x2, 0x74c, 0x75b, 
    0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 0x5, 0x190, 0xc9, 0x2, 0x74e, 0x74f, 
    0x7, 0x7b, 0x2, 0x2, 0x74f, 0x750, 0x5, 0x130, 0x99, 0x2, 0x750, 0x751, 
    0x7, 0x7c, 0x2, 0x2, 0x751, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x752, 0x753, 
    0x7, 0x5f, 0x2, 0x2, 0x753, 0x754, 0x7, 0x23, 0x2, 0x2, 0x754, 0x755, 
    0x5, 0xf6, 0x7c, 0x2, 0x755, 0x756, 0x7, 0x24, 0x2, 0x2, 0x756, 0x757, 
    0x7, 0x7b, 0x2, 0x2, 0x757, 0x758, 0x5, 0x130, 0x99, 0x2, 0x758, 0x759, 
    0x7, 0x7c, 0x2, 0x2, 0x759, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x73f, 
    0x3, 0x2, 0x2, 0x2, 0x75a, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x752, 
    0x3, 0x2, 0x2, 0x2, 0x75b, 0x774, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x75e, 
    0x7, 0x67, 0x2, 0x2, 0x75d, 0x75c, 0x3, 0x2, 0x2, 0x2, 0x75d, 0x75e, 
    0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x760, 
    0x7, 0x6b, 0x2, 0x2, 0x760, 0x762, 0x5, 0x190, 0xc9, 0x2, 0x761, 0x763, 
    0x5, 0xc4, 0x63, 0x2, 0x762, 0x761, 0x3, 0x2, 0x2, 0x2, 0x762, 0x763, 
    0x3, 0x2, 0x2, 0x2, 0x763, 0x764, 0x3, 0x2, 0x2, 0x2, 0x764, 0x766, 
    0x7, 0x7f, 0x2, 0x2, 0x765, 0x767, 0x5, 0xf6, 0x7c, 0x2, 0x766, 0x765, 
    0x3, 0x2, 0x2, 0x2, 0x766, 0x767, 0x3, 0x2, 0x2, 0x2, 0x767, 0x768, 
    0x3, 0x2, 0x2, 0x2, 0x768, 0x76a, 0x7, 0x80, 0x2, 0x2, 0x769, 0x76b, 
    0x5, 0xcc, 0x67, 0x2, 0x76a, 0x769, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 
    0x3, 0x2, 0x2, 0x2, 0x76b, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 
    0x7, 0x26, 0x2, 0x2, 0x76d, 0x774, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x76f, 
    0x7, 0x28, 0x2, 0x2, 0x76f, 0x770, 0x5, 0x6, 0x4, 0x2, 0x770, 0x771, 
    0x5, 0x190, 0xc9, 0x2, 0x771, 0x772, 0x7, 0x26, 0x2, 0x2, 0x772, 0x774, 
    0x3, 0x2, 0x2, 0x2, 0x773, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x773, 0x75d, 
    0x3, 0x2, 0x2, 0x2, 0x773, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x774, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x775, 0x777, 0x5, 0x13c, 0x9f, 0x2, 0x776, 0x775, 
    0x3, 0x2, 0x2, 0x2, 0x776, 0x777, 0x3, 0x2, 0x2, 0x2, 0x777, 0x78a, 
    0x3, 0x2, 0x2, 0x2, 0x778, 0x779, 0x7, 0x32, 0x2, 0x2, 0x779, 0x77f, 
    0x7, 0x26, 0x2, 0x2, 0x77a, 0x77c, 0x5, 0x13c, 0x9f, 0x2, 0x77b, 0x77a, 
    0x3, 0x2, 0x2, 0x2, 0x77b, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x77d, 
    0x3, 0x2, 0x2, 0x2, 0x77d, 0x77e, 0x7, 0x57, 0x2, 0x2, 0x77e, 0x780, 
    0x7, 0x26, 0x2, 0x2, 0x77f, 0x77b, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 
    0x3, 0x2, 0x2, 0x2, 0x780, 0x78b, 0x3, 0x2, 0x2, 0x2, 0x781, 0x782, 
    0x7, 0x57, 0x2, 0x2, 0x782, 0x788, 0x7, 0x26, 0x2, 0x2, 0x783, 0x785, 
    0x5, 0x13c, 0x9f, 0x2, 0x784, 0x783, 0x3, 0x2, 0x2, 0x2, 0x784, 0x785, 
    0x3, 0x2, 0x2, 0x2, 0x785, 0x786, 0x3, 0x2, 0x2, 0x2, 0x786, 0x787, 
    0x7, 0x32, 0x2, 0x2, 0x787, 0x789, 0x7, 0x26, 0x2, 0x2, 0x788, 0x784, 
    0x3, 0x2, 0x2, 0x2, 0x788, 0x789, 0x3, 0x2, 0x2, 0x2, 0x789, 0x78b, 
    0x3, 0x2, 0x2, 0x2, 0x78a, 0x778, 0x3, 0x2, 0x2, 0x2, 0x78a, 0x781, 
    0x3, 0x2, 0x2, 0x2, 0x78b, 0x131, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x78d, 
    0x7, 0x9, 0x2, 0x2, 0x78d, 0x78e, 0x5, 0x6, 0x4, 0x2, 0x78e, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x78f, 0x79b, 0x7, 0x7b, 0x2, 0x2, 0x790, 0x795, 
    0x5, 0x136, 0x9c, 0x2, 0x791, 0x792, 0x7, 0x7, 0x2, 0x2, 0x792, 0x794, 
    0x5, 0x136, 0x9c, 0x2, 0x793, 0x791, 0x3, 0x2, 0x2, 0x2, 0x794, 0x797, 
    0x3, 0x2, 0x2, 0x2, 0x795, 0x793, 0x3, 0x2, 0x2, 0x2, 0x795, 0x796, 
    0x3, 0x2, 0x2, 0x2, 0x796, 0x799, 0x3, 0x2, 0x2, 0x2, 0x797, 0x795, 
    0x3, 0x2, 0x2, 0x2, 0x798, 0x79a, 0x7, 0x7, 0x2, 0x2, 0x799, 0x798, 
    0x3, 0x2, 0x2, 0x2, 0x799, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79c, 
    0x3, 0x2, 0x2, 0x2, 0x79b, 0x790, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 
    0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79e, 
    0x7, 0x7c, 0x2, 0x2, 0x79e, 0x135, 0x3, 0x2, 0x2, 0x2, 0x79f, 0x7a1, 
    0x5, 0x13c, 0x9f, 0x2, 0x7a0, 0x79f, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a1, 
    0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a5, 
    0x5, 0x190, 0xc9, 0x2, 0x7a3, 0x7a4, 0x7, 0xa, 0x2, 0x2, 0x7a4, 0x7a6, 
    0x5, 0x1a, 0xe, 0x2, 0x7a5, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a6, 
    0x3, 0x2, 0x2, 0x2, 0x7a6, 0x137, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a8, 
    0x7, 0x23, 0x2, 0x2, 0x7a8, 0x7a9, 0x5, 0x13a, 0x9e, 0x2, 0x7a9, 0x7aa, 
    0x7, 0x9, 0x2, 0x2, 0x7aa, 0x7ac, 0x5, 0x142, 0xa2, 0x2, 0x7ab, 0x7ad, 
    0x7, 0x7, 0x2, 0x2, 0x7ac, 0x7ab, 0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7ad, 
    0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 0x3, 0x2, 0x2, 0x2, 0x7ae, 0x7af, 
    0x7, 0x24, 0x2, 0x2, 0x7af, 0x139, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7b3, 
    0x5, 0x16a, 0xb6, 0x2, 0x7b1, 0x7b3, 0x5, 0x190, 0xc9, 0x2, 0x7b2, 0x7b0, 
    0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b6, 0x5, 0x13e, 0xa0, 0x2, 0x7b5, 0x7b4, 
    0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7b5, 
    0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7bd, 0x7, 0x23, 0x2, 0x2, 0x7ba, 0x7bb, 
    0x5, 0x140, 0xa1, 0x2, 0x7bb, 0x7bc, 0x7, 0x9, 0x2, 0x2, 0x7bc, 0x7be, 
    0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 
    0x3, 0x2, 0x2, 0x2, 0x7be, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c1, 
    0x5, 0x142, 0xa2, 0x2, 0x7c0, 0x7c2, 0x7, 0x7, 0x2, 0x2, 0x7c1, 0x7c0, 
    0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 
    0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0x24, 0x2, 0x2, 0x7c4, 0x13f, 
    0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c8, 0x5, 0x16a, 0xb6, 0x2, 0x7c6, 0x7c8, 
    0x5, 0x190, 0xc9, 0x2, 0x7c7, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c7, 0x7c6, 
    0x3, 0x2, 0x2, 0x2, 0x7c8, 0x141, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7ce, 
    0x5, 0x144, 0xa3, 0x2, 0x7ca, 0x7cb, 0x7, 0x7, 0x2, 0x2, 0x7cb, 0x7cd, 
    0x5, 0x144, 0xa3, 0x2, 0x7cc, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7d0, 
    0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7cf, 
    0x3, 0x2, 0x2, 0x2, 0x7cf, 0x143, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7ce, 
    0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7de, 0x5, 0x4, 0x3, 0x2, 0x7d2, 0x7db, 
    0x7, 0x7f, 0x2, 0x2, 0x7d3, 0x7d8, 0x5, 0x146, 0xa4, 0x2, 0x7d4, 0x7d5, 
    0x7, 0x7, 0x2, 0x2, 0x7d5, 0x7d7, 0x5, 0x146, 0xa4, 0x2, 0x7d6, 0x7d4, 
    0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d6, 
    0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7dc, 
    0x3, 0x2, 0x2, 0x2, 0x7da, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7d3, 
    0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7dd, 
    0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7df, 0x7, 0x80, 0x2, 0x2, 0x7de, 0x7d2, 
    0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7df, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e1, 0x5, 0x190, 0xc9, 0x2, 0x7e1, 0x7e2, 
    0x7, 0x9, 0x2, 0x2, 0x7e2, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e0, 
    0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e4, 0x7e5, 
    0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7e6, 0x5, 0x1a, 0xe, 0x2, 0x7e6, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7ea, 0x5, 0xa, 0x6, 0x2, 0x7e8, 0x7ea, 
    0x5, 0x12, 0xa, 0x2, 0x7e9, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7e8, 
    0x3, 0x2, 0x2, 0x2, 0x7ea, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ee, 
    0x5, 0x120, 0x91, 0x2, 0x7ec, 0x7ee, 0x7, 0x4, 0x2, 0x2, 0x7ed, 0x7eb, 
    0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7f1, 
    0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7f0, 
    0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f2, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7ef, 
    0x3, 0x2, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x5, 0x2, 0x2, 0x7f3, 0x7f7, 
    0x3, 0x2, 0x2, 0x2, 0x7f4, 0x7f5, 0x7, 0x6b, 0x2, 0x2, 0x7f5, 0x7f7, 
    0x7, 0x5, 0x2, 0x2, 0x7f6, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f4, 
    0x3, 0x2, 0x2, 0x2, 0x7f7, 0x149, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7fd, 
    0x5, 0x14c, 0xa7, 0x2, 0x7f9, 0x7fa, 0x7, 0x7, 0x2, 0x2, 0x7fa, 0x7fc, 
    0x5, 0x14c, 0xa7, 0x2, 0x7fb, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7ff, 
    0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fb, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fe, 
    0x3, 0x2, 0x2, 0x2, 0x7fe, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x7fd, 
    0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 0x5, 0x190, 0xc9, 0x2, 0x801, 0x802, 
    0x7, 0xa, 0x2, 0x2, 0x802, 0x803, 0x5, 0x14e, 0xa8, 0x2, 0x803, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x804, 0x806, 0x7, 0x17, 0x2, 0x2, 0x805, 0x804, 
    0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 0x807, 
    0x3, 0x2, 0x2, 0x2, 0x807, 0x80a, 0x5, 0x1a, 0xe, 0x2, 0x808, 0x80a, 
    0x5, 0x152, 0xaa, 0x2, 0x809, 0x805, 0x3, 0x2, 0x2, 0x2, 0x809, 0x808, 
    0x3, 0x2, 0x2, 0x2, 0x80a, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x80b, 0x80c, 
    0x5, 0x190, 0xc9, 0x2, 0x80c, 0x80d, 0x7, 0x23, 0x2, 0x2, 0x80d, 0x80e, 
    0x5, 0x1a, 0xe, 0x2, 0x80e, 0x80f, 0x7, 0x24, 0x2, 0x2, 0x80f, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x810, 0x811, 0x7, 0x5a, 0x2, 0x2, 0x811, 0x812, 
    0x5, 0x6, 0x4, 0x2, 0x812, 0x813, 0x7, 0x23, 0x2, 0x2, 0x813, 0x814, 
    0x5, 0x1a, 0xe, 0x2, 0x814, 0x815, 0x7, 0x24, 0x2, 0x2, 0x815, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x816, 0x817, 0x7, 0xa, 0x2, 0x2, 0x817, 0x818, 
    0x7, 0x8, 0x2, 0x2, 0x818, 0x819, 0x6, 0xab, 0x2, 0x3, 0x819, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x81a, 0x81b, 0x7, 0x8, 0x2, 0x2, 0x81b, 0x81c, 
    0x7, 0x8, 0x2, 0x2, 0x81c, 0x81d, 0x6, 0xac, 0x3, 0x3, 0x81d, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x81e, 0x81f, 0x7, 0x8, 0x2, 0x2, 0x81f, 0x820, 
    0x7, 0x19, 0x2, 0x2, 0x820, 0x821, 0x6, 0xad, 0x4, 0x3, 0x821, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x822, 0x82a, 0x5, 0x15c, 0xaf, 0x2, 0x823, 0x82a, 
    0x5, 0x15e, 0xb0, 0x2, 0x824, 0x82a, 0x7, 0x73, 0x2, 0x2, 0x825, 0x82a, 
    0x7, 0x74, 0x2, 0x2, 0x826, 0x82a, 0x7, 0x75, 0x2, 0x2, 0x827, 0x82a, 
    0x7, 0x76, 0x2, 0x2, 0x828, 0x82a, 0x7, 0x44, 0x2, 0x2, 0x829, 0x822, 
    0x3, 0x2, 0x2, 0x2, 0x829, 0x823, 0x3, 0x2, 0x2, 0x2, 0x829, 0x824, 
    0x3, 0x2, 0x2, 0x2, 0x829, 0x825, 0x3, 0x2, 0x2, 0x2, 0x829, 0x826, 
    0x3, 0x2, 0x2, 0x2, 0x829, 0x827, 0x3, 0x2, 0x2, 0x2, 0x829, 0x828, 
    0x3, 0x2, 0x2, 0x2, 0x82a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x82c, 
    0x9, 0x11, 0x2, 0x2, 0x82c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x832, 
    0x5, 0x160, 0xb1, 0x2, 0x82e, 0x832, 0x5, 0x162, 0xb2, 0x2, 0x82f, 0x832, 
    0x7, 0x77, 0x2, 0x2, 0x830, 0x832, 0x7, 0x78, 0x2, 0x2, 0x831, 0x82d, 
    0x3, 0x2, 0x2, 0x2, 0x831, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x831, 0x82f, 
    0x3, 0x2, 0x2, 0x2, 0x831, 0x830, 0x3, 0x2, 0x2, 0x2, 0x832, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x833, 0x837, 0x7, 0x79, 0x2, 0x2, 0x834, 0x836, 
    0x5, 0x164, 0xb3, 0x2, 0x835, 0x834, 0x3, 0x2, 0x2, 0x2, 0x836, 0x839, 
    0x3, 0x2, 0x2, 0x2, 0x837, 0x835, 0x3, 0x2, 0x2, 0x2, 0x837, 0x838, 
    0x3, 0x2, 0x2, 0x2, 0x838, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x839, 0x837, 
    0x3, 0x2, 0x2, 0x2, 0x83a, 0x83b, 0x7, 0xac, 0x2, 0x2, 0x83b, 0x161, 
    0x3, 0x2, 0x2, 0x2, 0x83c, 0x840, 0x7, 0x7a, 0x2, 0x2, 0x83d, 0x83f, 
    0x5, 0x166, 0xb4, 0x2, 0x83e, 0x83d, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x842, 
    0x3, 0x2, 0x2, 0x2, 0x840, 0x83e, 0x3, 0x2, 0x2, 0x2, 0x840, 0x841, 
    0x3, 0x2, 0x2, 0x2, 0x841, 0x843, 0x3, 0x2, 0x2, 0x2, 0x842, 0x840, 
    0x3, 0x2, 0x2, 0x2, 0x843, 0x844, 0x7, 0xac, 0x2, 0x2, 0x844, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x845, 0x84a, 0x5, 0x168, 0xb5, 0x2, 0x846, 0x84a, 
    0x7, 0xa8, 0x2, 0x2, 0x847, 0x84a, 0x7, 0xaa, 0x2, 0x2, 0x848, 0x84a, 
    0x7, 0xad, 0x2, 0x2, 0x849, 0x845, 0x3, 0x2, 0x2, 0x2, 0x849, 0x846, 
    0x3, 0x2, 0x2, 0x2, 0x849, 0x847, 0x3, 0x2, 0x2, 0x2, 0x849, 0x848, 
    0x3, 0x2, 0x2, 0x2, 0x84a, 0x165, 0x3, 0x2, 0x2, 0x2, 0x84b, 0x850, 
    0x5, 0x168, 0xb5, 0x2, 0x84c, 0x850, 0x7, 0xa8, 0x2, 0x2, 0x84d, 0x850, 
    0x7, 0xab, 0x2, 0x2, 0x84e, 0x850, 0x7, 0xae, 0x2, 0x2, 0x84f, 0x84b, 
    0x3, 0x2, 0x2, 0x2, 0x84f, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x84d, 
    0x3, 0x2, 0x2, 0x2, 0x84f, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x850, 0x167, 
    0x3, 0x2, 0x2, 0x2, 0x851, 0x856, 0x5, 0x1a, 0xe, 0x2, 0x852, 0x853, 
    0x7, 0x7, 0x2, 0x2, 0x853, 0x855, 0x5, 0x1a, 0xe, 0x2, 0x854, 0x852, 
    0x3, 0x2, 0x2, 0x2, 0x855, 0x858, 0x3, 0x2, 0x2, 0x2, 0x856, 0x854, 
    0x3, 0x2, 0x2, 0x2, 0x856, 0x857, 0x3, 0x2, 0x2, 0x2, 0x857, 0x85f, 
    0x3, 0x2, 0x2, 0x2, 0x858, 0x856, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85b, 
    0x7, 0x9, 0x2, 0x2, 0x85a, 0x85c, 0x7, 0xb0, 0x2, 0x2, 0x85b, 0x85a, 
    0x3, 0x2, 0x2, 0x2, 0x85c, 0x85d, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x85b, 
    0x3, 0x2, 0x2, 0x2, 0x85d, 0x85e, 0x3, 0x2, 0x2, 0x2, 0x85e, 0x860, 
    0x3, 0x2, 0x2, 0x2, 0x85f, 0x859, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x860, 
    0x3, 0x2, 0x2, 0x2, 0x860, 0x169, 0x3, 0x2, 0x2, 0x2, 0x861, 0x862, 
    0x9, 0x12, 0x2, 0x2, 0x862, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x863, 0x864, 
    0x7, 0x1b, 0x2, 0x2, 0x864, 0x866, 0x5, 0x190, 0xc9, 0x2, 0x865, 0x867, 
    0x5, 0xc4, 0x63, 0x2, 0x866, 0x865, 0x3, 0x2, 0x2, 0x2, 0x866, 0x867, 
    0x3, 0x2, 0x2, 0x2, 0x867, 0x869, 0x3, 0x2, 0x2, 0x2, 0x868, 0x86a, 
    0x5, 0xc8, 0x65, 0x2, 0x869, 0x868, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86a, 
    0x3, 0x2, 0x2, 0x2, 0x86a, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86d, 
    0x5, 0xcc, 0x67, 0x2, 0x86c, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 
    0x3, 0x2, 0x2, 0x2, 0x86d, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x870, 
    0x5, 0xd8, 0x6d, 0x2, 0x86f, 0x871, 0x7, 0x26, 0x2, 0x2, 0x870, 0x86f, 
    0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 0x3, 0x2, 0x2, 0x2, 0x871, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x872, 0x873, 0x7, 0x5d, 0x2, 0x2, 0x873, 0x875, 
    0x5, 0x190, 0xc9, 0x2, 0x874, 0x876, 0x5, 0xc4, 0x63, 0x2, 0x875, 0x874, 
    0x3, 0x2, 0x2, 0x2, 0x875, 0x876, 0x3, 0x2, 0x2, 0x2, 0x876, 0x878, 
    0x3, 0x2, 0x2, 0x2, 0x877, 0x879, 0x5, 0x118, 0x8d, 0x2, 0x878, 0x877, 
    0x3, 0x2, 0x2, 0x2, 0x878, 0x879, 0x3, 0x2, 0x2, 0x2, 0x879, 0x87b, 
    0x3, 0x2, 0x2, 0x2, 0x87a, 0x87c, 0x5, 0xcc, 0x67, 0x2, 0x87b, 0x87a, 
    0x3, 0x2, 0x2, 0x2, 0x87b, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87d, 
    0x3, 0x2, 0x2, 0x2, 0x87d, 0x87f, 0x5, 0x11a, 0x8e, 0x2, 0x87e, 0x880, 
    0x7, 0x26, 0x2, 0x2, 0x87f, 0x87e, 0x3, 0x2, 0x2, 0x2, 0x87f, 0x880, 
    0x3, 0x2, 0x2, 0x2, 0x880, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x881, 0x882, 
    0x7, 0x39, 0x2, 0x2, 0x882, 0x884, 0x5, 0x190, 0xc9, 0x2, 0x883, 0x885, 
    0x5, 0x124, 0x93, 0x2, 0x884, 0x883, 0x3, 0x2, 0x2, 0x2, 0x884, 0x885, 
    0x3, 0x2, 0x2, 0x2, 0x885, 0x887, 0x3, 0x2, 0x2, 0x2, 0x886, 0x888, 
    0x5, 0x12a, 0x96, 0x2, 0x887, 0x886, 0x3, 0x2, 0x2, 0x2, 0x887, 0x888, 
    0x3, 0x2, 0x2, 0x2, 0x888, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x889, 0x88b, 
    0x5, 0xcc, 0x67, 0x2, 0x88a, 0x889, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88b, 
    0x3, 0x2, 0x2, 0x2, 0x88b, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88e, 
    0x5, 0x12c, 0x97, 0x2, 0x88d, 0x88f, 0x7, 0x26, 0x2, 0x2, 0x88e, 0x88d, 
    0x3, 0x2, 0x2, 0x2, 0x88e, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x890, 0x891, 0x7, 0x26, 0x2, 0x2, 0x891, 0x893, 
    0x5, 0x190, 0xc9, 0x2, 0x892, 0x894, 0x5, 0x132, 0x9a, 0x2, 0x893, 0x892, 
    0x3, 0x2, 0x2, 0x2, 0x893, 0x894, 0x3, 0x2, 0x2, 0x2, 0x894, 0x895, 
    0x3, 0x2, 0x2, 0x2, 0x895, 0x897, 0x5, 0x134, 0x9b, 0x2, 0x896, 0x898, 
    0x7, 0x26, 0x2, 0x2, 0x897, 0x896, 0x3, 0x2, 0x2, 0x2, 0x897, 0x898, 
    0x3, 0x2, 0x2, 0x2, 0x898, 0x173, 0x3, 0x2, 0x2, 0x2, 0x899, 0x89a, 
    0x7, 0x20, 0x2, 0x2, 0x89a, 0x89b, 0x5, 0xf0, 0x79, 0x2, 0x89b, 0x89d, 
    0x5, 0x190, 0xc9, 0x2, 0x89c, 0x89e, 0x5, 0x124, 0x93, 0x2, 0x89d, 0x89c, 
    0x3, 0x2, 0x2, 0x2, 0x89d, 0x89e, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x89f, 
    0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a1, 0x7, 0x7f, 0x2, 0x2, 0x8a0, 0x8a2, 
    0x5, 0xf6, 0x7c, 0x2, 0x8a1, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8a1, 0x8a2, 
    0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a5, 
    0x7, 0x80, 0x2, 0x2, 0x8a4, 0x8a6, 0x5, 0xcc, 0x67, 0x2, 0x8a5, 0x8a4, 
    0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a7, 
    0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x26, 0x2, 0x2, 0x8a8, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x8a9, 0x8aa, 0x7, 0x28, 0x2, 0x2, 0x8aa, 0x8b3, 
    0x5, 0x6, 0x4, 0x2, 0x8ab, 0x8ac, 0x5, 0xea, 0x76, 0x2, 0x8ac, 0x8ad, 
    0x7, 0x26, 0x2, 0x2, 0x8ad, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8af, 
    0x5, 0xf2, 0x7a, 0x2, 0x8af, 0x8b0, 0x7, 0x7b, 0x2, 0x2, 0x8b0, 0x8b1, 
    0x5, 0x10a, 0x86, 0x2, 0x8b1, 0x8b2, 0x7, 0x7c, 0x2, 0x2, 0x8b2, 0x8b4, 
    0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8ae, 
    0x3, 0x2, 0x2, 0x2, 0x8b4, 0x177, 0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8b6, 
    0x5, 0xea, 0x76, 0x2, 0x8b6, 0x8b7, 0x7, 0x26, 0x2, 0x2, 0x8b7, 0x179, 
    0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8c6, 0x5, 0xf2, 0x7a, 0x2, 0x8b9, 0x8ba, 
    0x7, 0x7b, 0x2, 0x2, 0x8ba, 0x8bb, 0x5, 0x100, 0x81, 0x2, 0x8bb, 0x8c0, 
    0x7, 0x7c, 0x2, 0x2, 0x8bc, 0x8bd, 0x7, 0xa, 0x2, 0x2, 0x8bd, 0x8be, 
    0x5, 0xee, 0x78, 0x2, 0x8be, 0x8bf, 0x7, 0x26, 0x2, 0x2, 0x8bf, 0x8c1, 
    0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c1, 
    0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c7, 0x3, 0x2, 0x2, 0x2, 0x8c2, 0x8c3, 
    0x5, 0x154, 0xab, 0x2, 0x8c3, 0x8c4, 0x5, 0x1a, 0xe, 0x2, 0x8c4, 0x8c5, 
    0x7, 0x26, 0x2, 0x2, 0x8c5, 0x8c7, 0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8b9, 
    0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x8c7, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c9, 0x7, 0x1c, 0x2, 0x2, 0x8c9, 0x8ca, 
    0x5, 0x6, 0x4, 0x2, 0x8ca, 0x8cb, 0x5, 0xe6, 0x74, 0x2, 0x8cb, 0x8cc, 
    0x7, 0x26, 0x2, 0x2, 0x8cc, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8ce, 
    0x7, 0x5f, 0x2, 0x2, 0x8ce, 0x8cf, 0x7, 0x23, 0x2, 0x2, 0x8cf, 0x8d0, 
    0x5, 0xf6, 0x7c, 0x2, 0x8d0, 0x8d9, 0x7, 0x24, 0x2, 0x2, 0x8d1, 0x8d2, 
    0x7, 0x7b, 0x2, 0x2, 0x8d2, 0x8d3, 0x5, 0x100, 0x81, 0x2, 0x8d3, 0x8d4, 
    0x7, 0x7c, 0x2, 0x2, 0x8d4, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8d6, 
    0x5, 0x154, 0xab, 0x2, 0x8d6, 0x8d7, 0x5, 0x1a, 0xe, 0x2, 0x8d7, 0x8d8, 
    0x7, 0x26, 0x2, 0x2, 0x8d8, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8d1, 
    0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dc, 0x7, 0x1f, 0x2, 0x2, 0x8dc, 0x8dd, 
    0x5, 0x190, 0xc9, 0x2, 0x8dd, 0x8de, 0x7, 0x7f, 0x2, 0x2, 0x8de, 0x8df, 
    0x7, 0x80, 0x2, 0x2, 0x8df, 0x8e0, 0x5, 0x116, 0x8c, 0x2, 0x8e0, 0x181, 
    0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8e2, 0x5, 0x190, 0xc9, 0x2, 0x8e2, 0x8e4, 
    0x7, 0x7f, 0x2, 0x2, 0x8e3, 0x8e5, 0x5, 0xf6, 0x7c, 0x2, 0x8e4, 0x8e3, 
    0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8e6, 
    0x3, 0x2, 0x2, 0x2, 0x8e6, 0x8e8, 0x7, 0x80, 0x2, 0x2, 0x8e7, 0x8e9, 
    0x5, 0x114, 0x8b, 0x2, 0x8e8, 0x8e7, 0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8e9, 
    0x3, 0x2, 0x2, 0x2, 0x8e9, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8eb, 
    0x5, 0x116, 0x8c, 0x2, 0x8eb, 0x183, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ee, 
    0x5, 0x186, 0xc4, 0x2, 0x8ed, 0x8ef, 0x5, 0xc4, 0x63, 0x2, 0x8ee, 0x8ed, 
    0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8f0, 
    0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8f2, 0x7, 0x7f, 0x2, 0x2, 0x8f1, 0x8f3, 
    0x5, 0xf6, 0x7c, 0x2, 0x8f2, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f3, 
    0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f6, 
    0x7, 0x80, 0x2, 0x2, 0x8f5, 0x8f7, 0x5, 0xcc, 0x67, 0x2, 0x8f6, 0x8f5, 
    0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f7, 0x8fd, 
    0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8fe, 0x5, 0xf4, 0x7b, 0x2, 0x8f9, 0x8fa, 
    0x5, 0x154, 0xab, 0x2, 0x8fa, 0x8fb, 0x5, 0x1a, 0xe, 0x2, 0x8fb, 0x8fc, 
    0x7, 0x26, 0x2, 0x2, 0x8fc, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8f8, 
    0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x8ff, 0x905, 0x5, 0x190, 0xc9, 0x2, 0x900, 0x901, 
    0x5, 0x190, 0xc9, 0x2, 0x901, 0x902, 0x7, 0x25, 0x2, 0x2, 0x902, 0x903, 
    0x5, 0x190, 0xc9, 0x2, 0x903, 0x905, 0x3, 0x2, 0x2, 0x2, 0x904, 0x8ff, 
    0x3, 0x2, 0x2, 0x2, 0x904, 0x900, 0x3, 0x2, 0x2, 0x2, 0x905, 0x90d, 
    0x3, 0x2, 0x2, 0x2, 0x906, 0x908, 0x5, 0x14, 0xb, 0x2, 0x907, 0x906, 
    0x3, 0x2, 0x2, 0x2, 0x907, 0x908, 0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 
    0x3, 0x2, 0x2, 0x2, 0x909, 0x90a, 0x7, 0x3, 0x2, 0x2, 0x90a, 0x90c, 
    0x5, 0x190, 0xc9, 0x2, 0x90b, 0x907, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90f, 
    0x3, 0x2, 0x2, 0x2, 0x90d, 0x90b, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 
    0x3, 0x2, 0x2, 0x2, 0x90e, 0x187, 0x3, 0x2, 0x2, 0x2, 0x90f, 0x90d, 
    0x3, 0x2, 0x2, 0x2, 0x910, 0x911, 0x7, 0x47, 0x2, 0x2, 0x911, 0x912, 
    0x5, 0x110, 0x89, 0x2, 0x912, 0x913, 0x7, 0x7f, 0x2, 0x2, 0x913, 0x916, 
    0x5, 0x18a, 0xc6, 0x2, 0x914, 0x915, 0x7, 0x7, 0x2, 0x2, 0x915, 0x917, 
    0x5, 0x18a, 0xc6, 0x2, 0x916, 0x914, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 
    0x3, 0x2, 0x2, 0x2, 0x917, 0x918, 0x3, 0x2, 0x2, 0x2, 0x918, 0x91e, 
    0x7, 0x80, 0x2, 0x2, 0x919, 0x91f, 0x5, 0x116, 0x8c, 0x2, 0x91a, 0x91b, 
    0x5, 0x154, 0xab, 0x2, 0x91b, 0x91c, 0x5, 0x1a, 0xe, 0x2, 0x91c, 0x91d, 
    0x7, 0x26, 0x2, 0x2, 0x91d, 0x91f, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x919, 
    0x3, 0x2, 0x2, 0x2, 0x91e, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91f, 0x189, 
    0x3, 0x2, 0x2, 0x2, 0x920, 0x921, 0x5, 0x6, 0x4, 0x2, 0x921, 0x924, 
    0x5, 0x190, 0xc9, 0x2, 0x922, 0x923, 0x7, 0xa, 0x2, 0x2, 0x923, 0x925, 
    0x5, 0x1a, 0xe, 0x2, 0x924, 0x922, 0x3, 0x2, 0x2, 0x2, 0x924, 0x925, 
    0x3, 0x2, 0x2, 0x2, 0x925, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x926, 0x928, 
    0x7, 0x7f, 0x2, 0x2, 0x927, 0x929, 0x5, 0x16, 0xc, 0x2, 0x928, 0x927, 
    0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x3, 0x2, 0x2, 0x2, 0x929, 0x92a, 
    0x3, 0x2, 0x2, 0x2, 0x92a, 0x92b, 0x7, 0x80, 0x2, 0x2, 0x92b, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x92c, 0x92e, 0x7, 0x7f, 0x2, 0x2, 0x92d, 0x92f, 
    0x5, 0x16, 0xc, 0x2, 0x92e, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 
    0x3, 0x2, 0x2, 0x2, 0x92f, 0x930, 0x3, 0x2, 0x2, 0x2, 0x930, 0x932, 
    0x7, 0x80, 0x2, 0x2, 0x931, 0x933, 0x5, 0x4a, 0x26, 0x2, 0x932, 0x931, 
    0x3, 0x2, 0x2, 0x2, 0x932, 0x933, 0x3, 0x2, 0x2, 0x2, 0x933, 0x18f, 
    0x3, 0x2, 0x2, 0x2, 0x934, 0x935, 0x9, 0x13, 0x2, 0x2, 0x935, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x193, 0x196, 0x199, 0x19e, 0x1a2, 0x1a8, 
    0x1ab, 0x1b0, 0x1b4, 0x1bb, 0x1bd, 0x1c4, 0x1c8, 0x1cd, 0x1d7, 0x1df, 
    0x1e9, 0x1ef, 0x1f2, 0x1f8, 0x1fd, 0x20e, 0x216, 0x21b, 0x222, 0x22a, 
    0x232, 0x23a, 0x242, 0x24a, 0x254, 0x256, 0x25c, 0x261, 0x269, 0x271, 
    0x28c, 0x292, 0x29b, 0x2a0, 0x2a5, 0x2ab, 0x2b9, 0x2bf, 0x2cb, 0x2cf, 
    0x2d4, 0x2d8, 0x2de, 0x2e5, 0x2f8, 0x2fd, 0x300, 0x30f, 0x315, 0x318, 
    0x31d, 0x320, 0x328, 0x330, 0x33b, 0x340, 0x345, 0x347, 0x350, 0x358, 
    0x35f, 0x367, 0x36b, 0x374, 0x379, 0x37b, 0x384, 0x38c, 0x390, 0x395, 
    0x397, 0x39c, 0x3a0, 0x3a7, 0x3af, 0x3b1, 0x3b5, 0x3b8, 0x3c9, 0x3d0, 
    0x3d4, 0x3de, 0x3e3, 0x3ea, 0x3f3, 0x3f8, 0x3ff, 0x40b, 0x416, 0x41e, 
    0x423, 0x42c, 0x438, 0x43d, 0x441, 0x44e, 0x458, 0x46e, 0x472, 0x476, 
    0x48c, 0x491, 0x496, 0x49d, 0x4a0, 0x4b6, 0x4c2, 0x4c6, 0x4d0, 0x4d6, 
    0x4db, 0x4e3, 0x4e8, 0x4f2, 0x4f7, 0x4ff, 0x502, 0x509, 0x510, 0x514, 
    0x517, 0x51d, 0x521, 0x527, 0x535, 0x53b, 0x542, 0x547, 0x54a, 0x54d, 
    0x554, 0x55e, 0x56f, 0x574, 0x578, 0x57b, 0x57e, 0x585, 0x58b, 0x593, 
    0x599, 0x5a3, 0x5ab, 0x5b1, 0x5bc, 0x5c0, 0x5c2, 0x5c7, 0x5ce, 0x5d7, 
    0x5de, 0x5e1, 0x5e4, 0x5e8, 0x5ed, 0x5fa, 0x604, 0x610, 0x617, 0x623, 
    0x629, 0x62d, 0x631, 0x637, 0x63d, 0x63f, 0x646, 0x64a, 0x64d, 0x651, 
    0x656, 0x65d, 0x660, 0x665, 0x66a, 0x66c, 0x66f, 0x672, 0x678, 0x67b, 
    0x687, 0x68b, 0x68e, 0x698, 0x69b, 0x6a1, 0x6bc, 0x6c9, 0x6cf, 0x6d8, 
    0x6de, 0x6e1, 0x6e9, 0x6ed, 0x6f3, 0x6f9, 0x6ff, 0x70a, 0x70e, 0x710, 
    0x71a, 0x720, 0x723, 0x730, 0x736, 0x739, 0x73c, 0x741, 0x745, 0x749, 
    0x75a, 0x75d, 0x762, 0x766, 0x76a, 0x773, 0x776, 0x77b, 0x77f, 0x784, 
    0x788, 0x78a, 0x795, 0x799, 0x79b, 0x7a0, 0x7a5, 0x7ac, 0x7b2, 0x7b7, 
    0x7bd, 0x7c1, 0x7c7, 0x7ce, 0x7d8, 0x7db, 0x7de, 0x7e3, 0x7e9, 0x7ed, 
    0x7ef, 0x7f6, 0x7fd, 0x805, 0x809, 0x829, 0x831, 0x837, 0x840, 0x849, 
    0x84f, 0x856, 0x85d, 0x85f, 0x866, 0x869, 0x86c, 0x870, 0x875, 0x878, 
    0x87b, 0x87f, 0x884, 0x887, 0x88a, 0x88e, 0x893, 0x897, 0x89d, 0x8a1, 
    0x8a5, 0x8b3, 0x8c0, 0x8c6, 0x8d9, 0x8e4, 0x8e8, 0x8ee, 0x8f2, 0x8f6, 
    0x8fd, 0x904, 0x907, 0x90d, 0x916, 0x91e, 0x924, 0x928, 0x92e, 0x932, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MyParserParser::Initializer MyParserParser::_init;

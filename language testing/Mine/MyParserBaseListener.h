
// Generated from MyParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyParserListener.h"


/**
 * This class provides an empty implementation of MyParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MyParserBaseListener : public MyParserListener {
public:

  virtual void enterCompilation_unit(MyParserParser::Compilation_unitContext * /*ctx*/) override { }
  virtual void exitCompilation_unit(MyParserParser::Compilation_unitContext * /*ctx*/) override { }

  virtual void enterNamespace_or_type_name(MyParserParser::Namespace_or_type_nameContext * /*ctx*/) override { }
  virtual void exitNamespace_or_type_name(MyParserParser::Namespace_or_type_nameContext * /*ctx*/) override { }

  virtual void enterType(MyParserParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(MyParserParser::TypeContext * /*ctx*/) override { }

  virtual void enterBase_type(MyParserParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(MyParserParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterSimple_type(MyParserParser::Simple_typeContext * /*ctx*/) override { }
  virtual void exitSimple_type(MyParserParser::Simple_typeContext * /*ctx*/) override { }

  virtual void enterNumeric_type(MyParserParser::Numeric_typeContext * /*ctx*/) override { }
  virtual void exitNumeric_type(MyParserParser::Numeric_typeContext * /*ctx*/) override { }

  virtual void enterIntegral_type(MyParserParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(MyParserParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterFloating_point_type(MyParserParser::Floating_point_typeContext * /*ctx*/) override { }
  virtual void exitFloating_point_type(MyParserParser::Floating_point_typeContext * /*ctx*/) override { }

  virtual void enterClass_type(MyParserParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(MyParserParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterType_argument_list(MyParserParser::Type_argument_listContext * /*ctx*/) override { }
  virtual void exitType_argument_list(MyParserParser::Type_argument_listContext * /*ctx*/) override { }

  virtual void enterArgument_list(MyParserParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(MyParserParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterArgument(MyParserParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(MyParserParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpression(MyParserParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(MyParserParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNon_assignment_expression(MyParserParser::Non_assignment_expressionContext * /*ctx*/) override { }
  virtual void exitNon_assignment_expression(MyParserParser::Non_assignment_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment(MyParserParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(MyParserParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(MyParserParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(MyParserParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(MyParserParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(MyParserParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterNull_coalescing_expression(MyParserParser::Null_coalescing_expressionContext * /*ctx*/) override { }
  virtual void exitNull_coalescing_expression(MyParserParser::Null_coalescing_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_or_expression(MyParserParser::Conditional_or_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_or_expression(MyParserParser::Conditional_or_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_and_expression(MyParserParser::Conditional_and_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_and_expression(MyParserParser::Conditional_and_expressionContext * /*ctx*/) override { }

  virtual void enterInclusive_or_expression(MyParserParser::Inclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitInclusive_or_expression(MyParserParser::Inclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterExclusive_or_expression(MyParserParser::Exclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitExclusive_or_expression(MyParserParser::Exclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(MyParserParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(MyParserParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(MyParserParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(MyParserParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(MyParserParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(MyParserParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterShift_expression(MyParserParser::Shift_expressionContext * /*ctx*/) override { }
  virtual void exitShift_expression(MyParserParser::Shift_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(MyParserParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(MyParserParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(MyParserParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(MyParserParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(MyParserParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(MyParserParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(MyParserParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(MyParserParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(MyParserParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(MyParserParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleNameExpression(MyParserParser::SimpleNameExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleNameExpression(MyParserParser::SimpleNameExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesisExpressions(MyParserParser::ParenthesisExpressionsContext * /*ctx*/) override { }
  virtual void exitParenthesisExpressions(MyParserParser::ParenthesisExpressionsContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpression(MyParserParser::MemberAccessExpressionContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpression(MyParserParser::MemberAccessExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralAccessExpression(MyParserParser::LiteralAccessExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralAccessExpression(MyParserParser::LiteralAccessExpressionContext * /*ctx*/) override { }

  virtual void enterThisReferenceExpression(MyParserParser::ThisReferenceExpressionContext * /*ctx*/) override { }
  virtual void exitThisReferenceExpression(MyParserParser::ThisReferenceExpressionContext * /*ctx*/) override { }

  virtual void enterBaseAccessExpression(MyParserParser::BaseAccessExpressionContext * /*ctx*/) override { }
  virtual void exitBaseAccessExpression(MyParserParser::BaseAccessExpressionContext * /*ctx*/) override { }

  virtual void enterObjectCreationExpression(MyParserParser::ObjectCreationExpressionContext * /*ctx*/) override { }
  virtual void exitObjectCreationExpression(MyParserParser::ObjectCreationExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(MyParserParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(MyParserParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterCheckedExpression(MyParserParser::CheckedExpressionContext * /*ctx*/) override { }
  virtual void exitCheckedExpression(MyParserParser::CheckedExpressionContext * /*ctx*/) override { }

  virtual void enterUncheckedExpression(MyParserParser::UncheckedExpressionContext * /*ctx*/) override { }
  virtual void exitUncheckedExpression(MyParserParser::UncheckedExpressionContext * /*ctx*/) override { }

  virtual void enterDefaultValueExpression(MyParserParser::DefaultValueExpressionContext * /*ctx*/) override { }
  virtual void exitDefaultValueExpression(MyParserParser::DefaultValueExpressionContext * /*ctx*/) override { }

  virtual void enterAnonymousMethodExpression(MyParserParser::AnonymousMethodExpressionContext * /*ctx*/) override { }
  virtual void exitAnonymousMethodExpression(MyParserParser::AnonymousMethodExpressionContext * /*ctx*/) override { }

  virtual void enterSizeofExpression(MyParserParser::SizeofExpressionContext * /*ctx*/) override { }
  virtual void exitSizeofExpression(MyParserParser::SizeofExpressionContext * /*ctx*/) override { }

  virtual void enterNameofExpression(MyParserParser::NameofExpressionContext * /*ctx*/) override { }
  virtual void exitNameofExpression(MyParserParser::NameofExpressionContext * /*ctx*/) override { }

  virtual void enterMember_access(MyParserParser::Member_accessContext * /*ctx*/) override { }
  virtual void exitMember_access(MyParserParser::Member_accessContext * /*ctx*/) override { }

  virtual void enterBracket_expression(MyParserParser::Bracket_expressionContext * /*ctx*/) override { }
  virtual void exitBracket_expression(MyParserParser::Bracket_expressionContext * /*ctx*/) override { }

  virtual void enterIndexer_argument(MyParserParser::Indexer_argumentContext * /*ctx*/) override { }
  virtual void exitIndexer_argument(MyParserParser::Indexer_argumentContext * /*ctx*/) override { }

  virtual void enterPredefined_type(MyParserParser::Predefined_typeContext * /*ctx*/) override { }
  virtual void exitPredefined_type(MyParserParser::Predefined_typeContext * /*ctx*/) override { }

  virtual void enterExpression_list(MyParserParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(MyParserParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterObject_or_collection_initializer(MyParserParser::Object_or_collection_initializerContext * /*ctx*/) override { }
  virtual void exitObject_or_collection_initializer(MyParserParser::Object_or_collection_initializerContext * /*ctx*/) override { }

  virtual void enterObject_initializer(MyParserParser::Object_initializerContext * /*ctx*/) override { }
  virtual void exitObject_initializer(MyParserParser::Object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_initializer_list(MyParserParser::Member_initializer_listContext * /*ctx*/) override { }
  virtual void exitMember_initializer_list(MyParserParser::Member_initializer_listContext * /*ctx*/) override { }

  virtual void enterMember_initializer(MyParserParser::Member_initializerContext * /*ctx*/) override { }
  virtual void exitMember_initializer(MyParserParser::Member_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer_value(MyParserParser::Initializer_valueContext * /*ctx*/) override { }
  virtual void exitInitializer_value(MyParserParser::Initializer_valueContext * /*ctx*/) override { }

  virtual void enterCollection_initializer(MyParserParser::Collection_initializerContext * /*ctx*/) override { }
  virtual void exitCollection_initializer(MyParserParser::Collection_initializerContext * /*ctx*/) override { }

  virtual void enterElement_initializer(MyParserParser::Element_initializerContext * /*ctx*/) override { }
  virtual void exitElement_initializer(MyParserParser::Element_initializerContext * /*ctx*/) override { }

  virtual void enterAnonymous_object_initializer(MyParserParser::Anonymous_object_initializerContext * /*ctx*/) override { }
  virtual void exitAnonymous_object_initializer(MyParserParser::Anonymous_object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_declarator_list(MyParserParser::Member_declarator_listContext * /*ctx*/) override { }
  virtual void exitMember_declarator_list(MyParserParser::Member_declarator_listContext * /*ctx*/) override { }

  virtual void enterMember_declarator(MyParserParser::Member_declaratorContext * /*ctx*/) override { }
  virtual void exitMember_declarator(MyParserParser::Member_declaratorContext * /*ctx*/) override { }

  virtual void enterUnbound_type_name(MyParserParser::Unbound_type_nameContext * /*ctx*/) override { }
  virtual void exitUnbound_type_name(MyParserParser::Unbound_type_nameContext * /*ctx*/) override { }

  virtual void enterGeneric_dimension_specifier(MyParserParser::Generic_dimension_specifierContext * /*ctx*/) override { }
  virtual void exitGeneric_dimension_specifier(MyParserParser::Generic_dimension_specifierContext * /*ctx*/) override { }

  virtual void enterIsType(MyParserParser::IsTypeContext * /*ctx*/) override { }
  virtual void exitIsType(MyParserParser::IsTypeContext * /*ctx*/) override { }

  virtual void enterLambda_expression(MyParserParser::Lambda_expressionContext * /*ctx*/) override { }
  virtual void exitLambda_expression(MyParserParser::Lambda_expressionContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_signature(MyParserParser::Anonymous_function_signatureContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_signature(MyParserParser::Anonymous_function_signatureContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter_list(MyParserParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter_list(MyParserParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter(MyParserParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter(MyParserParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }

  virtual void enterImplicit_anonymous_function_parameter_list(MyParserParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitImplicit_anonymous_function_parameter_list(MyParserParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_body(MyParserParser::Anonymous_function_bodyContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_body(MyParserParser::Anonymous_function_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_expression(MyParserParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(MyParserParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterFrom_clause(MyParserParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(MyParserParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_body(MyParserParser::Query_bodyContext * /*ctx*/) override { }
  virtual void exitQuery_body(MyParserParser::Query_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_body_clause(MyParserParser::Query_body_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_body_clause(MyParserParser::Query_body_clauseContext * /*ctx*/) override { }

  virtual void enterLet_clause(MyParserParser::Let_clauseContext * /*ctx*/) override { }
  virtual void exitLet_clause(MyParserParser::Let_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_clause(MyParserParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(MyParserParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterCombined_join_clause(MyParserParser::Combined_join_clauseContext * /*ctx*/) override { }
  virtual void exitCombined_join_clause(MyParserParser::Combined_join_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_clause(MyParserParser::Orderby_clauseContext * /*ctx*/) override { }
  virtual void exitOrderby_clause(MyParserParser::Orderby_clauseContext * /*ctx*/) override { }

  virtual void enterOrdering(MyParserParser::OrderingContext * /*ctx*/) override { }
  virtual void exitOrdering(MyParserParser::OrderingContext * /*ctx*/) override { }

  virtual void enterSelect_or_group_clause(MyParserParser::Select_or_group_clauseContext * /*ctx*/) override { }
  virtual void exitSelect_or_group_clause(MyParserParser::Select_or_group_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_continuation(MyParserParser::Query_continuationContext * /*ctx*/) override { }
  virtual void exitQuery_continuation(MyParserParser::Query_continuationContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(MyParserParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(MyParserParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(MyParserParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(MyParserParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterEmbeddedStatement(MyParserParser::EmbeddedStatementContext * /*ctx*/) override { }
  virtual void exitEmbeddedStatement(MyParserParser::EmbeddedStatementContext * /*ctx*/) override { }

  virtual void enterEmbedded_statement(MyParserParser::Embedded_statementContext * /*ctx*/) override { }
  virtual void exitEmbedded_statement(MyParserParser::Embedded_statementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(MyParserParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(MyParserParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(MyParserParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(MyParserParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(MyParserParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(MyParserParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(MyParserParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(MyParserParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(MyParserParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(MyParserParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(MyParserParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(MyParserParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(MyParserParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(MyParserParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForeschStatement(MyParserParser::ForeschStatementContext * /*ctx*/) override { }
  virtual void exitForeschStatement(MyParserParser::ForeschStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(MyParserParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(MyParserParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(MyParserParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(MyParserParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(MyParserParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(MyParserParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(MyParserParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(MyParserParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(MyParserParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(MyParserParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(MyParserParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(MyParserParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCheckedStatement(MyParserParser::CheckedStatementContext * /*ctx*/) override { }
  virtual void exitCheckedStatement(MyParserParser::CheckedStatementContext * /*ctx*/) override { }

  virtual void enterUncheckedStatement(MyParserParser::UncheckedStatementContext * /*ctx*/) override { }
  virtual void exitUncheckedStatement(MyParserParser::UncheckedStatementContext * /*ctx*/) override { }

  virtual void enterLockStatement(MyParserParser::LockStatementContext * /*ctx*/) override { }
  virtual void exitLockStatement(MyParserParser::LockStatementContext * /*ctx*/) override { }

  virtual void enterUsingStatement(MyParserParser::UsingStatementContext * /*ctx*/) override { }
  virtual void exitUsingStatement(MyParserParser::UsingStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(MyParserParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(MyParserParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterUnsafeStatement(MyParserParser::UnsafeStatementContext * /*ctx*/) override { }
  virtual void exitUnsafeStatement(MyParserParser::UnsafeStatementContext * /*ctx*/) override { }

  virtual void enterFixedStatement(MyParserParser::FixedStatementContext * /*ctx*/) override { }
  virtual void exitFixedStatement(MyParserParser::FixedStatementContext * /*ctx*/) override { }

  virtual void enterBlock(MyParserParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(MyParserParser::BlockContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declaration(MyParserParser::Local_variable_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declaration(MyParserParser::Local_variable_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declarator(MyParserParser::Local_variable_declaratorContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declarator(MyParserParser::Local_variable_declaratorContext * /*ctx*/) override { }

  virtual void enterLocal_variable_initializer(MyParserParser::Local_variable_initializerContext * /*ctx*/) override { }
  virtual void exitLocal_variable_initializer(MyParserParser::Local_variable_initializerContext * /*ctx*/) override { }

  virtual void enterLocal_constant_declaration(MyParserParser::Local_constant_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_constant_declaration(MyParserParser::Local_constant_declarationContext * /*ctx*/) override { }

  virtual void enterIf_body(MyParserParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(MyParserParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterSwitch_section(MyParserParser::Switch_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_section(MyParserParser::Switch_sectionContext * /*ctx*/) override { }

  virtual void enterSwitch_label(MyParserParser::Switch_labelContext * /*ctx*/) override { }
  virtual void exitSwitch_label(MyParserParser::Switch_labelContext * /*ctx*/) override { }

  virtual void enterStatement_list(MyParserParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(MyParserParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterFor_initializer(MyParserParser::For_initializerContext * /*ctx*/) override { }
  virtual void exitFor_initializer(MyParserParser::For_initializerContext * /*ctx*/) override { }

  virtual void enterFor_iterator(MyParserParser::For_iteratorContext * /*ctx*/) override { }
  virtual void exitFor_iterator(MyParserParser::For_iteratorContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(MyParserParser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(MyParserParser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterSpecific_catch_clause(MyParserParser::Specific_catch_clauseContext * /*ctx*/) override { }
  virtual void exitSpecific_catch_clause(MyParserParser::Specific_catch_clauseContext * /*ctx*/) override { }

  virtual void enterGeneral_catch_clause(MyParserParser::General_catch_clauseContext * /*ctx*/) override { }
  virtual void exitGeneral_catch_clause(MyParserParser::General_catch_clauseContext * /*ctx*/) override { }

  virtual void enterException_filter(MyParserParser::Exception_filterContext * /*ctx*/) override { }
  virtual void exitException_filter(MyParserParser::Exception_filterContext * /*ctx*/) override { }

  virtual void enterFinally_clause(MyParserParser::Finally_clauseContext * /*ctx*/) override { }
  virtual void exitFinally_clause(MyParserParser::Finally_clauseContext * /*ctx*/) override { }

  virtual void enterResource_acquisition(MyParserParser::Resource_acquisitionContext * /*ctx*/) override { }
  virtual void exitResource_acquisition(MyParserParser::Resource_acquisitionContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(MyParserParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(MyParserParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_identifier(MyParserParser::Qualified_identifierContext * /*ctx*/) override { }
  virtual void exitQualified_identifier(MyParserParser::Qualified_identifierContext * /*ctx*/) override { }

  virtual void enterNamespace_body(MyParserParser::Namespace_bodyContext * /*ctx*/) override { }
  virtual void exitNamespace_body(MyParserParser::Namespace_bodyContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directives(MyParserParser::Extern_alias_directivesContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directives(MyParserParser::Extern_alias_directivesContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directive(MyParserParser::Extern_alias_directiveContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directive(MyParserParser::Extern_alias_directiveContext * /*ctx*/) override { }

  virtual void enterUsing_directives(MyParserParser::Using_directivesContext * /*ctx*/) override { }
  virtual void exitUsing_directives(MyParserParser::Using_directivesContext * /*ctx*/) override { }

  virtual void enterUsingAliasDirective(MyParserParser::UsingAliasDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingAliasDirective(MyParserParser::UsingAliasDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingNamespaceDirective(MyParserParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingNamespaceDirective(MyParserParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingStaticDirective(MyParserParser::UsingStaticDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingStaticDirective(MyParserParser::UsingStaticDirectiveContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declarations(MyParserParser::Namespace_member_declarationsContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declarations(MyParserParser::Namespace_member_declarationsContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declaration(MyParserParser::Namespace_member_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declaration(MyParserParser::Namespace_member_declarationContext * /*ctx*/) override { }

  virtual void enterType_declaration(MyParserParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(MyParserParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_alias_member(MyParserParser::Qualified_alias_memberContext * /*ctx*/) override { }
  virtual void exitQualified_alias_member(MyParserParser::Qualified_alias_memberContext * /*ctx*/) override { }

  virtual void enterType_parameter_list(MyParserParser::Type_parameter_listContext * /*ctx*/) override { }
  virtual void exitType_parameter_list(MyParserParser::Type_parameter_listContext * /*ctx*/) override { }

  virtual void enterType_parameter(MyParserParser::Type_parameterContext * /*ctx*/) override { }
  virtual void exitType_parameter(MyParserParser::Type_parameterContext * /*ctx*/) override { }

  virtual void enterClass_base(MyParserParser::Class_baseContext * /*ctx*/) override { }
  virtual void exitClass_base(MyParserParser::Class_baseContext * /*ctx*/) override { }

  virtual void enterInterface_type_list(MyParserParser::Interface_type_listContext * /*ctx*/) override { }
  virtual void exitInterface_type_list(MyParserParser::Interface_type_listContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clauses(MyParserParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clauses(MyParserParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clause(MyParserParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clause(MyParserParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints(MyParserParser::Type_parameter_constraintsContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints(MyParserParser::Type_parameter_constraintsContext * /*ctx*/) override { }

  virtual void enterPrimary_constraint(MyParserParser::Primary_constraintContext * /*ctx*/) override { }
  virtual void exitPrimary_constraint(MyParserParser::Primary_constraintContext * /*ctx*/) override { }

  virtual void enterSecondary_constraints(MyParserParser::Secondary_constraintsContext * /*ctx*/) override { }
  virtual void exitSecondary_constraints(MyParserParser::Secondary_constraintsContext * /*ctx*/) override { }

  virtual void enterConstructor_constraint(MyParserParser::Constructor_constraintContext * /*ctx*/) override { }
  virtual void exitConstructor_constraint(MyParserParser::Constructor_constraintContext * /*ctx*/) override { }

  virtual void enterClass_body(MyParserParser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(MyParserParser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_member_declarations(MyParserParser::Class_member_declarationsContext * /*ctx*/) override { }
  virtual void exitClass_member_declarations(MyParserParser::Class_member_declarationsContext * /*ctx*/) override { }

  virtual void enterClass_member_declaration(MyParserParser::Class_member_declarationContext * /*ctx*/) override { }
  virtual void exitClass_member_declaration(MyParserParser::Class_member_declarationContext * /*ctx*/) override { }

  virtual void enterAll_member_modifiers(MyParserParser::All_member_modifiersContext * /*ctx*/) override { }
  virtual void exitAll_member_modifiers(MyParserParser::All_member_modifiersContext * /*ctx*/) override { }

  virtual void enterAll_member_modifier(MyParserParser::All_member_modifierContext * /*ctx*/) override { }
  virtual void exitAll_member_modifier(MyParserParser::All_member_modifierContext * /*ctx*/) override { }

  virtual void enterCommon_member_declaration(MyParserParser::Common_member_declarationContext * /*ctx*/) override { }
  virtual void exitCommon_member_declaration(MyParserParser::Common_member_declarationContext * /*ctx*/) override { }

  virtual void enterTyped_member_declaration(MyParserParser::Typed_member_declarationContext * /*ctx*/) override { }
  virtual void exitTyped_member_declaration(MyParserParser::Typed_member_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declarators(MyParserParser::Constant_declaratorsContext * /*ctx*/) override { }
  virtual void exitConstant_declarators(MyParserParser::Constant_declaratorsContext * /*ctx*/) override { }

  virtual void enterConstant_declarator(MyParserParser::Constant_declaratorContext * /*ctx*/) override { }
  virtual void exitConstant_declarator(MyParserParser::Constant_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_declarators(MyParserParser::Variable_declaratorsContext * /*ctx*/) override { }
  virtual void exitVariable_declarators(MyParserParser::Variable_declaratorsContext * /*ctx*/) override { }

  virtual void enterVariable_declarator(MyParserParser::Variable_declaratorContext * /*ctx*/) override { }
  virtual void exitVariable_declarator(MyParserParser::Variable_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_initializer(MyParserParser::Variable_initializerContext * /*ctx*/) override { }
  virtual void exitVariable_initializer(MyParserParser::Variable_initializerContext * /*ctx*/) override { }

  virtual void enterReturn_type(MyParserParser::Return_typeContext * /*ctx*/) override { }
  virtual void exitReturn_type(MyParserParser::Return_typeContext * /*ctx*/) override { }

  virtual void enterMember_name(MyParserParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(MyParserParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterMethod_body(MyParserParser::Method_bodyContext * /*ctx*/) override { }
  virtual void exitMethod_body(MyParserParser::Method_bodyContext * /*ctx*/) override { }

  virtual void enterFormal_parameter_list(MyParserParser::Formal_parameter_listContext * /*ctx*/) override { }
  virtual void exitFormal_parameter_list(MyParserParser::Formal_parameter_listContext * /*ctx*/) override { }

  virtual void enterFixed_parameters(MyParserParser::Fixed_parametersContext * /*ctx*/) override { }
  virtual void exitFixed_parameters(MyParserParser::Fixed_parametersContext * /*ctx*/) override { }

  virtual void enterFixed_parameter(MyParserParser::Fixed_parameterContext * /*ctx*/) override { }
  virtual void exitFixed_parameter(MyParserParser::Fixed_parameterContext * /*ctx*/) override { }

  virtual void enterParameter_modifier(MyParserParser::Parameter_modifierContext * /*ctx*/) override { }
  virtual void exitParameter_modifier(MyParserParser::Parameter_modifierContext * /*ctx*/) override { }

  virtual void enterParameter_array(MyParserParser::Parameter_arrayContext * /*ctx*/) override { }
  virtual void exitParameter_array(MyParserParser::Parameter_arrayContext * /*ctx*/) override { }

  virtual void enterAccessor_declarations(MyParserParser::Accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitAccessor_declarations(MyParserParser::Accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterGet_accessor_declaration(MyParserParser::Get_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitGet_accessor_declaration(MyParserParser::Get_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterSet_accessor_declaration(MyParserParser::Set_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitSet_accessor_declaration(MyParserParser::Set_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterAccessor_modifier(MyParserParser::Accessor_modifierContext * /*ctx*/) override { }
  virtual void exitAccessor_modifier(MyParserParser::Accessor_modifierContext * /*ctx*/) override { }

  virtual void enterAccessor_body(MyParserParser::Accessor_bodyContext * /*ctx*/) override { }
  virtual void exitAccessor_body(MyParserParser::Accessor_bodyContext * /*ctx*/) override { }

  virtual void enterEvent_accessor_declarations(MyParserParser::Event_accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitEvent_accessor_declarations(MyParserParser::Event_accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterAdd_accessor_declaration(MyParserParser::Add_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitAdd_accessor_declaration(MyParserParser::Add_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterRemove_accessor_declaration(MyParserParser::Remove_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitRemove_accessor_declaration(MyParserParser::Remove_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterOverloadable_operator(MyParserParser::Overloadable_operatorContext * /*ctx*/) override { }
  virtual void exitOverloadable_operator(MyParserParser::Overloadable_operatorContext * /*ctx*/) override { }

  virtual void enterConversion_operator_declarator(MyParserParser::Conversion_operator_declaratorContext * /*ctx*/) override { }
  virtual void exitConversion_operator_declarator(MyParserParser::Conversion_operator_declaratorContext * /*ctx*/) override { }

  virtual void enterConstructor_initializer(MyParserParser::Constructor_initializerContext * /*ctx*/) override { }
  virtual void exitConstructor_initializer(MyParserParser::Constructor_initializerContext * /*ctx*/) override { }

  virtual void enterBody(MyParserParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(MyParserParser::BodyContext * /*ctx*/) override { }

  virtual void enterStruct_interfaces(MyParserParser::Struct_interfacesContext * /*ctx*/) override { }
  virtual void exitStruct_interfaces(MyParserParser::Struct_interfacesContext * /*ctx*/) override { }

  virtual void enterStruct_body(MyParserParser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(MyParserParser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_member_declaration(MyParserParser::Struct_member_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_member_declaration(MyParserParser::Struct_member_declarationContext * /*ctx*/) override { }

  virtual void enterArray_type(MyParserParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(MyParserParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterRank_specifier(MyParserParser::Rank_specifierContext * /*ctx*/) override { }
  virtual void exitRank_specifier(MyParserParser::Rank_specifierContext * /*ctx*/) override { }

  virtual void enterArray_initializer(MyParserParser::Array_initializerContext * /*ctx*/) override { }
  virtual void exitArray_initializer(MyParserParser::Array_initializerContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter_list(MyParserParser::Variant_type_parameter_listContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter_list(MyParserParser::Variant_type_parameter_listContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter(MyParserParser::Variant_type_parameterContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter(MyParserParser::Variant_type_parameterContext * /*ctx*/) override { }

  virtual void enterVariance_annotation(MyParserParser::Variance_annotationContext * /*ctx*/) override { }
  virtual void exitVariance_annotation(MyParserParser::Variance_annotationContext * /*ctx*/) override { }

  virtual void enterInterface_base(MyParserParser::Interface_baseContext * /*ctx*/) override { }
  virtual void exitInterface_base(MyParserParser::Interface_baseContext * /*ctx*/) override { }

  virtual void enterInterface_body(MyParserParser::Interface_bodyContext * /*ctx*/) override { }
  virtual void exitInterface_body(MyParserParser::Interface_bodyContext * /*ctx*/) override { }

  virtual void enterInterface_member_declaration(MyParserParser::Interface_member_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_member_declaration(MyParserParser::Interface_member_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_accessors(MyParserParser::Interface_accessorsContext * /*ctx*/) override { }
  virtual void exitInterface_accessors(MyParserParser::Interface_accessorsContext * /*ctx*/) override { }

  virtual void enterEnum_base(MyParserParser::Enum_baseContext * /*ctx*/) override { }
  virtual void exitEnum_base(MyParserParser::Enum_baseContext * /*ctx*/) override { }

  virtual void enterEnum_body(MyParserParser::Enum_bodyContext * /*ctx*/) override { }
  virtual void exitEnum_body(MyParserParser::Enum_bodyContext * /*ctx*/) override { }

  virtual void enterEnum_member_declaration(MyParserParser::Enum_member_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_member_declaration(MyParserParser::Enum_member_declarationContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_section(MyParserParser::Global_attribute_sectionContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_section(MyParserParser::Global_attribute_sectionContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_target(MyParserParser::Global_attribute_targetContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_target(MyParserParser::Global_attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttributes(MyParserParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(MyParserParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttribute_section(MyParserParser::Attribute_sectionContext * /*ctx*/) override { }
  virtual void exitAttribute_section(MyParserParser::Attribute_sectionContext * /*ctx*/) override { }

  virtual void enterAttribute_target(MyParserParser::Attribute_targetContext * /*ctx*/) override { }
  virtual void exitAttribute_target(MyParserParser::Attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttribute_list(MyParserParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(MyParserParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterAttribute(MyParserParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(MyParserParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_argument(MyParserParser::Attribute_argumentContext * /*ctx*/) override { }
  virtual void exitAttribute_argument(MyParserParser::Attribute_argumentContext * /*ctx*/) override { }

  virtual void enterPointer_type(MyParserParser::Pointer_typeContext * /*ctx*/) override { }
  virtual void exitPointer_type(MyParserParser::Pointer_typeContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarators(MyParserParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarators(MyParserParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarator(MyParserParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarator(MyParserParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_initializer(MyParserParser::Fixed_pointer_initializerContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_initializer(MyParserParser::Fixed_pointer_initializerContext * /*ctx*/) override { }

  virtual void enterFixed_size_buffer_declarator(MyParserParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_size_buffer_declarator(MyParserParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }

  virtual void enterLocal_variable_initializer_unsafe(MyParserParser::Local_variable_initializer_unsafeContext * /*ctx*/) override { }
  virtual void exitLocal_variable_initializer_unsafe(MyParserParser::Local_variable_initializer_unsafeContext * /*ctx*/) override { }

  virtual void enterRight_arrow(MyParserParser::Right_arrowContext * /*ctx*/) override { }
  virtual void exitRight_arrow(MyParserParser::Right_arrowContext * /*ctx*/) override { }

  virtual void enterRight_shift(MyParserParser::Right_shiftContext * /*ctx*/) override { }
  virtual void exitRight_shift(MyParserParser::Right_shiftContext * /*ctx*/) override { }

  virtual void enterRight_shift_assignment(MyParserParser::Right_shift_assignmentContext * /*ctx*/) override { }
  virtual void exitRight_shift_assignment(MyParserParser::Right_shift_assignmentContext * /*ctx*/) override { }

  virtual void enterLiteral(MyParserParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(MyParserParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(MyParserParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(MyParserParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(MyParserParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(MyParserParser::String_literalContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string(MyParserParser::Interpolated_regular_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string(MyParserParser::Interpolated_regular_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string(MyParserParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string(MyParserParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string_part(MyParserParser::Interpolated_regular_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string_part(MyParserParser::Interpolated_regular_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string_part(MyParserParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string_part(MyParserParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_string_expression(MyParserParser::Interpolated_string_expressionContext * /*ctx*/) override { }
  virtual void exitInterpolated_string_expression(MyParserParser::Interpolated_string_expressionContext * /*ctx*/) override { }

  virtual void enterKeyword(MyParserParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(MyParserParser::KeywordContext * /*ctx*/) override { }

  virtual void enterClass_definition(MyParserParser::Class_definitionContext * /*ctx*/) override { }
  virtual void exitClass_definition(MyParserParser::Class_definitionContext * /*ctx*/) override { }

  virtual void enterStruct_definition(MyParserParser::Struct_definitionContext * /*ctx*/) override { }
  virtual void exitStruct_definition(MyParserParser::Struct_definitionContext * /*ctx*/) override { }

  virtual void enterInterface_definition(MyParserParser::Interface_definitionContext * /*ctx*/) override { }
  virtual void exitInterface_definition(MyParserParser::Interface_definitionContext * /*ctx*/) override { }

  virtual void enterEnum_definition(MyParserParser::Enum_definitionContext * /*ctx*/) override { }
  virtual void exitEnum_definition(MyParserParser::Enum_definitionContext * /*ctx*/) override { }

  virtual void enterDelegate_definition(MyParserParser::Delegate_definitionContext * /*ctx*/) override { }
  virtual void exitDelegate_definition(MyParserParser::Delegate_definitionContext * /*ctx*/) override { }

  virtual void enterEvent_declaration(MyParserParser::Event_declarationContext * /*ctx*/) override { }
  virtual void exitEvent_declaration(MyParserParser::Event_declarationContext * /*ctx*/) override { }

  virtual void enterField_declaration(MyParserParser::Field_declarationContext * /*ctx*/) override { }
  virtual void exitField_declaration(MyParserParser::Field_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_declaration(MyParserParser::Property_declarationContext * /*ctx*/) override { }
  virtual void exitProperty_declaration(MyParserParser::Property_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(MyParserParser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(MyParserParser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterIndexer_declaration(MyParserParser::Indexer_declarationContext * /*ctx*/) override { }
  virtual void exitIndexer_declaration(MyParserParser::Indexer_declarationContext * /*ctx*/) override { }

  virtual void enterDestructor_definition(MyParserParser::Destructor_definitionContext * /*ctx*/) override { }
  virtual void exitDestructor_definition(MyParserParser::Destructor_definitionContext * /*ctx*/) override { }

  virtual void enterConstructor_declaration(MyParserParser::Constructor_declarationContext * /*ctx*/) override { }
  virtual void exitConstructor_declaration(MyParserParser::Constructor_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_declaration(MyParserParser::Method_declarationContext * /*ctx*/) override { }
  virtual void exitMethod_declaration(MyParserParser::Method_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_member_name(MyParserParser::Method_member_nameContext * /*ctx*/) override { }
  virtual void exitMethod_member_name(MyParserParser::Method_member_nameContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(MyParserParser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(MyParserParser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterArg_declaration(MyParserParser::Arg_declarationContext * /*ctx*/) override { }
  virtual void exitArg_declaration(MyParserParser::Arg_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_invocation(MyParserParser::Method_invocationContext * /*ctx*/) override { }
  virtual void exitMethod_invocation(MyParserParser::Method_invocationContext * /*ctx*/) override { }

  virtual void enterObject_creation_expression(MyParserParser::Object_creation_expressionContext * /*ctx*/) override { }
  virtual void exitObject_creation_expression(MyParserParser::Object_creation_expressionContext * /*ctx*/) override { }

  virtual void enterIdentifier(MyParserParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(MyParserParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


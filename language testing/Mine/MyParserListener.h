
// Generated from MyParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyParserParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MyParserParser.
 */
class  MyParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilation_unit(MyParserParser::Compilation_unitContext *ctx) = 0;
  virtual void exitCompilation_unit(MyParserParser::Compilation_unitContext *ctx) = 0;

  virtual void enterNamespace_or_type_name(MyParserParser::Namespace_or_type_nameContext *ctx) = 0;
  virtual void exitNamespace_or_type_name(MyParserParser::Namespace_or_type_nameContext *ctx) = 0;

  virtual void enterType(MyParserParser::TypeContext *ctx) = 0;
  virtual void exitType(MyParserParser::TypeContext *ctx) = 0;

  virtual void enterBase_type(MyParserParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(MyParserParser::Base_typeContext *ctx) = 0;

  virtual void enterSimple_type(MyParserParser::Simple_typeContext *ctx) = 0;
  virtual void exitSimple_type(MyParserParser::Simple_typeContext *ctx) = 0;

  virtual void enterNumeric_type(MyParserParser::Numeric_typeContext *ctx) = 0;
  virtual void exitNumeric_type(MyParserParser::Numeric_typeContext *ctx) = 0;

  virtual void enterIntegral_type(MyParserParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(MyParserParser::Integral_typeContext *ctx) = 0;

  virtual void enterFloating_point_type(MyParserParser::Floating_point_typeContext *ctx) = 0;
  virtual void exitFloating_point_type(MyParserParser::Floating_point_typeContext *ctx) = 0;

  virtual void enterClass_type(MyParserParser::Class_typeContext *ctx) = 0;
  virtual void exitClass_type(MyParserParser::Class_typeContext *ctx) = 0;

  virtual void enterType_argument_list(MyParserParser::Type_argument_listContext *ctx) = 0;
  virtual void exitType_argument_list(MyParserParser::Type_argument_listContext *ctx) = 0;

  virtual void enterArgument_list(MyParserParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(MyParserParser::Argument_listContext *ctx) = 0;

  virtual void enterArgument(MyParserParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(MyParserParser::ArgumentContext *ctx) = 0;

  virtual void enterExpression(MyParserParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(MyParserParser::ExpressionContext *ctx) = 0;

  virtual void enterNon_assignment_expression(MyParserParser::Non_assignment_expressionContext *ctx) = 0;
  virtual void exitNon_assignment_expression(MyParserParser::Non_assignment_expressionContext *ctx) = 0;

  virtual void enterAssignment(MyParserParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(MyParserParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignment_operator(MyParserParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(MyParserParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(MyParserParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(MyParserParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterNull_coalescing_expression(MyParserParser::Null_coalescing_expressionContext *ctx) = 0;
  virtual void exitNull_coalescing_expression(MyParserParser::Null_coalescing_expressionContext *ctx) = 0;

  virtual void enterConditional_or_expression(MyParserParser::Conditional_or_expressionContext *ctx) = 0;
  virtual void exitConditional_or_expression(MyParserParser::Conditional_or_expressionContext *ctx) = 0;

  virtual void enterConditional_and_expression(MyParserParser::Conditional_and_expressionContext *ctx) = 0;
  virtual void exitConditional_and_expression(MyParserParser::Conditional_and_expressionContext *ctx) = 0;

  virtual void enterInclusive_or_expression(MyParserParser::Inclusive_or_expressionContext *ctx) = 0;
  virtual void exitInclusive_or_expression(MyParserParser::Inclusive_or_expressionContext *ctx) = 0;

  virtual void enterExclusive_or_expression(MyParserParser::Exclusive_or_expressionContext *ctx) = 0;
  virtual void exitExclusive_or_expression(MyParserParser::Exclusive_or_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(MyParserParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(MyParserParser::And_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(MyParserParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(MyParserParser::Equality_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(MyParserParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(MyParserParser::Relational_expressionContext *ctx) = 0;

  virtual void enterShift_expression(MyParserParser::Shift_expressionContext *ctx) = 0;
  virtual void exitShift_expression(MyParserParser::Shift_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(MyParserParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(MyParserParser::Additive_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_expression(MyParserParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(MyParserParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(MyParserParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(MyParserParser::Unary_expressionContext *ctx) = 0;

  virtual void enterPrimary_expression(MyParserParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(MyParserParser::Primary_expressionContext *ctx) = 0;

  virtual void enterLiteralExpression(MyParserParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(MyParserParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterSimpleNameExpression(MyParserParser::SimpleNameExpressionContext *ctx) = 0;
  virtual void exitSimpleNameExpression(MyParserParser::SimpleNameExpressionContext *ctx) = 0;

  virtual void enterParenthesisExpressions(MyParserParser::ParenthesisExpressionsContext *ctx) = 0;
  virtual void exitParenthesisExpressions(MyParserParser::ParenthesisExpressionsContext *ctx) = 0;

  virtual void enterMemberAccessExpression(MyParserParser::MemberAccessExpressionContext *ctx) = 0;
  virtual void exitMemberAccessExpression(MyParserParser::MemberAccessExpressionContext *ctx) = 0;

  virtual void enterLiteralAccessExpression(MyParserParser::LiteralAccessExpressionContext *ctx) = 0;
  virtual void exitLiteralAccessExpression(MyParserParser::LiteralAccessExpressionContext *ctx) = 0;

  virtual void enterThisReferenceExpression(MyParserParser::ThisReferenceExpressionContext *ctx) = 0;
  virtual void exitThisReferenceExpression(MyParserParser::ThisReferenceExpressionContext *ctx) = 0;

  virtual void enterBaseAccessExpression(MyParserParser::BaseAccessExpressionContext *ctx) = 0;
  virtual void exitBaseAccessExpression(MyParserParser::BaseAccessExpressionContext *ctx) = 0;

  virtual void enterObjectCreationExpression(MyParserParser::ObjectCreationExpressionContext *ctx) = 0;
  virtual void exitObjectCreationExpression(MyParserParser::ObjectCreationExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(MyParserParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(MyParserParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterCheckedExpression(MyParserParser::CheckedExpressionContext *ctx) = 0;
  virtual void exitCheckedExpression(MyParserParser::CheckedExpressionContext *ctx) = 0;

  virtual void enterUncheckedExpression(MyParserParser::UncheckedExpressionContext *ctx) = 0;
  virtual void exitUncheckedExpression(MyParserParser::UncheckedExpressionContext *ctx) = 0;

  virtual void enterDefaultValueExpression(MyParserParser::DefaultValueExpressionContext *ctx) = 0;
  virtual void exitDefaultValueExpression(MyParserParser::DefaultValueExpressionContext *ctx) = 0;

  virtual void enterAnonymousMethodExpression(MyParserParser::AnonymousMethodExpressionContext *ctx) = 0;
  virtual void exitAnonymousMethodExpression(MyParserParser::AnonymousMethodExpressionContext *ctx) = 0;

  virtual void enterSizeofExpression(MyParserParser::SizeofExpressionContext *ctx) = 0;
  virtual void exitSizeofExpression(MyParserParser::SizeofExpressionContext *ctx) = 0;

  virtual void enterNameofExpression(MyParserParser::NameofExpressionContext *ctx) = 0;
  virtual void exitNameofExpression(MyParserParser::NameofExpressionContext *ctx) = 0;

  virtual void enterMember_access(MyParserParser::Member_accessContext *ctx) = 0;
  virtual void exitMember_access(MyParserParser::Member_accessContext *ctx) = 0;

  virtual void enterBracket_expression(MyParserParser::Bracket_expressionContext *ctx) = 0;
  virtual void exitBracket_expression(MyParserParser::Bracket_expressionContext *ctx) = 0;

  virtual void enterIndexer_argument(MyParserParser::Indexer_argumentContext *ctx) = 0;
  virtual void exitIndexer_argument(MyParserParser::Indexer_argumentContext *ctx) = 0;

  virtual void enterPredefined_type(MyParserParser::Predefined_typeContext *ctx) = 0;
  virtual void exitPredefined_type(MyParserParser::Predefined_typeContext *ctx) = 0;

  virtual void enterExpression_list(MyParserParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(MyParserParser::Expression_listContext *ctx) = 0;

  virtual void enterObject_or_collection_initializer(MyParserParser::Object_or_collection_initializerContext *ctx) = 0;
  virtual void exitObject_or_collection_initializer(MyParserParser::Object_or_collection_initializerContext *ctx) = 0;

  virtual void enterObject_initializer(MyParserParser::Object_initializerContext *ctx) = 0;
  virtual void exitObject_initializer(MyParserParser::Object_initializerContext *ctx) = 0;

  virtual void enterMember_initializer_list(MyParserParser::Member_initializer_listContext *ctx) = 0;
  virtual void exitMember_initializer_list(MyParserParser::Member_initializer_listContext *ctx) = 0;

  virtual void enterMember_initializer(MyParserParser::Member_initializerContext *ctx) = 0;
  virtual void exitMember_initializer(MyParserParser::Member_initializerContext *ctx) = 0;

  virtual void enterInitializer_value(MyParserParser::Initializer_valueContext *ctx) = 0;
  virtual void exitInitializer_value(MyParserParser::Initializer_valueContext *ctx) = 0;

  virtual void enterCollection_initializer(MyParserParser::Collection_initializerContext *ctx) = 0;
  virtual void exitCollection_initializer(MyParserParser::Collection_initializerContext *ctx) = 0;

  virtual void enterElement_initializer(MyParserParser::Element_initializerContext *ctx) = 0;
  virtual void exitElement_initializer(MyParserParser::Element_initializerContext *ctx) = 0;

  virtual void enterAnonymous_object_initializer(MyParserParser::Anonymous_object_initializerContext *ctx) = 0;
  virtual void exitAnonymous_object_initializer(MyParserParser::Anonymous_object_initializerContext *ctx) = 0;

  virtual void enterMember_declarator_list(MyParserParser::Member_declarator_listContext *ctx) = 0;
  virtual void exitMember_declarator_list(MyParserParser::Member_declarator_listContext *ctx) = 0;

  virtual void enterMember_declarator(MyParserParser::Member_declaratorContext *ctx) = 0;
  virtual void exitMember_declarator(MyParserParser::Member_declaratorContext *ctx) = 0;

  virtual void enterUnbound_type_name(MyParserParser::Unbound_type_nameContext *ctx) = 0;
  virtual void exitUnbound_type_name(MyParserParser::Unbound_type_nameContext *ctx) = 0;

  virtual void enterGeneric_dimension_specifier(MyParserParser::Generic_dimension_specifierContext *ctx) = 0;
  virtual void exitGeneric_dimension_specifier(MyParserParser::Generic_dimension_specifierContext *ctx) = 0;

  virtual void enterIsType(MyParserParser::IsTypeContext *ctx) = 0;
  virtual void exitIsType(MyParserParser::IsTypeContext *ctx) = 0;

  virtual void enterLambda_expression(MyParserParser::Lambda_expressionContext *ctx) = 0;
  virtual void exitLambda_expression(MyParserParser::Lambda_expressionContext *ctx) = 0;

  virtual void enterAnonymous_function_signature(MyParserParser::Anonymous_function_signatureContext *ctx) = 0;
  virtual void exitAnonymous_function_signature(MyParserParser::Anonymous_function_signatureContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter_list(MyParserParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter_list(MyParserParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter(MyParserParser::Explicit_anonymous_function_parameterContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter(MyParserParser::Explicit_anonymous_function_parameterContext *ctx) = 0;

  virtual void enterImplicit_anonymous_function_parameter_list(MyParserParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitImplicit_anonymous_function_parameter_list(MyParserParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterAnonymous_function_body(MyParserParser::Anonymous_function_bodyContext *ctx) = 0;
  virtual void exitAnonymous_function_body(MyParserParser::Anonymous_function_bodyContext *ctx) = 0;

  virtual void enterQuery_expression(MyParserParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(MyParserParser::Query_expressionContext *ctx) = 0;

  virtual void enterFrom_clause(MyParserParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(MyParserParser::From_clauseContext *ctx) = 0;

  virtual void enterQuery_body(MyParserParser::Query_bodyContext *ctx) = 0;
  virtual void exitQuery_body(MyParserParser::Query_bodyContext *ctx) = 0;

  virtual void enterQuery_body_clause(MyParserParser::Query_body_clauseContext *ctx) = 0;
  virtual void exitQuery_body_clause(MyParserParser::Query_body_clauseContext *ctx) = 0;

  virtual void enterLet_clause(MyParserParser::Let_clauseContext *ctx) = 0;
  virtual void exitLet_clause(MyParserParser::Let_clauseContext *ctx) = 0;

  virtual void enterWhere_clause(MyParserParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(MyParserParser::Where_clauseContext *ctx) = 0;

  virtual void enterCombined_join_clause(MyParserParser::Combined_join_clauseContext *ctx) = 0;
  virtual void exitCombined_join_clause(MyParserParser::Combined_join_clauseContext *ctx) = 0;

  virtual void enterOrderby_clause(MyParserParser::Orderby_clauseContext *ctx) = 0;
  virtual void exitOrderby_clause(MyParserParser::Orderby_clauseContext *ctx) = 0;

  virtual void enterOrdering(MyParserParser::OrderingContext *ctx) = 0;
  virtual void exitOrdering(MyParserParser::OrderingContext *ctx) = 0;

  virtual void enterSelect_or_group_clause(MyParserParser::Select_or_group_clauseContext *ctx) = 0;
  virtual void exitSelect_or_group_clause(MyParserParser::Select_or_group_clauseContext *ctx) = 0;

  virtual void enterQuery_continuation(MyParserParser::Query_continuationContext *ctx) = 0;
  virtual void exitQuery_continuation(MyParserParser::Query_continuationContext *ctx) = 0;

  virtual void enterLabeledStatement(MyParserParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(MyParserParser::LabeledStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(MyParserParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(MyParserParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterEmbeddedStatement(MyParserParser::EmbeddedStatementContext *ctx) = 0;
  virtual void exitEmbeddedStatement(MyParserParser::EmbeddedStatementContext *ctx) = 0;

  virtual void enterEmbedded_statement(MyParserParser::Embedded_statementContext *ctx) = 0;
  virtual void exitEmbedded_statement(MyParserParser::Embedded_statementContext *ctx) = 0;

  virtual void enterEmptyStatement(MyParserParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(MyParserParser::EmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(MyParserParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(MyParserParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(MyParserParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(MyParserParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(MyParserParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(MyParserParser::SwitchStatementContext *ctx) = 0;

  virtual void enterWhileStatement(MyParserParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(MyParserParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoStatement(MyParserParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(MyParserParser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(MyParserParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(MyParserParser::ForStatementContext *ctx) = 0;

  virtual void enterForeschStatement(MyParserParser::ForeschStatementContext *ctx) = 0;
  virtual void exitForeschStatement(MyParserParser::ForeschStatementContext *ctx) = 0;

  virtual void enterBreakStatement(MyParserParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(MyParserParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(MyParserParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(MyParserParser::ContinueStatementContext *ctx) = 0;

  virtual void enterGotoStatement(MyParserParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(MyParserParser::GotoStatementContext *ctx) = 0;

  virtual void enterReturnStatement(MyParserParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(MyParserParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(MyParserParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(MyParserParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(MyParserParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(MyParserParser::TryStatementContext *ctx) = 0;

  virtual void enterCheckedStatement(MyParserParser::CheckedStatementContext *ctx) = 0;
  virtual void exitCheckedStatement(MyParserParser::CheckedStatementContext *ctx) = 0;

  virtual void enterUncheckedStatement(MyParserParser::UncheckedStatementContext *ctx) = 0;
  virtual void exitUncheckedStatement(MyParserParser::UncheckedStatementContext *ctx) = 0;

  virtual void enterLockStatement(MyParserParser::LockStatementContext *ctx) = 0;
  virtual void exitLockStatement(MyParserParser::LockStatementContext *ctx) = 0;

  virtual void enterUsingStatement(MyParserParser::UsingStatementContext *ctx) = 0;
  virtual void exitUsingStatement(MyParserParser::UsingStatementContext *ctx) = 0;

  virtual void enterYieldStatement(MyParserParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(MyParserParser::YieldStatementContext *ctx) = 0;

  virtual void enterUnsafeStatement(MyParserParser::UnsafeStatementContext *ctx) = 0;
  virtual void exitUnsafeStatement(MyParserParser::UnsafeStatementContext *ctx) = 0;

  virtual void enterFixedStatement(MyParserParser::FixedStatementContext *ctx) = 0;
  virtual void exitFixedStatement(MyParserParser::FixedStatementContext *ctx) = 0;

  virtual void enterBlock(MyParserParser::BlockContext *ctx) = 0;
  virtual void exitBlock(MyParserParser::BlockContext *ctx) = 0;

  virtual void enterLocal_variable_declaration(MyParserParser::Local_variable_declarationContext *ctx) = 0;
  virtual void exitLocal_variable_declaration(MyParserParser::Local_variable_declarationContext *ctx) = 0;

  virtual void enterLocal_variable_declarator(MyParserParser::Local_variable_declaratorContext *ctx) = 0;
  virtual void exitLocal_variable_declarator(MyParserParser::Local_variable_declaratorContext *ctx) = 0;

  virtual void enterLocal_variable_initializer(MyParserParser::Local_variable_initializerContext *ctx) = 0;
  virtual void exitLocal_variable_initializer(MyParserParser::Local_variable_initializerContext *ctx) = 0;

  virtual void enterLocal_constant_declaration(MyParserParser::Local_constant_declarationContext *ctx) = 0;
  virtual void exitLocal_constant_declaration(MyParserParser::Local_constant_declarationContext *ctx) = 0;

  virtual void enterIf_body(MyParserParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(MyParserParser::If_bodyContext *ctx) = 0;

  virtual void enterSwitch_section(MyParserParser::Switch_sectionContext *ctx) = 0;
  virtual void exitSwitch_section(MyParserParser::Switch_sectionContext *ctx) = 0;

  virtual void enterSwitch_label(MyParserParser::Switch_labelContext *ctx) = 0;
  virtual void exitSwitch_label(MyParserParser::Switch_labelContext *ctx) = 0;

  virtual void enterStatement_list(MyParserParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(MyParserParser::Statement_listContext *ctx) = 0;

  virtual void enterFor_initializer(MyParserParser::For_initializerContext *ctx) = 0;
  virtual void exitFor_initializer(MyParserParser::For_initializerContext *ctx) = 0;

  virtual void enterFor_iterator(MyParserParser::For_iteratorContext *ctx) = 0;
  virtual void exitFor_iterator(MyParserParser::For_iteratorContext *ctx) = 0;

  virtual void enterCatch_clauses(MyParserParser::Catch_clausesContext *ctx) = 0;
  virtual void exitCatch_clauses(MyParserParser::Catch_clausesContext *ctx) = 0;

  virtual void enterSpecific_catch_clause(MyParserParser::Specific_catch_clauseContext *ctx) = 0;
  virtual void exitSpecific_catch_clause(MyParserParser::Specific_catch_clauseContext *ctx) = 0;

  virtual void enterGeneral_catch_clause(MyParserParser::General_catch_clauseContext *ctx) = 0;
  virtual void exitGeneral_catch_clause(MyParserParser::General_catch_clauseContext *ctx) = 0;

  virtual void enterException_filter(MyParserParser::Exception_filterContext *ctx) = 0;
  virtual void exitException_filter(MyParserParser::Exception_filterContext *ctx) = 0;

  virtual void enterFinally_clause(MyParserParser::Finally_clauseContext *ctx) = 0;
  virtual void exitFinally_clause(MyParserParser::Finally_clauseContext *ctx) = 0;

  virtual void enterResource_acquisition(MyParserParser::Resource_acquisitionContext *ctx) = 0;
  virtual void exitResource_acquisition(MyParserParser::Resource_acquisitionContext *ctx) = 0;

  virtual void enterNamespace_declaration(MyParserParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(MyParserParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterQualified_identifier(MyParserParser::Qualified_identifierContext *ctx) = 0;
  virtual void exitQualified_identifier(MyParserParser::Qualified_identifierContext *ctx) = 0;

  virtual void enterNamespace_body(MyParserParser::Namespace_bodyContext *ctx) = 0;
  virtual void exitNamespace_body(MyParserParser::Namespace_bodyContext *ctx) = 0;

  virtual void enterExtern_alias_directives(MyParserParser::Extern_alias_directivesContext *ctx) = 0;
  virtual void exitExtern_alias_directives(MyParserParser::Extern_alias_directivesContext *ctx) = 0;

  virtual void enterExtern_alias_directive(MyParserParser::Extern_alias_directiveContext *ctx) = 0;
  virtual void exitExtern_alias_directive(MyParserParser::Extern_alias_directiveContext *ctx) = 0;

  virtual void enterUsing_directives(MyParserParser::Using_directivesContext *ctx) = 0;
  virtual void exitUsing_directives(MyParserParser::Using_directivesContext *ctx) = 0;

  virtual void enterUsingAliasDirective(MyParserParser::UsingAliasDirectiveContext *ctx) = 0;
  virtual void exitUsingAliasDirective(MyParserParser::UsingAliasDirectiveContext *ctx) = 0;

  virtual void enterUsingNamespaceDirective(MyParserParser::UsingNamespaceDirectiveContext *ctx) = 0;
  virtual void exitUsingNamespaceDirective(MyParserParser::UsingNamespaceDirectiveContext *ctx) = 0;

  virtual void enterUsingStaticDirective(MyParserParser::UsingStaticDirectiveContext *ctx) = 0;
  virtual void exitUsingStaticDirective(MyParserParser::UsingStaticDirectiveContext *ctx) = 0;

  virtual void enterNamespace_member_declarations(MyParserParser::Namespace_member_declarationsContext *ctx) = 0;
  virtual void exitNamespace_member_declarations(MyParserParser::Namespace_member_declarationsContext *ctx) = 0;

  virtual void enterNamespace_member_declaration(MyParserParser::Namespace_member_declarationContext *ctx) = 0;
  virtual void exitNamespace_member_declaration(MyParserParser::Namespace_member_declarationContext *ctx) = 0;

  virtual void enterType_declaration(MyParserParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(MyParserParser::Type_declarationContext *ctx) = 0;

  virtual void enterQualified_alias_member(MyParserParser::Qualified_alias_memberContext *ctx) = 0;
  virtual void exitQualified_alias_member(MyParserParser::Qualified_alias_memberContext *ctx) = 0;

  virtual void enterType_parameter_list(MyParserParser::Type_parameter_listContext *ctx) = 0;
  virtual void exitType_parameter_list(MyParserParser::Type_parameter_listContext *ctx) = 0;

  virtual void enterType_parameter(MyParserParser::Type_parameterContext *ctx) = 0;
  virtual void exitType_parameter(MyParserParser::Type_parameterContext *ctx) = 0;

  virtual void enterClass_base(MyParserParser::Class_baseContext *ctx) = 0;
  virtual void exitClass_base(MyParserParser::Class_baseContext *ctx) = 0;

  virtual void enterInterface_type_list(MyParserParser::Interface_type_listContext *ctx) = 0;
  virtual void exitInterface_type_list(MyParserParser::Interface_type_listContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clauses(MyParserParser::Type_parameter_constraints_clausesContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clauses(MyParserParser::Type_parameter_constraints_clausesContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clause(MyParserParser::Type_parameter_constraints_clauseContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clause(MyParserParser::Type_parameter_constraints_clauseContext *ctx) = 0;

  virtual void enterType_parameter_constraints(MyParserParser::Type_parameter_constraintsContext *ctx) = 0;
  virtual void exitType_parameter_constraints(MyParserParser::Type_parameter_constraintsContext *ctx) = 0;

  virtual void enterPrimary_constraint(MyParserParser::Primary_constraintContext *ctx) = 0;
  virtual void exitPrimary_constraint(MyParserParser::Primary_constraintContext *ctx) = 0;

  virtual void enterSecondary_constraints(MyParserParser::Secondary_constraintsContext *ctx) = 0;
  virtual void exitSecondary_constraints(MyParserParser::Secondary_constraintsContext *ctx) = 0;

  virtual void enterConstructor_constraint(MyParserParser::Constructor_constraintContext *ctx) = 0;
  virtual void exitConstructor_constraint(MyParserParser::Constructor_constraintContext *ctx) = 0;

  virtual void enterClass_body(MyParserParser::Class_bodyContext *ctx) = 0;
  virtual void exitClass_body(MyParserParser::Class_bodyContext *ctx) = 0;

  virtual void enterClass_member_declarations(MyParserParser::Class_member_declarationsContext *ctx) = 0;
  virtual void exitClass_member_declarations(MyParserParser::Class_member_declarationsContext *ctx) = 0;

  virtual void enterClass_member_declaration(MyParserParser::Class_member_declarationContext *ctx) = 0;
  virtual void exitClass_member_declaration(MyParserParser::Class_member_declarationContext *ctx) = 0;

  virtual void enterAll_member_modifiers(MyParserParser::All_member_modifiersContext *ctx) = 0;
  virtual void exitAll_member_modifiers(MyParserParser::All_member_modifiersContext *ctx) = 0;

  virtual void enterAll_member_modifier(MyParserParser::All_member_modifierContext *ctx) = 0;
  virtual void exitAll_member_modifier(MyParserParser::All_member_modifierContext *ctx) = 0;

  virtual void enterCommon_member_declaration(MyParserParser::Common_member_declarationContext *ctx) = 0;
  virtual void exitCommon_member_declaration(MyParserParser::Common_member_declarationContext *ctx) = 0;

  virtual void enterTyped_member_declaration(MyParserParser::Typed_member_declarationContext *ctx) = 0;
  virtual void exitTyped_member_declaration(MyParserParser::Typed_member_declarationContext *ctx) = 0;

  virtual void enterConstant_declarators(MyParserParser::Constant_declaratorsContext *ctx) = 0;
  virtual void exitConstant_declarators(MyParserParser::Constant_declaratorsContext *ctx) = 0;

  virtual void enterConstant_declarator(MyParserParser::Constant_declaratorContext *ctx) = 0;
  virtual void exitConstant_declarator(MyParserParser::Constant_declaratorContext *ctx) = 0;

  virtual void enterVariable_declarators(MyParserParser::Variable_declaratorsContext *ctx) = 0;
  virtual void exitVariable_declarators(MyParserParser::Variable_declaratorsContext *ctx) = 0;

  virtual void enterVariable_declarator(MyParserParser::Variable_declaratorContext *ctx) = 0;
  virtual void exitVariable_declarator(MyParserParser::Variable_declaratorContext *ctx) = 0;

  virtual void enterVariable_initializer(MyParserParser::Variable_initializerContext *ctx) = 0;
  virtual void exitVariable_initializer(MyParserParser::Variable_initializerContext *ctx) = 0;

  virtual void enterReturn_type(MyParserParser::Return_typeContext *ctx) = 0;
  virtual void exitReturn_type(MyParserParser::Return_typeContext *ctx) = 0;

  virtual void enterMember_name(MyParserParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(MyParserParser::Member_nameContext *ctx) = 0;

  virtual void enterMethod_body(MyParserParser::Method_bodyContext *ctx) = 0;
  virtual void exitMethod_body(MyParserParser::Method_bodyContext *ctx) = 0;

  virtual void enterFormal_parameter_list(MyParserParser::Formal_parameter_listContext *ctx) = 0;
  virtual void exitFormal_parameter_list(MyParserParser::Formal_parameter_listContext *ctx) = 0;

  virtual void enterFixed_parameters(MyParserParser::Fixed_parametersContext *ctx) = 0;
  virtual void exitFixed_parameters(MyParserParser::Fixed_parametersContext *ctx) = 0;

  virtual void enterFixed_parameter(MyParserParser::Fixed_parameterContext *ctx) = 0;
  virtual void exitFixed_parameter(MyParserParser::Fixed_parameterContext *ctx) = 0;

  virtual void enterParameter_modifier(MyParserParser::Parameter_modifierContext *ctx) = 0;
  virtual void exitParameter_modifier(MyParserParser::Parameter_modifierContext *ctx) = 0;

  virtual void enterParameter_array(MyParserParser::Parameter_arrayContext *ctx) = 0;
  virtual void exitParameter_array(MyParserParser::Parameter_arrayContext *ctx) = 0;

  virtual void enterAccessor_declarations(MyParserParser::Accessor_declarationsContext *ctx) = 0;
  virtual void exitAccessor_declarations(MyParserParser::Accessor_declarationsContext *ctx) = 0;

  virtual void enterGet_accessor_declaration(MyParserParser::Get_accessor_declarationContext *ctx) = 0;
  virtual void exitGet_accessor_declaration(MyParserParser::Get_accessor_declarationContext *ctx) = 0;

  virtual void enterSet_accessor_declaration(MyParserParser::Set_accessor_declarationContext *ctx) = 0;
  virtual void exitSet_accessor_declaration(MyParserParser::Set_accessor_declarationContext *ctx) = 0;

  virtual void enterAccessor_modifier(MyParserParser::Accessor_modifierContext *ctx) = 0;
  virtual void exitAccessor_modifier(MyParserParser::Accessor_modifierContext *ctx) = 0;

  virtual void enterAccessor_body(MyParserParser::Accessor_bodyContext *ctx) = 0;
  virtual void exitAccessor_body(MyParserParser::Accessor_bodyContext *ctx) = 0;

  virtual void enterEvent_accessor_declarations(MyParserParser::Event_accessor_declarationsContext *ctx) = 0;
  virtual void exitEvent_accessor_declarations(MyParserParser::Event_accessor_declarationsContext *ctx) = 0;

  virtual void enterAdd_accessor_declaration(MyParserParser::Add_accessor_declarationContext *ctx) = 0;
  virtual void exitAdd_accessor_declaration(MyParserParser::Add_accessor_declarationContext *ctx) = 0;

  virtual void enterRemove_accessor_declaration(MyParserParser::Remove_accessor_declarationContext *ctx) = 0;
  virtual void exitRemove_accessor_declaration(MyParserParser::Remove_accessor_declarationContext *ctx) = 0;

  virtual void enterOverloadable_operator(MyParserParser::Overloadable_operatorContext *ctx) = 0;
  virtual void exitOverloadable_operator(MyParserParser::Overloadable_operatorContext *ctx) = 0;

  virtual void enterConversion_operator_declarator(MyParserParser::Conversion_operator_declaratorContext *ctx) = 0;
  virtual void exitConversion_operator_declarator(MyParserParser::Conversion_operator_declaratorContext *ctx) = 0;

  virtual void enterConstructor_initializer(MyParserParser::Constructor_initializerContext *ctx) = 0;
  virtual void exitConstructor_initializer(MyParserParser::Constructor_initializerContext *ctx) = 0;

  virtual void enterBody(MyParserParser::BodyContext *ctx) = 0;
  virtual void exitBody(MyParserParser::BodyContext *ctx) = 0;

  virtual void enterStruct_interfaces(MyParserParser::Struct_interfacesContext *ctx) = 0;
  virtual void exitStruct_interfaces(MyParserParser::Struct_interfacesContext *ctx) = 0;

  virtual void enterStruct_body(MyParserParser::Struct_bodyContext *ctx) = 0;
  virtual void exitStruct_body(MyParserParser::Struct_bodyContext *ctx) = 0;

  virtual void enterStruct_member_declaration(MyParserParser::Struct_member_declarationContext *ctx) = 0;
  virtual void exitStruct_member_declaration(MyParserParser::Struct_member_declarationContext *ctx) = 0;

  virtual void enterArray_type(MyParserParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(MyParserParser::Array_typeContext *ctx) = 0;

  virtual void enterRank_specifier(MyParserParser::Rank_specifierContext *ctx) = 0;
  virtual void exitRank_specifier(MyParserParser::Rank_specifierContext *ctx) = 0;

  virtual void enterArray_initializer(MyParserParser::Array_initializerContext *ctx) = 0;
  virtual void exitArray_initializer(MyParserParser::Array_initializerContext *ctx) = 0;

  virtual void enterVariant_type_parameter_list(MyParserParser::Variant_type_parameter_listContext *ctx) = 0;
  virtual void exitVariant_type_parameter_list(MyParserParser::Variant_type_parameter_listContext *ctx) = 0;

  virtual void enterVariant_type_parameter(MyParserParser::Variant_type_parameterContext *ctx) = 0;
  virtual void exitVariant_type_parameter(MyParserParser::Variant_type_parameterContext *ctx) = 0;

  virtual void enterVariance_annotation(MyParserParser::Variance_annotationContext *ctx) = 0;
  virtual void exitVariance_annotation(MyParserParser::Variance_annotationContext *ctx) = 0;

  virtual void enterInterface_base(MyParserParser::Interface_baseContext *ctx) = 0;
  virtual void exitInterface_base(MyParserParser::Interface_baseContext *ctx) = 0;

  virtual void enterInterface_body(MyParserParser::Interface_bodyContext *ctx) = 0;
  virtual void exitInterface_body(MyParserParser::Interface_bodyContext *ctx) = 0;

  virtual void enterInterface_member_declaration(MyParserParser::Interface_member_declarationContext *ctx) = 0;
  virtual void exitInterface_member_declaration(MyParserParser::Interface_member_declarationContext *ctx) = 0;

  virtual void enterInterface_accessors(MyParserParser::Interface_accessorsContext *ctx) = 0;
  virtual void exitInterface_accessors(MyParserParser::Interface_accessorsContext *ctx) = 0;

  virtual void enterEnum_base(MyParserParser::Enum_baseContext *ctx) = 0;
  virtual void exitEnum_base(MyParserParser::Enum_baseContext *ctx) = 0;

  virtual void enterEnum_body(MyParserParser::Enum_bodyContext *ctx) = 0;
  virtual void exitEnum_body(MyParserParser::Enum_bodyContext *ctx) = 0;

  virtual void enterEnum_member_declaration(MyParserParser::Enum_member_declarationContext *ctx) = 0;
  virtual void exitEnum_member_declaration(MyParserParser::Enum_member_declarationContext *ctx) = 0;

  virtual void enterGlobal_attribute_section(MyParserParser::Global_attribute_sectionContext *ctx) = 0;
  virtual void exitGlobal_attribute_section(MyParserParser::Global_attribute_sectionContext *ctx) = 0;

  virtual void enterGlobal_attribute_target(MyParserParser::Global_attribute_targetContext *ctx) = 0;
  virtual void exitGlobal_attribute_target(MyParserParser::Global_attribute_targetContext *ctx) = 0;

  virtual void enterAttributes(MyParserParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(MyParserParser::AttributesContext *ctx) = 0;

  virtual void enterAttribute_section(MyParserParser::Attribute_sectionContext *ctx) = 0;
  virtual void exitAttribute_section(MyParserParser::Attribute_sectionContext *ctx) = 0;

  virtual void enterAttribute_target(MyParserParser::Attribute_targetContext *ctx) = 0;
  virtual void exitAttribute_target(MyParserParser::Attribute_targetContext *ctx) = 0;

  virtual void enterAttribute_list(MyParserParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(MyParserParser::Attribute_listContext *ctx) = 0;

  virtual void enterAttribute(MyParserParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(MyParserParser::AttributeContext *ctx) = 0;

  virtual void enterAttribute_argument(MyParserParser::Attribute_argumentContext *ctx) = 0;
  virtual void exitAttribute_argument(MyParserParser::Attribute_argumentContext *ctx) = 0;

  virtual void enterPointer_type(MyParserParser::Pointer_typeContext *ctx) = 0;
  virtual void exitPointer_type(MyParserParser::Pointer_typeContext *ctx) = 0;

  virtual void enterFixed_pointer_declarators(MyParserParser::Fixed_pointer_declaratorsContext *ctx) = 0;
  virtual void exitFixed_pointer_declarators(MyParserParser::Fixed_pointer_declaratorsContext *ctx) = 0;

  virtual void enterFixed_pointer_declarator(MyParserParser::Fixed_pointer_declaratorContext *ctx) = 0;
  virtual void exitFixed_pointer_declarator(MyParserParser::Fixed_pointer_declaratorContext *ctx) = 0;

  virtual void enterFixed_pointer_initializer(MyParserParser::Fixed_pointer_initializerContext *ctx) = 0;
  virtual void exitFixed_pointer_initializer(MyParserParser::Fixed_pointer_initializerContext *ctx) = 0;

  virtual void enterFixed_size_buffer_declarator(MyParserParser::Fixed_size_buffer_declaratorContext *ctx) = 0;
  virtual void exitFixed_size_buffer_declarator(MyParserParser::Fixed_size_buffer_declaratorContext *ctx) = 0;

  virtual void enterLocal_variable_initializer_unsafe(MyParserParser::Local_variable_initializer_unsafeContext *ctx) = 0;
  virtual void exitLocal_variable_initializer_unsafe(MyParserParser::Local_variable_initializer_unsafeContext *ctx) = 0;

  virtual void enterRight_arrow(MyParserParser::Right_arrowContext *ctx) = 0;
  virtual void exitRight_arrow(MyParserParser::Right_arrowContext *ctx) = 0;

  virtual void enterRight_shift(MyParserParser::Right_shiftContext *ctx) = 0;
  virtual void exitRight_shift(MyParserParser::Right_shiftContext *ctx) = 0;

  virtual void enterRight_shift_assignment(MyParserParser::Right_shift_assignmentContext *ctx) = 0;
  virtual void exitRight_shift_assignment(MyParserParser::Right_shift_assignmentContext *ctx) = 0;

  virtual void enterLiteral(MyParserParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(MyParserParser::LiteralContext *ctx) = 0;

  virtual void enterBoolean_literal(MyParserParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(MyParserParser::Boolean_literalContext *ctx) = 0;

  virtual void enterString_literal(MyParserParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(MyParserParser::String_literalContext *ctx) = 0;

  virtual void enterInterpolated_regular_string(MyParserParser::Interpolated_regular_stringContext *ctx) = 0;
  virtual void exitInterpolated_regular_string(MyParserParser::Interpolated_regular_stringContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string(MyParserParser::Interpolated_verbatium_stringContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string(MyParserParser::Interpolated_verbatium_stringContext *ctx) = 0;

  virtual void enterInterpolated_regular_string_part(MyParserParser::Interpolated_regular_string_partContext *ctx) = 0;
  virtual void exitInterpolated_regular_string_part(MyParserParser::Interpolated_regular_string_partContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string_part(MyParserParser::Interpolated_verbatium_string_partContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string_part(MyParserParser::Interpolated_verbatium_string_partContext *ctx) = 0;

  virtual void enterInterpolated_string_expression(MyParserParser::Interpolated_string_expressionContext *ctx) = 0;
  virtual void exitInterpolated_string_expression(MyParserParser::Interpolated_string_expressionContext *ctx) = 0;

  virtual void enterKeyword(MyParserParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(MyParserParser::KeywordContext *ctx) = 0;

  virtual void enterClass_definition(MyParserParser::Class_definitionContext *ctx) = 0;
  virtual void exitClass_definition(MyParserParser::Class_definitionContext *ctx) = 0;

  virtual void enterStruct_definition(MyParserParser::Struct_definitionContext *ctx) = 0;
  virtual void exitStruct_definition(MyParserParser::Struct_definitionContext *ctx) = 0;

  virtual void enterInterface_definition(MyParserParser::Interface_definitionContext *ctx) = 0;
  virtual void exitInterface_definition(MyParserParser::Interface_definitionContext *ctx) = 0;

  virtual void enterEnum_definition(MyParserParser::Enum_definitionContext *ctx) = 0;
  virtual void exitEnum_definition(MyParserParser::Enum_definitionContext *ctx) = 0;

  virtual void enterDelegate_definition(MyParserParser::Delegate_definitionContext *ctx) = 0;
  virtual void exitDelegate_definition(MyParserParser::Delegate_definitionContext *ctx) = 0;

  virtual void enterEvent_declaration(MyParserParser::Event_declarationContext *ctx) = 0;
  virtual void exitEvent_declaration(MyParserParser::Event_declarationContext *ctx) = 0;

  virtual void enterField_declaration(MyParserParser::Field_declarationContext *ctx) = 0;
  virtual void exitField_declaration(MyParserParser::Field_declarationContext *ctx) = 0;

  virtual void enterProperty_declaration(MyParserParser::Property_declarationContext *ctx) = 0;
  virtual void exitProperty_declaration(MyParserParser::Property_declarationContext *ctx) = 0;

  virtual void enterConstant_declaration(MyParserParser::Constant_declarationContext *ctx) = 0;
  virtual void exitConstant_declaration(MyParserParser::Constant_declarationContext *ctx) = 0;

  virtual void enterIndexer_declaration(MyParserParser::Indexer_declarationContext *ctx) = 0;
  virtual void exitIndexer_declaration(MyParserParser::Indexer_declarationContext *ctx) = 0;

  virtual void enterDestructor_definition(MyParserParser::Destructor_definitionContext *ctx) = 0;
  virtual void exitDestructor_definition(MyParserParser::Destructor_definitionContext *ctx) = 0;

  virtual void enterConstructor_declaration(MyParserParser::Constructor_declarationContext *ctx) = 0;
  virtual void exitConstructor_declaration(MyParserParser::Constructor_declarationContext *ctx) = 0;

  virtual void enterMethod_declaration(MyParserParser::Method_declarationContext *ctx) = 0;
  virtual void exitMethod_declaration(MyParserParser::Method_declarationContext *ctx) = 0;

  virtual void enterMethod_member_name(MyParserParser::Method_member_nameContext *ctx) = 0;
  virtual void exitMethod_member_name(MyParserParser::Method_member_nameContext *ctx) = 0;

  virtual void enterOperator_declaration(MyParserParser::Operator_declarationContext *ctx) = 0;
  virtual void exitOperator_declaration(MyParserParser::Operator_declarationContext *ctx) = 0;

  virtual void enterArg_declaration(MyParserParser::Arg_declarationContext *ctx) = 0;
  virtual void exitArg_declaration(MyParserParser::Arg_declarationContext *ctx) = 0;

  virtual void enterMethod_invocation(MyParserParser::Method_invocationContext *ctx) = 0;
  virtual void exitMethod_invocation(MyParserParser::Method_invocationContext *ctx) = 0;

  virtual void enterObject_creation_expression(MyParserParser::Object_creation_expressionContext *ctx) = 0;
  virtual void exitObject_creation_expression(MyParserParser::Object_creation_expressionContext *ctx) = 0;

  virtual void enterIdentifier(MyParserParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(MyParserParser::IdentifierContext *ctx) = 0;


};


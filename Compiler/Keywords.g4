lexer grammar Keywords;

options {
	language = CSharp;
	tokenVocab = HemoLexical;
}

ABSTRACT : 'abstract';
AS : 'as';
BASE : 'base';
BREAK : 'break';
CASE : 'case';
CATCH : 'catch';
CHECKED : 'checked';
CONST : 'const';
CONTINUE : 'continue';
DEFAULT : 'default';
DELEGATE : 'delegate';
DO : 'do';
ELSE : 'else';
ENUM : 'enum';
EVENT : 'event';
EXPLICIT : 'explicit';
EXTERN : 'extern';
FALSE : 'false';
FIELDOF : 'fieldof';
FINALLY : 'finally';
FIXED : 'fixed';
FOR : 'for';
FOREACH : 'foreach';
GOTO : 'goto';
IF : 'if';
IMPLICIT : 'implicit';
IN : 'in';
INTERFACE : 'interface';
INTERNAL : 'internal';
IS : 'is';
LOCK : 'lock';
METHODOF : 'methodof';
NAMEOF : 'nameof';
NAMESPACE : 'namespace';
NEW : 'new';
NULL : 'null';
OPERATOR : 'operator';
OUT : 'out';
OVERRIDE : 'override';
PARAMS : 'params';
PRIVATE : 'private';
PROPERTYOF : 'propertyof';
PROTECTED : 'protected';
PUBLIC : 'public';
READONLY : 'readonly';
REF : 'ref';
RETURN : 'return';
SEALED : 'sealed';
SIZEOF : 'sizeof';
STACKALLOC : 'stackalloc';
STATIC : 'static';
SWITCH : 'switch';
THIS : 'this';
THROW : 'throw';
TRUE : 'true';
TRY : 'try';
TYPE : 'type';
TYPEOF : 'typeof';
UNCHECKED : 'unchecked';
UNSAFE : 'unsafe';
USING : 'using';
VIRTUAL : 'virtual';
VOID : 'void';
VOLATILE : 'volatile';
WHILE : 'while';

Keyword
	: ABSTRACT
	| AS
	| BASE
	| BREAK
	| CASE
	| CATCH
	| CHECKED
	| CONST
	| CONTINUE
	| DEFAULT
	| DELEGATE
	| DO
	| ELSE
	| ENUM
	| EVENT
	| EXPLICIT
	| EXTERN
	| FALSE
	| FIELDOF
	| FINALLY
	| FIXED
	| FOR
	| FOREACH
	| GOTO
	| IF
	| IMPLICIT
	| IN
	| INTERFACE
	| INTERNAL
	| IS
	| LOCK
	| METHODOF
	| NAMESPACE
	| NEW
	| NULL
	| OPERATOR
	| OUT
	| OVERRIDE
	| PARAMS
	| PRIVATE
	| PROPERTYOF
	| PROTECTED
	| PUBLIC
	| READONLY
	| REF
	| RETURN
	| SEALED
	| SIZEOF
	| STACKALLOC
	| STATIC
	| SWITCH
	| THIS
	| THROW
	| TRUE
	| TRY
	| TYPE
	| TYPEOF
	| UNCHECKED
	| UNSAFE
	| USING
	| VIRTUAL
	| VOID
	| VOLATILE
	| WHILE
	;
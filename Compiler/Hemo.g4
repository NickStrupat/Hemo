grammar Hemo;

byteOrderMark
    : '\u00EF\u00BB\u00BF'
    | '\u00FF\u00FF'
    | '\u00FF\u00FE'
    | '\u0000\u0000\u00FE\u00FF'
    | '\u00FE\u00FF\u0000\u0000'
    ;

compilationUnit
	: byteOrderMark? usingDirective* assemblyAttribute* namespaceOrTypeDeclaration* EOF
	;

usingDirective
	: 'using' identifier '=' namespaceOrTypeName ';'
	| 'using' namespaceOrTypeName ';'
	| 'using' 'static' namespaceOrTypeName ';'
	;


assemblyAttribute
	: '[assembly:' attributeList ','? ']'
	;

attributeList
	: attribute (','  attribute)*
	;

attribute
	: namespaceOrTypeName (OPEN_PARENS (attribute_argument (','  attribute_argument)*)? CLOSE_PARENS)?
	;

attribute_section
	: '[' (attribute_target ':')? attributeList ','? ']'
	;

attribute_target
	: keyword
	| identifier
	;

attribute_argument
	: (identifier ':')? expression
	;
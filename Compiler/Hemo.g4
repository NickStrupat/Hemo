parser grammar Hemo;
import Literals;

options {
	language = CSharp;
	tokenVocab = HemoLexical;
}

// integerTypeSuffix
// 	: storageSignedness storageSize
// 	;

// fragment
// storageSignedness : 'u' | 'i' ;

// fragment
// storageSize : '8' | '16' | '32' | '64' ;

// decimalIntegerLiteral
// 	: decimalNumeral integerTypeSuffix?
// 	;

// decimalNumeral : '0'..'9' [0-9_]* ;


// byteOrderMark
//     : '\u00EF\u00BB\u00BF'        // UTF-8
//     | '\u00FF\u00FF'              // UTF-16BE
//     | '\u00FF\u00FE'              // UTF-16LE
//     | '\u0000\u0000\u00FE\u00FF'  // UTF-32BE
//     | '\u00FE\u00FF\u0000\u0000'  // UTF-32LE
//     ;

// compilationUnit
// 	: byteOrderMark? usingDirective* assemblyAttribute* namespaceOrTypeDeclaration* EOF
// 	;

// usingDirective
// 	: 'using' identifier '=' namespaceOrTypeName ';'
// 	| 'using' namespaceOrTypeName ';'
// 	| 'using' 'static' namespaceOrTypeName ';'
// 	;


// assemblyAttribute
// 	: '[assembly:' attributeList ','? ']'
// 	;

// attributeList
// 	: attribute (','  attribute)*
// 	;

// attribute
// 	: namespaceOrTypeName (OPEN_PARENS (attribute_argument (','  attribute_argument)*)? CLOSE_PARENS)?
// 	;

// attribute_section
// 	: '[' (attribute_target ':')? attributeList ','? ']'
// 	;

// attribute_target
// 	: keyword
// 	| identifier
// 	;

// attribute_argument
// 	: (identifier ':')? expression
// 	;
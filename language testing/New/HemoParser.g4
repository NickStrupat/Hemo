parser grammar HemoParser;

options {
    tokenVocab = HemoLexer;
}

compilationUnit
	:
	Utf8ByteOrderMark?
	literal*
	EndOfFile
	;

literal
	: nullLiteral
	| booleanLiteral
	| integerLiteral
	| realLiteral
	| characterLiteral
	// | stringLiteral
	;

// Literals

nullLiteral
	: Null
	;

booleanLiteral
	: True
	| False
	;

integerLiteral
	:	decimalIntegerLiteral
	|	hexadecimalIntegerLiteral
	|	octalIntegerLiteral
	|	binaryIntegerLiteral
	;

decimalIntegerLiteral: DecimalIntegerLiteral;
hexadecimalIntegerLiteral: HexadecimalIntegerLiteral;
octalIntegerLiteral: OctalIntegerLiteral;
binaryIntegerLiteral: BinaryIntegerLiteral;
realLiteral: DecimalRealLiteral;
characterLiteral: CharacterLiteral;

// Numerals
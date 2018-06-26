lexer grammar HemoLexical;
import UnicodeClasses;

channels { COMMENT }

BlockComment : '/*' (BlockComment | .)*? '*/' -> channel(COMMENT) ;

LineComment : '//' .*? (NewLine | EOF) -> channel(COMMENT) ;

fragment NewLine
	: '\r\n'
	| '\r'
	| '\n'
	| '\u0085' // <Next Line CHARACTER (U+0085)>'
	| '\u2028' //'<Line Separator CHARACTER (U+2028)>'
	| '\u2029' //'<Paragraph Separator CHARACTER (U+2029)>'
	;

Whitespace
	:
    ( NewLine
	| UnicodeClassZS //'<Any Character With Unicode Class Zs>'
	| '\u0009' //'<Horizontal Tab Character (U+0009)>'
	| '\u000B' //'<Vertical Tab Character (U+000B)>'
	| '\u000C' //'<Form Feed Character (U+000C)>'
    )
    -> skip
	;
miniC:	miniC.l miniC.y funcTab.c codegenHelpers.c
	bison -d miniC.y
	flex miniC.l
	g++ -o $@ miniC.tab.c lex.yy.c funcTab.c codegenHelpers.c
clean:	miniC miniC.tab.c miniC.tab.h lex.yy.c
	rm miniC miniC.tab.c miniC.tab.h lex.yy.c
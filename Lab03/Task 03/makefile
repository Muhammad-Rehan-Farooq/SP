myexe : myMain.o myMath.o myStrFunc.o
	gcc -o myexe myMain.o myMathFunc.o myStrFunc.o
myMath.o:myMathFunc.c myMath.h
	gcc -c myMathFunc.c
myStrFunc.o:myStrFunc.c myStr.h
	gcc -c myStrFunc.c
myMain.o:myMain.c myMath.h myStr.h
	gcc -c myMain.c

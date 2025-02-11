#Exersise 1
main: max.out sum.out 
max.out:
	gcc max.c -o max.out
sum.out:
	gcc sum.c helper.c -o sum.out

#Exercise 2
all:safeadd.exe safesubstract.exe safemultiply.exe safedivide.exe
safeint.o:
	gcc -c safeint.c -o safeint.o
safeadd.exe: safeint.o
	gcc safeadd.c safeint.o -o safeadd.exe
	./safeadd.exe 213 135
safesubstract.exe: safeint.o
	gcc safesubstract.c safeint.o -o safesubstract.exe
	./safesubstract.exe 213 135
safemultiply.exe: safeint.o
	gcc safemultiply.c safeint.o -o safemultiply.exe
	./safemultiply.exe 213 135
safedivide.exe: safeint.o
	gcc safedivide.c safeint.o -o safedivide.exe
	./safedivide.exe 213 135
clean:
	del *.exe
	del *.o
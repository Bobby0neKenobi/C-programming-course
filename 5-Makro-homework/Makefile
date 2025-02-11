all: help.exe strlength.exe strconcat.exe strcompare.exe
help.exe: help.c
	gcc help.c -o help.exe
	./help.exe
mystring.o:
	gcc -c mystring.c -o mystring.o
strlength.exe: mystring.o
	gcc strlength.c mystring.o -o strlength.exe
	./strlength.exe Ivan
strconcat.exe: mystring.o
	gcc strconcat.c mystring.o -o strconcat.exe
	./strconcat.exe Hello World
	./strconcat.exe 123456789123456789123456789123456789123456789123456789 World
strcompare.exe: mystring.o
	gcc strcompare.c mystring.o -o strcompare.exe
	./strcompare.exe Alex Alben
	./strcompare.exe Alex Alex
	./strcompare.exe Alex Boyan
clean:
	del *.exe
	del *.o
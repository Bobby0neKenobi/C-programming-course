main.exe: quadraticroots.o
	gcc main.c quadraticroots.o -o main.exe
	./main.exe
quadraticroots.o:
	gcc -c quadraticroots.c -o quadraticroots.o
clean:
	del *.exe
	del *.o
all: exercise1.out

exercise1.exe: exercise1.c DynamicArray.o
	gcc exercise1.c DynamicArray.o -o exercise1.exe
	./exercise1.exe

exercise2.exe: exercise2.c DynamicArray.o
	gcc exercise2.c DynamicArray.o -o exercise2.exe
	./exercise2.exe

DynamicArray.o: DynamicArray.h DynamicArray.c
	gcc -c DynamicArray.c -o DynamicArray.o

clean:
	del *.o
	del *.exe
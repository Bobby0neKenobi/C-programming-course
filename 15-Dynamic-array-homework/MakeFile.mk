all: tests.out

exercise1.out: exercise1.c DynamicArray.o
	gcc tests.c DynamicArray.o -o exercise1.out

DynamicArray.o: DynamicArray.h DynamicArray.c
	gcc -c DynamicArray.c -o DynamicArray.o

clean:
	rm -f *.out *.o
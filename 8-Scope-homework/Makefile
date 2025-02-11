taskmanager.exe: processes.o
	gcc .\taskmanager.c .\processes.o -o taskmanager.exe
	.\taskmanager.exe
processes.o:
	gcc -c .\processes.c -o processes.o
clean:
	del *.exe
	del *.o
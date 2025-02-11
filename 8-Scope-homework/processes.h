#ifndef PROCESS
    #define PROCESS
    struct Processes{
        int id;
        char name[30];
    };
    extern struct Processes processes[5];
    extern int processescount;
    static int nextprocessid();
    int createnewprocess(char a[]);
    void stopprocess(int index);
#endif
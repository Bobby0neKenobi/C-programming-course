#include<stdio.h>
#include"processes.h"
int processescount = 0;
struct Processes processes[5];
static int nextprocessid(){
    for(int i = 0; i < 5; i++){
        if(!(processes[i].id)){
            if(!i){
                printf("1");
                return 1;
            }
            printf("%d\n", processes[i-1].id + 1);
            return (processes[i-1].id + 1);
        }
    }
}
int createnewprocess(char a[]){
    struct Processes newprocess;
    int id = nextprocessid();
    if(!id){
        return id;
    }
    int i = 0;
    while(a[i] != '\0'){
        newprocess.name[i] = a[i];
        i++;
    }
    newprocess.name[i] = '\0';
    newprocess.id = id;
    processes[processescount] = newprocess;
    processescount++;
    return id;
}
void stopprocess(int index){
    int flag = 0;
    for(int i = 0; i < processescount; i++){
        if(processes[i].id == index){
            index = i;
            flag = 0;
            break;
        }
        flag = 1;
    }
    if(flag || !processescount){
        printf("\nThere's no process with the id: %d\n", index);
        return;
    }
    for(int i = index; i < processescount; i ++){
        processes[i].id = processes[i + 1].id;
        for(int j = 0; j < 30; j++){
            processes[i].name[j] = processes[i + 1].name[j + 1];
        }
    }
    processescount--;
}
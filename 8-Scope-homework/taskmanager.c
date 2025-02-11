#include<stdio.h>
#include"processes.h"
int main(){
    printf("Commands:\n1- create process\n2- print processes\n3- Stop a process\n4- Exit program\n\n");
    int run = 1;
    int command;
    while(run){
        printf("Enter a command: ");
        scanf("%d", &command);
        printf("\n");
        switch(command){
            case 1: {
                    if(processescount == 5){
                        printf("No more space!!!\nRemove a process to free up space\n");
                        break;
                    }
                    char arr[50];
                    printf("Enter the new name of the process: ");
                    scanf("%s", &arr);
                    createnewprocess(arr);
                }
                break;
            case 2: for(int i = 0; i < processescount; i++){
                printf("\n");
                printf("id= %d name= %s\n", processes[i].id, processes[i].name);
            }
            if(!processescount){
                printf("there are no processes running\n");
            }
            break;
            case 3: {
                        printf("Enter the id of the process you want to stop: ");
                        int id;
                        scanf("%d", &id);
                        stopprocess(id);
                    }
                    break;
            case 4: run = 0; printf("Exiting..."); break;
            default: printf("No such command!!!\nTry again\n");
        }
        printf("\n");
    }
}
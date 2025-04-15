#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
void printTable(int subn, int stun, char ** students, char ** subjects, float ** marks){
    for(int i = 0; i < subn + 1; i++){
        for(int j = 0; j < stun + 1; j++){
            if(i == 0){
                if(j != 0){
                    printf("%-15s", students[j - 1]);
                }else{
                    printf("%-15s", "");
                }
            }else{
                if(j==0){
                    printf("%-15s", subjects[i - 1]);
                }else{
                    printf("%-15.2f", marks[i - 1][j - 1]);
                }
            }
        }
        printf("\n");
    }
    return;
}
int main(){
    system("clear");
    char ** subjects;
    char ** students;
    int subn;
    do{
        printf("Enter the number of subjects: ");
        scanf("%d", &subn);
        system("clear");
        if(subn <= 0){
            printf("Invalid input\n");
        }
    }while(subn <= 0);
    subjects = (char **)calloc(subn, sizeof(char *));
    if(subjects == NULL){
        printf("Couldn't allocate memory for the subjects");
    }
    for(int i = 0; i < subn; i++){
        subjects[i] = (char *)calloc(15, sizeof(char));
        if(subjects[i] == NULL){
            printf("Couldn't allocate memory for subject №%d's name", i + 1);
        }
        printf("Enter subject №%d's name: ", i + 1);
        scanf("%s", subjects[i]);
        system("clear");
    }
    int stun;
    do{
        printf("Enter the number of students: ");
        scanf("%d", &stun);
        system("clear");
        if(stun <= 0){
            printf("Invalid input\n");
        }
    }while(stun <= 0);
    students = (char **)calloc(stun, sizeof(char *));
    if(students == NULL){
        printf("Couldn't allocate memory for the students");
    }
    for(int i = 0; i < stun; i++){
        students[i] = (char *)calloc(200, sizeof(char));
        if(students[i] == NULL){
            printf("Couldn't allocate memory for student №%d's name", i + 1);
        }
        printf("Enter student №%d's name: ", i + 1);
        scanf("%s", students[i]);
        system("clear");
    }
    float ** marks = (float **)calloc(subn, sizeof(float *));
    if(marks == NULL){
        printf("Couldn't allocate memory for the marks");
    }
    for(int i = 0; i < subn; i++){
        marks[i] = calloc(stun, sizeof(float));
        if(marks == NULL){
            printf("Couldn't allocate memory for the marks for %s", subjects[i]);
        }
        for(int j = 0; j < stun; j++){
            float mark;
            do{
                printf("Enter %s's mark for %s:", students[j], subjects[i]);
                scanf("%f", &mark);
                system("clear");
                if(mark < 2 || mark > 6){
                    printf("Invalid input\n");
                }
            }while(mark < 2 || mark > 6);
            marks[i][j] = mark;
        }
    }
    while(1){
        printf("Enter a mode\n0-Exit\n1-Add a student\n2-Print table\n");
        int mode;
        scanf("%d", &mode);
        if(mode == 0){
            break;
        }else if(mode ==1){
            students = (char **)realloc(students, (stun + 1) * sizeof(char *));
            if(students == NULL){
                printf("Couldn't reallocate memory for students");
            }
            students[stun] = (char *)calloc(15, sizeof(char));
            if(students[stun] == NULL){
                printf("Couldn't allocate memory for student №%d's name", stun + 1);
            }
            stun ++;
            printf("Enter student №%d's name: ", stun);
            scanf("%s", students[stun - 1]);
            for(int i = 0; i < subn; i++){
                marks[i] = (float *) realloc(marks[i], stun * sizeof(float));if(marks == NULL){
                    printf("Couldn't allocate memory for the marks for %s", subjects[i]);
                }
                float mark;
                do{
                    printf("Enter %s's mark for %s:", students[stun - 1], subjects[i]);
                    scanf("%f", &mark);
                    if(mark < 2 || mark > 6){
                        printf("Invalid input\n");
                    }
                }while(mark < 2 || mark > 6);
                marks[i][stun - 1] = mark;
            }
        }else if(mode == 2){
            printTable(subn, stun, students, subjects, marks);
        }
    }
    system("clear");
    return 0;
}
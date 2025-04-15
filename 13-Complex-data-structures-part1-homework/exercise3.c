#include<stdio.h>
#include<windows.h>

typedef struct student
{
    char name[15];
    int number;
    double sr;
}Student;

Student newStudent(
    char _name[15],
    int _number,
    double _sr
){
    Student student;
    strcpy(student.name, _name);
    student.number = _number;
    student.sr = _sr;
    return student;
}

Student add(){
    int _number;
    char _name[15];
    double _sr;
    scanf("%s", &_name);
    scanf("%d", &_number);
    do{
        scanf("%lf", &_sr);
    }while(_sr < 2 || _sr > 6);
    return newStudent(_name, _number, _sr);
}

int main(){
    int opt;
    int length = 0;
    Student * arr = (Student *)calloc(length, sizeof(Student));
    if (arr == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    while(1){
        printf("Enter an option:\n1-Add a student\n2-Print students\n3-Exit\n");
        do{
            scanf("%d", &opt);
        }while(opt < 1 || opt > 3);
        switch(opt){
            case 1:
            length ++;
            arr = (Student *)realloc(arr, sizeof(Student) * length);
            if (arr == NULL) {
                printf("Error reallocating memory\n");
                exit(1);
            }
            arr[length - 1] = add();
            break;
            case 2: for(int i = 0; i < length; i++){
                printf("name = %s | number = %d | avarage = %.2lf\n", arr[i].name, arr[i].number, arr[i].sr);
            }
            Sleep(10000);
            break;
            case 3: return 0;
            default: printf("Try again");
        }
        system("cls");
    }
}
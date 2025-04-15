#include<stdio.h>
enum weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main(){
    enum weekday week = 1;
    int day;
    do{
        scanf("%d", &day);
    }while(day < 1 || day > 7);
    week = day;
    switch(week) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
          printf("Sunday\n");
          break;
        default:
          printf("Invalid input\n");
          break;
      }
}
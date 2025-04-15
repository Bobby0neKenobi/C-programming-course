#include<stdio.h>
typedef struct Time{
    int hour;
    int minutes;
}time;

typedef struct Date {
    int day;
    int month;
    int year;
    time timeOfStart;
}date;

typedef struct Event {
    char title;
    char description;
    int day;
    int month;
    int year;
    int hour;
    date dateOfEvent;
}event;
int main(){}
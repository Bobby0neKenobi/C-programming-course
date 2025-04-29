#include<stdio.h>
#include<stdbool.h>
typedef struct {
    char name[100];
    char middlename[100];
    char lastname[100];
    char email[100];
    char phonenumber[14];
}Participant;
typedef struct event {
    char title[100];
    char description[500];
    struct {
        int day;
        int month;
        int year;
        struct{
            int hour;
            int minutes;
        }Time;
    }Date;
    struct {
        Participant participants[100];
        bool participation[100];
    }Participation;
}Event;
void printDate(Event event){
    printf("On %d.%d.%d from %d:%d\n", event.Date.day, event.Date.month, event.Date.year, event.Date.Time.hour, event.Date.Time.minutes);
}
void printPart(Event event){
    printf("Participants:\n");
    for(int i = 0; i < sizeof(event.Participation.participation) / sizeof(bool); i++){
        if(event.Participation.participation[i]){
            printf("%d. %s %s %s, email: %s, phone: %s\n", i + 1, event.Participation.participants[i].name, event.Participation.participants[i].middlename, event.Participation.participants[i].lastname, event.Participation.participants[i].email, event.Participation.participants[i].phonenumber);
        }
    }
}
void print(Event * events){
    for(int i = 0; i < 2; i ++){
        printf("%s\n%s\n", (events + i)->title, (events + i)->description);
        printDate(*(events + i));
        printPart(*(events + i));
        printf("\n");
    }
}
int main(){
    Participant Bobby = {"Borislav", "Dimitrov", "Boydev", "borislav.boydev@gmail.com", "+359885823444"};
    Participant Boris = {"Boris", "Dimitar", "Boydev", "borislav.boydev@gmail.com", "0885825444"};
    Event events[2] = {[0] = {title: "Dogs", description: "dogs 234", {day: 1, month: 1, year: 2025, {hour: 8, minutes: 30}}, {{[0] = Bobby, [1] = Boris}, {true, false}}}, [1] = {title: "Dogs 2", description: "dogs 5", {day: 8, month: 1, year: 2025, {hour: 10, minutes: 0}}, {{[0] = Bobby, [1] = Boris}, {true, true}}}};
    print(events);
}
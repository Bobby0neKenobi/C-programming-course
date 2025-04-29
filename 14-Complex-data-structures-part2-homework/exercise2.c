#include<stdio.h>
typedef struct node{
    char firstname[100];
    struct node * father;
    struct node * mother;
    struct node * marriedto;
}Node;
int main(){
    Node Eme = {"Emilia", NULL, NULL, NULL};
    Node Bobi = {"Borislav", NULL, NULL, &Eme};
    Eme.marriedto = &Bobi;
    Node Boidu = {"Boidu", NULL, NULL, NULL};
    Node Mimi = {"Maria", NULL, NULL, &Boidu};
    Mimi.marriedto = &Boidu;
    Node Katia = {"Ekaterina", &Bobi, &Eme, NULL};
    Node Mitko = {"Dimitar", &Boidu, &Mimi, &Katia};
    Katia.marriedto = &Mitko;
    Node Bobby = {"Borislav", &Mitko, &Katia, NULL};
}
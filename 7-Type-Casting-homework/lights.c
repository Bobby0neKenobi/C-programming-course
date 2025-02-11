#include<stdio.h>
int main(){
    unsigned char a = 0;
    printf("1- is the command \"Switch lights\"\n2- is the command \"Print state\"\n3- is the command \"Exit\"\n");
    int choice;
    int flag = 1;
    while(flag){
        printf("Enter a command: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                {
                    int lamp;
                    printf("Enter a number: ");
                    scanf("%d", &lamp);
                    if(lamp > 0 || lamp < 9){
                        a = a ^ 1 << lamp;
                    }else{
                        printf("No such lamp try again!!!\n");
                    }
                }
                break;
            case 2:
                if(a){
                    printf("The light is on in rooms: ");
                }else{
                    printf("All the lights are off");
                }
                for(int i = 0; i < 8; i ++){
                    if(a>>i & 1 == 1){
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            case 3: 
                printf("Exiting program...");
                flag = 0;
        }
    }
}
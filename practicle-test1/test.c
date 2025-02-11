#include <stdio.h>
void sorting(int mass[]){
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            if(mass[i] > mass[j]){
                mass[i] = mass[i] + mass[j];
                mass[j] = mass[i] - mass[j];
                mass[i] = mass[i] - mass[j];
            }
        }
    }
}
int isNumberPrime(int num){
    int flag = 1;
    for(int j = 2; j < num; j++){
        if(num % j == 0){
            flag = 0;
        }
    }
    return flag;
}
int numbers(int n){
    int sum = 0;
    while(n != 0){
        sum ++;
        n/=10;
    }
    return sum;
}
int lastFunction(int mass[]){
    sorting(mass);
    int sum = 0;
    for(int i = 2; i < 10; i ++){
        if(isNumberPrime(i)){
            sum += numbers(mass[i]);
        }
    }
    return sum;
}
int main() {
    int mass[10] = {3, 17, 22, 342, 1024, 2025, 19, 25, 35, 85};
    printf("%d", lastFunction(mass));
    return 0;
}
#include<stdio.h>
#include"safeint.h"
int main(int argc, char** argv){
    struct SafeResult a = safeStrToInt(argv[1]);
    struct SafeResult b = safeStrToInt(argv[2]);
    struct SafeResult sum = safeAdd(a.value, b.value);
    if(a.errorflag || b.errorflag){
        printf("Inputed numbers are not between the limits");
        return 0;
    }
    if(sum.errorflag){
        printf("The sum is not between the limits");
        return 0;
    }
    printf("a = %d\nb = %d\nsum = %d\n", a.value, b.value, sum.value);
}
#include<stdio.h>
#include"safeint.h"
int main(int argc, char** argv){
    struct SafeResult a = safeStrToInt(argv[1]);
    struct SafeResult b = safeStrToInt(argv[2]);
    struct SafeResult product = safeMultiply(a.value, b.value);
    if(a.errorflag || b.errorflag){
        printf("Inputed numbers are not between the limits");
        return 0;
    }
    if(product.errorflag){
        printf("The product is not between the limits");
        return 0;
    }
    printf("a = %d\nb = %d\nproduct = %d\n", a.value, b.value, product.value);
}
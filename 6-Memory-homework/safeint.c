#include <stdio.h>
#include <limits.h>
#include"safeint.h"
struct SafeResult safeAdd(int a, int b){
    struct SafeResult result;
    if(a < b){
        b = a + b;
        a = b - a;
        b = b - a;
    }
    if(a < 0){
        if(INT_MIN - a > b){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }else{
        if(INT_MAX - a < b){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }

    result.value = a + b;
    result.errorflag = 0;
    return result;
}
struct SafeResult safeMultiply(int a, int b){
    struct SafeResult result;
    if(a < b){
        b = a + b;
        a = b - a;
        b = b - a;
    }
    if(a * b == 0){
        result.value = 0;
        result.errorflag = 0;
        return result;
    }
    if(INT_MIN / a > b){
        result.value = 0;
        result.errorflag = 1;
        return result;
    }

    result.value = a * b;
    result.errorflag = 0;
    return result;
}
struct SafeResult safeSubstract(int a, int b){
    struct SafeResult result;
    if(INT_MIN == b){
            result.value = 0;
            result.errorflag = 1;
            return result;
    }
    b = b * -1;
    if(a < b){
        b = a + b;
        a = b - a;
        b = b - a;
    }
    if(a < 0){
        if(INT_MIN - a > b){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }else{
        if(INT_MAX - a < b){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }

    result.value = a + b;
    result.errorflag = 0;
    return result;
}
struct SafeResult safeDivide(int a, int b){
    struct SafeResult result;
    if(b == 0){
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    if(INT_MIN * b > a){
        result.value = 0;
        result.errorflag = 1;
        return result;
    }

    result.value = a / b;
    result.errorflag = 0;
    return result;
}
struct SafeResult safeStrToInt(char a[]){
    struct SafeResult result;
    int i = 0;
    int num = 0;
    int b = 1;
    if(a[0] == '-'){
        b = -1;
        i++;
    }
    while(a[i] != '\0'){
        if(a[i] - '0' < 0 || a[i] - '0' > 9){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
        struct SafeResult sm = safeMultiply(num, 10);
        struct SafeResult ss = safeSubstract(a[i], '0');
        struct SafeResult sa = safeAdd(sm.value, ss.value);
        if(sm.errorflag || ss.errorflag || sa.errorflag){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
        num = sa.value;
        i++;
    }
    result.value = b * num;
    result.errorflag = 0;
    return result;
}
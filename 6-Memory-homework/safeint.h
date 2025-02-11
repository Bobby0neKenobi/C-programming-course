#ifndef SAFE
#define SAFE
struct SafeResult{
    int value;
    int errorflag;
};
struct SafeResult safeAdd(int a, int b);
struct SafeResult safeSubstract(int a, int b);
struct SafeResult safeMultiply(int a, int b);
struct SafeResult safeDivide(int a, int b);
struct SafeResult safeStrToInt(char a[]);
#endif
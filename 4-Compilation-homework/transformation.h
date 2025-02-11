#ifndef TRANSFORMATION
#define TRANSFORMATION

struct Transformation{
    long int result;
    char err[100];
};

struct Transformation transformation(char arr[], int size);

#endif
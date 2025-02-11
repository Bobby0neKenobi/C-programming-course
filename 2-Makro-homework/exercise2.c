#include <stdio.h>
#define COMPARE(A, B) (A > B)?A:B

int main(){
  int a = 1, b = 10;
  printf("%d\n", COMPARE(a, b));
}
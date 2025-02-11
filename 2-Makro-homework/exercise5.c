#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE temp = A; A = B; B = temp;
int main(void) {
  char a = 'L', b = 'M';
  SWAP(a, b, char);
  printf("a = %c, b = %c\n", a, b);
}
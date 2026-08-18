#include<stdio.h>
int main() {
  // Q - write a program to print a table .
  int a, b, N;
  printf("Enter a Number");
  scanf("%d", &N);
  for (a = 1; a <= N;a++) {
    for (b = 1; b <= 10; b++) {
      printf("%d * %d = %d \n", a, b, a * b);
    }
    printf("\n");
  }
  return 0;
}
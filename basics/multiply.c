#include <stdio.h>

int main()
{
  int w, x, y, z;
  printf("Enter a first number");
  scanf("%d", &w);

  printf("Enter a second number");
  scanf("%d", &x);

  printf("Enter a third number");
  scanf("%d", &y);

  z = w * x * y;
  printf(" multi=%d", z);

  return 0;
};

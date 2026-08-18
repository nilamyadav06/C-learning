#include <stdio.h>

int main()
{
  int x, y, z;

  printf("Enter first a number");
  scanf("%d", &x);

  printf("Enter second a number");
  scanf("%d", &y);

  z = x / y;
  printf("div=%d", z);

  return 0;
}
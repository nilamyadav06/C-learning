#include <stdio.h>

int main()
{
  int x, y, z;

  printf("Enter a first number");
  scanf("%d", &x);

  printf("Enter a second  number");
  scanf("%d", &y);

  z = x - y;
  printf("sub=%d", z);

  return 0;
}
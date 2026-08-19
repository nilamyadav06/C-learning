#include <stdio.h>
int main()
{
  int x, y = 0;
  printf("enter a number");
  scanf("%d", &x);
  while (x)
  {
    y = y * 10 + x % 10;
    x = x / 10;
  }
  printf("%d", y);
  return 0;
}
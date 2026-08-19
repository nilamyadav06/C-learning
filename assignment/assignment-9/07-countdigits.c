#include <stdio.h>
int main()
{
  int x, count = 0;
  printf("Enter a number");
  scanf("%d", &x);
  while (x)
  {
    x = x / 10;
    count++;
  }
  printf("%d", count);
  return 0;
}
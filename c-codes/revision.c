#include <stdio.h>

int main()
{
  // printf("Hello\nWorld");
  int x, y, z;
  printf("Enter a first number");
  scanf("%d", &x);
  printf("Enter a second number");
  scanf("%d", &y);
  z = x + y;
  printf("%d + %d = %d", x, y, z);
  return 0;
}
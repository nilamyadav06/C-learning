#include <stdio.h>
int main()
{
  int var;
  printf("Enter a number");
  scanf("%d", &var);
  switch (var)
  {
  case 1:
    printf("Good");
    break;
  case 2:
    printf("Better");
    break;
  case 3:
    printf("Best");
  default:
    printf("invalid");
  }

  return 0;
}
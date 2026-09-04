#include <stdio.h>
int main()
{
  int x, a, b;
  while (1)
  {
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter a number\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
      printf("Enter a two numbers");
      scanf("%d %d", &a, &b);
      printf("sum is %d", a + b);
      break;
    case 2:
      printf("Enter a two numbers");
      scanf("%d %d", &a, &b);
      printf("sub is %d", a - b);
      break;
    case 3:
      printf("Enter a two numbers");
      scanf("%d %d", &a, &b);
      printf("Multi is %d", a * b);
      break;
    case 4:
      printf("Enter a two numbers");
      scanf("%d %d", &a, &b);
      printf("Div is %d", a / b);
      break;
    case 5:
      break;
    }
    if (x == 5)
      break;
  }
  return 0;
}

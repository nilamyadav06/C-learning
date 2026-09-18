#include <stdio.h>
void sum();
void subract();
void multiply();
void division();

int main()
{
  int x, a, b;
  while (1)
  {
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter a number\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
      sum();
      break;
    case 2:
      subract();
      break;
    case 3:
      multiply();
      break;
    case 4:
      division();
      break;
    case 5:
      break;
    }
    if (x == 5)
      break;
  }
  return 0;
}

void sum()
{
  int a, b;
  printf("Enter a two numbers");
  scanf("%d %d", &a, &b);
  printf("sum is %d", a + b);
}

void subract()
{
  int a, b;
  printf("Enter a two numbers");
  scanf("%d %d", &a, &b);
  printf("sub is %d", a - b);
}
void multiply()
{
  int a, b;
  printf("Enter a two numbers");
  scanf("%d %d", &a, &b);
  printf("Multi is %d", a * b);
}
void division()
{
  int a, b;
  printf("Enter a two numbers");
  scanf("%d %d", &a, &b);
  printf("Div is %d", a / b);
}
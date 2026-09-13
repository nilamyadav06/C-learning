#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  while (1)
  {
    printf("\nEnter a case number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
      int num, f = 1, i;
      printf("Enter a number\n");
      scanf("%d", &num);
      for (i = 1; i <= num; i++)
      {
        f = f * i;
      }
      printf("Factorial of %d is %d\n", num, f);
      break;
    }
    case 2:
    {
      int num, i;
      printf("Enter a number\n");
      scanf("%d\n", &num);
      if (num % 2 == 0)
      {
        printf("Even");
      }
      else
      {
        printf("Odd");
      }
      break;
    }
    case 3:
    {
      int r, A;
      printf("Enter a radius of a Circle\n");
      scanf("%d", &r);
      A = 3.14 * r * r;
      printf("Area of circle is %d\n", A);
      break;
    }
    case 4:
    {
      int i, num, s = 0;
      printf("Enter a number\n");
      scanf("%d", &num);
      for (i = 1; i <= num; i++)
      {
        s = s + i;
      }
      printf("Sum of first %d natural number is %d\n", num, s);
      break;
    }
    case 5:
    {
      exit(0);
      break;
    }
    }
  }
  return 0;
}
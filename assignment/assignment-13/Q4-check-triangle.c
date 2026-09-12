#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, b, c, n;
  while (1)
  {
    printf("\n1. Isosceles Triangle\n");
    printf("2. Equilateral Triangle\n");
    printf("3. Right Angle Triangle\n");
    printf("4. Exit\n");
    printf("Enter a number");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      printf("Enter a side of Triangle");
      scanf("%d %d %d", &a, &b, &c);
      if (a == b || b == c || c == a)
      {
        printf("This Triangle is a Isosceles Triangle");
      }
      else
      {
        printf("This Triangle is not a Isosceles Triangle");
      }
      break;

    case 2:
      printf("Enter a side of Triangle");
      scanf("%d %d %d", &a, &b, &c);
      if (a == b && b == c && c == a)
      {
        printf("This Triangle is a equilateral Triangle");
      }
      else
      {
        printf("This Triangle is not a equilateral Triangle");
      }
      break;
    case 3:
      printf("Enter a side of Triangle");
      scanf("%d %d %d", &a, &b, &c);
      if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + b * b)
      {
        printf("This Triangle is a Right Angle Triangle");
      }
      else
      {
        printf("This Triangle is not a Right Angle Triangle");
      }
      break;
    case 4:
      exit(0);
    default:
      printf("This types of Triangle is not Exists");
      break;
    }
  }

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  while (1)
  {
    printf("Enter a number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 90 ... 100:
      printf("Grade-A\n");
      break;
    case 80 ... 89:
      printf("Grade-B\n");
      break;
    case 70 ... 79:
      printf("Grade-C\n");
      break;
    case 60 ... 69:
      printf("Grade-D\n");
      break;
    case 50 ... 59:
      printf("Grade-E\n");
      break;
    case 0 ... 49:
      printf("Grade-F\n");
      break;
    default:
      printf("Invalid Marks\n");
      exit(0);
    }
  }
  return 0;
}

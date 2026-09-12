#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  while (1)
  {
    printf("\n1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");
    printf("7. Sunday\n");
    printf("Enter a number of days");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      printf("Fresh start:'Happy fresh start to the week!'");
      break;
    case 2:
      printf("Momentum:'Happy Choos-day'!");
      break;
    case 3:
      printf("Hump Day:'Happy Hump Day!You're halfway to the Weekend'.");
      break;
    case 4:
      printf("Anticipation:'Happy Friday Eve!'");
      break;
    case 5:
      printf("Celebration:'Thank God It's Friday!'");
      break;
    case 6:
      printf("Relaxation:'Happy Saturday!Enjoy the slow morning.'");
      break;
    case 7:
      printf("Serenity:'Have a Peaceful and soul-soothing Sunday.'");
      break;

    default:
      printf("Sorry!'This Number is not Exist in the Week.'");
      exit(0);
      break;
    }
  }

  return 0;
}
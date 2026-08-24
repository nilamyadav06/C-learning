#include <stdio.h>
int main()
{
  int m, i, x;
  printf("Enter a numbers");
  scanf("%d", &m);
  for (x = m + 1;; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
        break;
    }

    if (i == x)
    {
      printf("Next Prime no. of %d is %d", m, x);
      break;
    }
  }
}
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
      int L, a, b;
      printf("Enter two numbers");
      scanf("%d %d", &a, &b);
      for (L = a > b ? b : a; L <= a * b; L++)
      {
        if (L % a == 0 && L % b == 0)
        {
          printf("LCM is %d", L);
        }
      }
      break;
    }
    case 2:
    {
      int x, sum = 0;
      printf("Enter a number");
      scanf("%d", &x);
      while (x)
      {
        int dig = x % 10;
        sum += dig;
        x = x / 10;
      }
      printf("%d", sum);
      break;
    }
    case 3:
    {
      int l, w, h, v;
      printf("Enter a length\n Width\n Height\n of cuboid\n");
      scanf("%d %d %d", &l, &w, &h);
      v = l * w * h;
      printf("Volume of Cuboid is %d\n", v);
      break;
    }
    case 4:
    {
      int i, n;
      printf("Enter a Number");
      scanf("%d", &n);
      for (i = 2; i < n; i++)
      {
        if (n % i == 0)
          break;
      }
      if (i == n)
        printf("Prime Number");

      else
        printf("Not a Prime Number");
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

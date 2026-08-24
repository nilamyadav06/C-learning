#include <stdio.h>
int main()
{
  int m, n, i, x;
  printf("Enter two numbers");
  scanf("%d %d", &m, &n);
  for (x = m; x <= n; x++)
  {
    for (i = 2; i <= x; i++)
    {
      if (x % i == 0)
        break;
    }

    if (i == x)
      printf("%d\t", x);
  }
}
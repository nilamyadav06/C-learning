#include <stdio.h>
int main()
{
  int i, n, prev1, prev2, fib;
  printf("Enter a nth term of fibonacci Number");
  scanf("%d", &n);
  if (n == 1)
    fib = 0;
  if (n == 2)
    fib = 1;
  prev1 = 0;
  prev2 = 1;
  printf("%d\t%d\t", prev1, prev2);
  for (i = 1; i <= (n - 2); i++)
  {
    fib = prev1 + prev2;
    printf("%d\t", fib);
    prev1 = prev2;
    prev2 = fib;
  }
  return 0;
}
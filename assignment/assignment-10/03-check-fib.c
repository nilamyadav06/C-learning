#include <stdio.h>
int main()
{
  int i, n, prev1, prev2, fib;
  printf("Enter a Number");
  scanf("%d", &n);
  if (n == 1)
    fib = 0;
  if (n == 2)
    fib = 1;
  prev1 = 0;
  prev2 = 1;

  if (n == 0 || n == 1)
  {
    printf("Fibonacci Number");
  }
  for (i = 1; i <= (n - 2); i++)
  {
    fib = prev1 + prev2;
    if (n == fib)
    {
      printf("Fibonacci");
      break;
    }
    prev1 = prev2;
    prev2 = fib;
  }

  if (i == n - 1)
  {
    printf("Not Fibonacci");
  }
  return 0;
}
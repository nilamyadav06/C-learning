#include <stdio.h>
int factorial_of_number(int n);
int main()
{
  int n;
  printf("Enter a number\t");
  scanf("%d", &n);
  int res = factorial_of_number(n);
  printf("%d", res);
}
int factorial_of_number(int n)
{
  int a, f = 1;
  for (a = 1; a <= n; a++)
  {
    f = f * a;
  }
  return f;
}
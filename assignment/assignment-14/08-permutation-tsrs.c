#include <stdio.h>
int fact_of_number(int n);
int main()
{
  int n, r;
  printf("Enter a number n=\n r=");
  scanf("%d %d", &n, &r);
  int res = fact_of_number(n) / fact_of_number(n - r);
  printf("%d", res);
}
int fact_of_number(int n)
{
  int a, f = 1;
  for (a = 1; a <= n; a++)
  {
    f = f * a;
  }
  return f;
}
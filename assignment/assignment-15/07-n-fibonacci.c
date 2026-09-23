#include <stdio.h>
void fibonacci_series(int n);
int main()
{
  int x;
  printf("Enter a number");
  scanf("%d", &x);
  fibonacci_series(x);
  return 0;
}
void fibonacci_series(int n)
{
  int a = -1, b = 1, c;
  for (int i = 0; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
    printf("%d", c);
  }
}
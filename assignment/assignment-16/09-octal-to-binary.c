#include <stdio.h>
int print_deci_to_octal(int n);

int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  int ans = print_deci_to_octal(n);
  printf("%d", ans);
  return 0;
}

int print_deci_to_octal(int n)
{
  if (n == 0 || n == 1)
    return n;

  int rem = n % 8;
  int res = rem + 10 * print_deci_to_octal(n / 8);
  return res;
}

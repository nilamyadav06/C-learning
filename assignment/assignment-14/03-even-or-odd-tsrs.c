#include <stdio.h>
int check_even_or_odd(int n);
int main()
{
  int n;
  printf("Enter a number\t");
  scanf("%d", &n);
  int res = check_even_or_odd(n);
  if (res == 0)
  {
    printf("Odd");
  }
  else
  {
    printf("Even");
  }
}
int check_even_or_odd(int n)
{
  if (n % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
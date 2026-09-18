#include <stdio.h>
void n_natural_number(int n);
int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  n_natural_number(n);
}
void n_natural_number(int n)
{
  int i = 1;
  while (i <= n)
  {
    printf("%d", i);
    i++;
  }
}
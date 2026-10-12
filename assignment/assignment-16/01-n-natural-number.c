#include <stdio.h>
void print_N(int n)
{
  if (n > 0)
  {
    print_N(n - 1);
    printf("%d", n);
  }
}
int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  print_N(n);
  return 0;
}
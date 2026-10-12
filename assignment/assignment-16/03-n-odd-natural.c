#include <stdio.h>
void print_oddN(int n)
{
  if (n > 0)
  {
    print_oddN(n - 1);
    printf("%d\t", 2 * n - 1);
  }
}
int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  print_oddN(n);
  return 0;
}
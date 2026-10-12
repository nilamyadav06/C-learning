#include <stdio.h>
void print_reverse_oddN(int n)
{
  if (n > 0)
  {
    printf("%d\t", 2 * n - 1);
    print_reverse_oddN(n - 1);
  }
}
int main()
{
  int n;
  printf("Enter  a number");
  scanf("%d", &n);
  print_reverse_oddN(n);
  return 0;
}
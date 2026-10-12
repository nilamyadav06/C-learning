#include <stdio.h>
void print_evenN(int n)
{
  if (n > 0)
  {
    print_evenN(n - 1);
    printf("%d\t", 2 * n);
  }
}
int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  print_evenN(n);
  return 0;
}
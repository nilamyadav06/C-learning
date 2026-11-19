#include <stdio.h>
void print_evenN(int n)
{
  if (n > 0)
  {
    printf("%d\t", 2 * n);
    print_evenN(n - 1);
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
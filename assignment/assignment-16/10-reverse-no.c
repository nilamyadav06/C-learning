#include <stdio.h>
void print_reverse_number(int n)
{
  if (n > 0)
  {

    printf("%d\t", n % 10);
    print_reverse_number(n / 10);
  }
}
int main()
{
  int n;
  printf("Enter  a number");
  scanf("%d", &n);
  print_reverse_number(n);
  return 0;
}
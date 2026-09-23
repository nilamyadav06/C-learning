#include <stdio.h>
void prime_number(int a, int n);
int main()
{
  int p, q;
  printf("Enter two prime numbers:");
  scanf("%d %d", &p, &q);
  prime_number(p, q);
  return 0;
}
void prime_number(int a, int n)
{
  int x, i;
  for (x = a; x < n; x++)
  {
    for (i = 2; i < n; i++)
    {
      if (x % i == 0)
        break;
    }
    if (i == x)
      printf("%d", x);
  }
}
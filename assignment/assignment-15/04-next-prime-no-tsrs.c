#include <stdio.h>
int next_prime(int n);
int main()
{
  int n, x, m;
  printf("Enter a number");
  scanf("%d", &n);
  int is_prime = next_prime(n);
  printf("%d", is_prime);
  return 0;
}

int next_prime(int n)
{

  int i, x;
  for (x = n + 1;; x++)
  {
    for (i = 2; i < x; i++)
    {
      if (x % i == 0)
        break;
    }
    if (i == x)
      return x;
  }
}

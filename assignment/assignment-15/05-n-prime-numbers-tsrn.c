#include <stdio.h>
void n_prime(int num);
int main()
{
  int x;
  printf("Enter a number");
  scanf("%d", &x);
  n_prime(x);

  return 0;
}

void n_prime(int num)
{

  int i, n, num;
  for (n = num + 1;; n++)
  {
    for (i = 2; i < n; i++)
    {
      if (n % i == 0)
        break;
    }
    if (i == n)
    {
      printf("Prime");
    }
  }
  return 0;
}

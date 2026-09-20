#include <stdio.h>
int check_prime_or_not(int n);
int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);

  int is_prime = check_prime_or_not(n);
  if (is_prime == 1)
  {
    printf("Prime Number");
  }
  else
  {
    printf("Not Prime Number");
  }
}

int check_prime_or_not(int n)
{
  if (n <= 1)
    return 0;
  int i;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
      return 0;
  }

  return 1;
}

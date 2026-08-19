#include <stdio.h>
int main()
{
  int i, N, s = 0;
  printf("Enter a number");
  scanf("%d", &N);
  for (i = 0; i <= N; i++)
  {
    s = s + i * i * i;
  }
  printf("Sum of square of %d natural number is %d", N, s);
  return 0;
}
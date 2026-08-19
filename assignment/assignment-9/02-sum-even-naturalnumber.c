#include <stdio.h>
int main()
{
  int i, N, s = 0;
  printf("Enter a number");
  scanf("%d", &N);
  for (i = 0; i <= N; i++)
  {
    s = s + 2 * i;
  }
  printf("Sum of first %d even natural number is %d", N, s);
  return 0;
}
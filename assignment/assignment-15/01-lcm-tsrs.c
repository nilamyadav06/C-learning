#include <stdio.h>
int LCM_of_number(int a, int b);
int main()
{
  int L, a, b;
  printf("Enter a two numbers");
  scanf("%d %d", &a, &b);
  int res = LCM_of_number(a, b);
  printf("%d", res);
}
int LCM_of_number(int a, int b)
{
  int L;
  for (L = a > b ? b : a; L <= a * b; L++)
  {
    if (L % a == 0 && L % b == 0)
    {
      return L;
    }
  }
  return 0;
}
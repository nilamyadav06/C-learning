#include <stdio.h>
int main()
{
  int L, a, b;
  printf("Enter two numbers");
  scanf("%d %d", &a, &b);
  for (L = a > b ? b : a; L <= a * b; L++)
  {
    if (L % a == 0 && L % b == 0)
    {
      printf("LCM is %d", L);
      break;
    }
  }
  return 0;
}
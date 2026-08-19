#include <stdio.h>
int main()
{

  // Q1-
  /*

  */

  // Q2-
  /*

  */

  // Q3-
  /*

*/

  // Q4-
  /*
  int a, b, h;
  printf("Enter a nth number");
  scanf("%d", &a);
  scanf("%d", &b);
  for (h = a < b ? a : b;h >= 1;h--) {
    if (a % h == 0 && b % h == 0)
      break;
  }
  printf("HCF is %d", h);
  */

  // Q5-

  // Q6-
  int i, n;
  printf("Enter a Number");
  scanf("%d", &n);
  for (i = 2; i <= n; i++)
  {
    if (n % i == 0)
      break;
    if (i == n)
      printf("Prime Number");

    else
      printf("Not a Prime Number");
  }

  return 0;
}

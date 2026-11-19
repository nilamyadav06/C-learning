#include <stdio.h>
int get_deci_to_bin(int n);

int main()
{
  int n;
  printf("Enter a number");
  scanf("%d", &n);
  // int ans = get_deci_to_bin(n);
  // printf("%d", ans);
  return 0;
}

/* Method -1 */
int get_deci_to_bin(int n)
{
  if (n == 0 || n == 1)
    return n;

  int rem = n % 2;
  int res = rem + 10 * get_deci_to_bin(n / 2);
  return res;
}

/* Method -1*/
void print_deci_to_bin(int n)
{
}
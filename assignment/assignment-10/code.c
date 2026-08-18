#include<stdio.h>
int main() {

  // Q1-
  /*
  int i, n, prev1, prev2, fib;
  printf("Enter a nth term of fibonacci Number");
  scanf("%d", &n);
  if (n == 1)
    fib = 0;
  if (n == 2)
    fib = 1;
  prev1 = 0;
  prev2 = 1;
  for (i = 1;i <= (n - 2);i++) {
    fib = prev1 + prev2;
    prev1 = prev2;
    prev2 = fib;
  }
  printf("%d", fib);
  */

  // Q2-
  /*
  int i, n, prev1, prev2, fib;
  printf("Enter a nth term of fibonacci Number");
  scanf("%d", &n);
  if (n == 1)
    fib = 0;
  if (n == 2)
    fib = 1;
  prev1 = 0;
  prev2 = 1;
  for (i = 1;i <= (n - 2);i++) {
    fib = prev1 + prev2;
    printf("%d\t", fib);
    prev1 = prev2;
    prev2 = fib;
  }
  */

  // Q3-
  /*
  int i, n, prev1, prev2, fib;
  printf("Enter a nth term of fibonacci Number");
  scanf("%d", &n);
  if (n == 1)
    fib = 0;
  if (n == 2)
    fib = 1;
  prev1 = 0;
  prev2 = 1;
  for (i = 1;i <= n;i++) {
    fib = prev1 + prev2;
    prev1 = prev2;
    prev2 = fib;
  }
  if (fib >= prev1 + prev2) {
    printf("Fibonacci Series");
  }
  else {
    printf("Not a Fibonacci Series");
  }
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
  for (i = 2; i <= n; i++) {
    if (n % i == 0)
      break;
    if (i == n)
      printf("Prime Number");

    else
      printf("Not a Prime Number");

  }


  return 0;
}

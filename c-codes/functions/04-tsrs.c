#include <stdio.h>
// Function Declaration/prototype
int sum();

int main()
{
  int a, b;
  printf("Enter a 2 number");
  scanf("%d %d", &a, &b);
  // Function Call
  int result = sum(a, b);
  printf("Sum=%d", result);
  return 0;
}

// Takes something Return Something
int sum(int a, int b)
{
  int res = a + b;
  return res;
}
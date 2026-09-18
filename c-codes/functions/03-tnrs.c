#include <stdio.h>
// Function Declaration
int sum();

int main()
{
  // Function Call
  int result = sum();
  printf("Sum=%d", result);
  return 0;
}

// Takes Nothing Return Something
int sum()
{
  int a, b;
  printf("Enter 2 number\t");
  scanf("%d %d", &a, &b);

  int res = a + b;
  return res;
}
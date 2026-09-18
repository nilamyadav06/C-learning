#include <stdio.h>
// Function Declaration
void sum();

int main()
{
  // Function Call
  sum();
  return 0;
}

// 1. Takes Nothing Return Nothing
void sum()
{
  int a, b;
  printf("Enter 2 number\t");
  scanf("%d %d", &a, &b);

  int res = a + b;
  printf("Sum=%d", res);
}
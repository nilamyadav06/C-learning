#include <stdio.h>
// Function Declaration
void sum();

int main()
{
  int x, y;
  printf("Enter 2 Number\t");
  scanf("%d %d", &x, &y);
  // Function Call
  sum(x, y);
  return 0;
}

// Takes Something Return Nothing
void sum(int a, int b)
{
  int res = a + b;
  printf("Sum=%d", res);
}
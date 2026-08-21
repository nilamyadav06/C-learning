#include <stdio.h>
int main()
{

  int a, b, input1, input2, H;
  printf("Enter a input");
  scanf("%d", &input1);
  scanf("%d", &input2);
  if (input1 > input2)
  {
    a = input2;
    b = input1;
  }
  else
  {
    b = input2;
    a = input1;
  }

  int rem;

  while (b % a != 0)
  {
    rem = b % a;
    b = a;
    a = rem;
  }

  printf("HCF=%d", rem);

  return 0;
}
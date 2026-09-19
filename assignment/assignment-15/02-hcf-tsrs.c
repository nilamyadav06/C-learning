#include <stdio.h>
int HCF_of_number(int input1, int input2);
int main()
{

  int a, b, input1, input2, H;
  printf("Enter a input");
  scanf("%d", &input1);
  scanf("%d", &input2);
  int res = HCF_of_number(input1, input2);
  printf("%d ", res);
}

int HCF_of_number(int input1, int input2)
{
  int a, b;
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

  return rem;
}

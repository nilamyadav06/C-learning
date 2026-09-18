#include <stdio.h>
int is_number_contains_digit(int num, int digit);
int main()
{
  int num, digit;
  printf("Enter a  number and digit");
  scanf("%d %d", &num, &digit);
  int res = is_number_contains_digit(num, digit);
  if (res == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
}
int is_number_contains_digit(int num, int digit)
{
  while (num)
  {
    if (num % 10 == digit)
    {
      return 1;
    }
    num = num / 10;
  }
  return 0;
}
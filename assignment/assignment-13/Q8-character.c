#include <stdio.h>
int main()
{
  char n;
  printf("Enter a character\n");
  scanf("%c", &n);
  switch (n)
  {
  case 65 ... 90:
    printf("UpperCase Alphabet\n");
    break;
  case 97 ... 122:
    printf("LowerCase Alphabet\n");
    break;
  default:
    printf("Some Other Special Character\n");
    break;
  }

  return 0;
}
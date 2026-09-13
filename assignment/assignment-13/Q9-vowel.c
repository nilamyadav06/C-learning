#include <stdio.h>
int main()
{
  char n;
  printf("Enter a character\n");
  scanf("%c", &n);
  switch (n)
  {
  case 97:
    printf("Vowel\n");
    break;
  case 101:
    printf("Vowel\n");
    break;
  case 105:
    printf("Vowel\n");
    break;
  case 111:
    printf("Vowel\n");
    break;
  case 117:
    printf("Vowel\n");
    break;
  case 65 ... 90:
    printf("Consonant\n");
    break;
  default:
    printf("Some Other Special Character\n");
    break;
  }

  return 0;
}
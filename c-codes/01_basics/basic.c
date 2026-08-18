#include <stdio.h>

int main()
{

  // 1. printf
  // Q-1. print hello world
  // printf("Hello World");

  // Q-2.  print welcome in first line and students in second line
  // method -1
  /*
  printf("Welcome");
  printf("\n");
  printf("Students");
  */

  // method -2
  /*
  printf("Welcome\n");
  printf("Students");
  */

  // method -3
  // printf("Welcome\nStudents");

  // 2. Escape sequence
  // Q-1. print Hello World wite one space gap
  /*
  printf("Hello World\n");
  printf("Hello \b World");
  */

  // Q-2. print Hello World with 2 white space
  /*
  printf("Hello   World");
  printf("\n");
  printf("Hello\tWorld");
  */

  // 3. Print value of variable on screen
  // Q-1. declare a variable a of data type int whose value is 5. print it on screen.
  // int a = 5;
  // printf("%d", a);
  // printf("%d %d", a, a);
  // printf("a=%d", a);
  // printf("Value of a is %d", a);

  // Q-2. declare a variable of char type whose value is first letter of your name. print it on screen.
  // char a = 'N';
  // printf("%c", a);

  // Q-3. declare 2 variable of char type whose value is first letter of your first name , last name respectively. and print those on screen.
  /*
  char a = 'N', b = 'Y';
  printf("%c %c", a, b);
  */

  // 4. scanf: used for taking input from the user
  // Q-1. take int value from user and print it on screen.
  /*
  int x;
  printf("Enter a number\t");
  scanf("%d", &x);

  printf("You have entered number=%d", x);
  */

  // Q-2. take 2 value from user and find the sum and print on the screen.
  int x, y, c;
  printf("Enter a first number");
  scanf("%d", &x);
  printf("Enter a second number");
  scanf("%d", &y);
  c = x + y;
  printf("sum of %d and %d is %d\n", x, y, c);

  printf("%d + %d = %d", y, x, c);

  return 0;
}
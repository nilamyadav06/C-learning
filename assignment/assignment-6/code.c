#include<stdio.h>
int main() {

  // Q1-
  /*
  int n;
  printf("Enter a Number");
  scanf("%d", &n);
  if (n > 999 && n <= 9999) {
    printf("Four digit number");
  }
  else {
    printf("Not a Four digit number");
  }
  */

  // Q2-
  /*
  int sp, cp, Profit, Loss;

  printf("Enter a cp\n");
  scanf("%d", &cp);

  printf("Enter a sp\n");
  scanf("%d", &sp);

  if (sp > cp) {
    Profit = (sp - cp) * 100 / cp;
    printf("Profit=%d%%", Profit);
  }
  else {
    Loss = (cp - sp) * 100 / cp;
    printf("Loss=%d%%", Loss);
  }
  */



  // Q3-
  /*
  int n;
  printf("Enter a  Total number of Subject ");
  scanf("%d", &n);
  if (n < 100 && n >= 33) {
    int total = 100;
    printf("PASS");
  }
  else {
    printf("FAIL");
  }
  */

  // Q4-
  /*
  char n;
  printf("Enter a Alphabet");
  scanf("%c", &n);
  if (n >= 'A' && n <= 'Z') {
    printf("Upper Case");
  }
  if (n >= 'a' && n <= 'z') {
    printf("Lower case");

  }
  */

  // Q5-
  /*
  int n;
  printf("Enter a Number");
  scanf("%d", &n);
  if (n % 3 == 0 && n % 2 == 0) {
    printf("Divisible by 2 and 3");
  }
  else{
    printf("Not divisible by 2 and 3");
  }
  */

  // Q6-
  /*
  int n;
  printf("Enter a Number");
  scanf("%d", &n);
  if (n % 7 == 0 || n % 3 == 0 ) {
    printf("Divisible by 3 or  7");
  }
  else {
    printf("Not divisible by 3 or 7");
  }
  */

  // Q7-
  /*
  int n;
  printf("Enter a Number");
  scanf("%d", &n);
  if (n > 0) {
    printf("Positive");
  }
  else if (n < 0) {
    printf("Negative");
  }
  else {
    printf("Zero");
  }
  */

  // Q8-
  /*
  int a, b, c;

  printf("Enter a length of a triangle\n");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a) {
    printf("Triangle is valid");
  }
  else {
    printf("Triangle is Not valid");
  }
  */


  // Q-9
  /*
  char n;
  printf("Enter a Character ");
  scanf("%c", &n);
  if (n >= 'A' && n <= 'Z') {
    printf("Upper Case");
  }
  else if (n >= 'a' && n <= 'z') {
    printf("Lower case");

  }
  else if (n >= '0' && n <= '9') {
    printf("Digit character");

  }
  else {
    printf("Special character");
  }
  */


  // Q10-
  /*
  int n;
  printf("Enter a Month Number");
  scanf("%d", &n);
  if (n == 2) {
    printf("28 DAYS");
  }
  else if (n == 8) {
    printf("30 DAYS");
  }
  else if (n % 2 == 0) {
    printf("30 DAYS");
  }
  else {
    printf("31 DAYS");
  }
  */

  return 0;

}

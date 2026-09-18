#include <stdio.h>
// Function Declaration of printBabita
void printBabita();
// Function Declaration of printBikash
void printBikash();
void printNilam();

int main()
{

  // Function Call of printBikash
  printBikash();
  return 0;
}

// Function Definition
void printBikash()
{
  printNilam();
  printf("Bikash Kumar Yadav\n");
  printBabita();
  printNilam();
}

// Function Definition of printBabita
void printBabita()
{
  printf("Babita kumari\n");
}

void printNilam()
{
  printf("Nilam Yadav\n");
}
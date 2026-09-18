#include <stdio.h>
float simple_interest(float p, float r, float t);
int main()
{
  float p, r, t;
  printf("Enter a Amount:\nrate:\nTime:\n");
  scanf("%f %f %f", &p, &r, &t);
  float res = simple_interest(p, r, t);
  printf("%f", res);
}
float simple_interest(float p, float r, float t)
{
  float s;
  s = p * r * t / 100;
  return s;
}
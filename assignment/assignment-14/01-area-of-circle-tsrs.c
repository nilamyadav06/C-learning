#include <stdio.h>
float area_of_circle(float r);
int main()
{
  float r;
  printf("Enter a radius of circle");
  scanf("%f", &r);
  float res = area_of_circle(r);
  printf("%f", res);
}
float area_of_circle(float r)
{
  float area;
  area = 3.14 * r * r;
  return area;
}
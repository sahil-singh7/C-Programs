// Program for calculating Circumference, Area and Diameter of a Circle
#include<stdio.h>
#define PI 3.14
int main()
{
  float r, c, a, d;
  printf("Enter the Value of Radius of the Circle:");
  scanf("%f", &r);
  
  a= PI*r*r;
  c= 2*PI*r;
  d= 2*r;
  
  printf("The Area of the Circle is %.2f\n", a);
  printf("The Circumference of the Circle is %.2f\n", c);
  printf("The Diameter of the Circle is %.2f", d);
  return 0;
}
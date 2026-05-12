/* If f>3.14 add 10 to the integer */
#include <stdio.h>
int main()
{
  int inte=0;
  float dec=0.0;
  printf("The Value of Decimal is: ");
  scanf("%f", &dec);
  printf("\nThe Value of Integer is: ");
  scanf("%d", &inte);
  if(dec > 3.14)
  inte= inte+10;
  printf("\nDecimal Value: %f And Integer Value: %d", dec, inte);
  return 0;
}
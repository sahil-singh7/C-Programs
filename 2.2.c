/* Program that Prints a Float Value in Exponential Format */
#include <stdio.h>
int main()
{
  double dnum;
  
  printf("Enter the Decimal Value:-");
  scanf("%lf", &dnum);
  printf("\nThe Value of %lf in Exponential Format is %.8e", dnum, dnum);
  return 0;
}
  
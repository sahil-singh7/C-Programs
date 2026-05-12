/* PROGRAM TO READ AN INTEGER, THEN DISPLAY THE VALUE OF 
THE INTEGER IN DECIMAL, OCTAL AND HEXADECIMAL. */
#include <stdio.h>
int main ()
{
  int num;
  printf("Enter the Value in Integer => ");
  scanf("%d", &num);
  
  printf("\nThe Value of %d in Decimal = %d\n", num, num);
  printf("The value of %d in Octal = %o\n", num, num);
  printf("The Value of %d in Hexadecimal = %X", num, num);
  
  return 0;
  }
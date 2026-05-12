// Program For Printing Numbers and Sum of Even Numbers Between 1 to 200.
#include <stdio.h>
int main()
{
  int count=0, z=0;
  for(int num=1; num<=199; num++)
  {
    if(num%2==0)
    {
      count++;
      z=z+num;
      }
      }
      printf("Total Number of Even numbers Between 1 to 200 is %d And Their Sum Is %d.", count, z);
      
      return 0;
      }
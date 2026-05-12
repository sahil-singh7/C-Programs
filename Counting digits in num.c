// code for finding number of digits in the given number...
#include <stdio.h>
#include <conio.h>
void main()
{
  int n,count=0;
  printf("INPUT THE NUMBER =>");
  scanf("%d",&n);
  while (n != 0)
  { 
    n=n/10; 
    count++;
  }
 printf("The Number of Digits are %d.",count);
 getch();
 
}

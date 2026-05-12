#include<stdio.h>
void main()
{
  char letter;
  printf("Write any letter from a to z =>>> ");
  scanf("%c",&letter);
  
  if( letter == 'A' || letter == 'a' )
  printf("A for Apple.");
  else if( letter == 'B' || letter == 'b')
  printf("B for Boy.");
  else if( letter == 'C' || letter == 'c')
  printf("C for Cat.");
  else if( letter == 'D' || letter == 'd')
  printf("D for Dog.");
   
   
  
  else
  printf("Error, Try again.");
 
}
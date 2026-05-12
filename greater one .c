// Larger number between two numbers using function
#include <stdio.h>
int larg(int a, int b);
int main()
{
  int m, n, result;
  printf("First Number: ");
  scanf("%d", &m);
  printf("Second Number: ");
  scanf("%d", &n);
  
  result=larg(m, n);
  if(result==0)
  printf("Both %d and %d are Equal.", m, n);
  if(result==1)
  printf("First Number %d is Greater than %d.", m, n);
  if(result==-1)
  printf("Second Number %d is Greater than %d.", n, m);
  return 0;
 }
 
 int larg(int a, int b)
 { 
   if(a==b)
   return 0;
   else if(a>b)
   return 1;
   else
   return -1;
   }
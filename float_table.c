// Program to write table of given decimal value...........
#include<stdio.h>
#include<conio.h>
void main()
{
  float table,z;
  clrscr();
  printf("Give me the value in decimal. ");
  scanf("%f",&table);
  printf("\n Table of %.2f is....\n\n",table);
  for(int n=1;n<=10;n++)
  {
    z = table * n;
    
    printf("%.2f * % d = %.2f\n",table,n,z);
  } 
  getch();
}  
    
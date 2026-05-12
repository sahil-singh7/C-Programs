// PROGRAM FOR PRINTING TABLE TILL USER`S NEED......

#include<stdio.h>
#include<conio.h>
void main()
{ 
  int tab,n,z=0;
  clrscr();
  printf("I can print the Table of Natural Numbers only till your desire.\n\n");
  printf("Tell me how long you want me to print Table from 1. =>> ");
  scanf("%d",&tab);
  printf("___________________________________________________________\n\n\n");
  
  for(n=1;n<=tab;n++)
  {
    printf("\nTable of %d.\n",n);
    printf("__________\n\n");
    for(int a=1;a<=10;a++)
     {
       z = n * a;
       printf("%d * %d = %d \n",n,a,z);
     }
     printf("\n");
     printf("************\n");  
     printf("************\n"); 
  }
  getch();
}
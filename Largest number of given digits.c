#include<stdio.h>
#include<conio.h>
void main()
{ 
  int t=9,a;
  printf("Tell me the number.\n");
  scanf("%d",&a);
  for(int n=1;n<=a;n++)
  {
     printf("%d",t);
  }
  getch();
}
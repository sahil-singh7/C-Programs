#include<stdio.h>
#include<conio.h>
void main()
{
  float p,t,r,si,a;
  printf("What's the value of Principle Amount=> \n");
  scanf("%f",&p);
  printf("What's the value of Time(Time must be in year)=> \n");
  scanf("%f",&t);
  printf("What's the value of rate=> \n");
  scanf("%f",&r);
  si = p*t*r/100;
  a = p+si;
  printf("The Value of Simple Interest is %f and Amount is %f.",si,a);
  getch();

}
    
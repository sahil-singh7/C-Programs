// program for calculating sum of eight different subjects and their percentage.
#include <stdio.h>
int main()
{
  int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, total=0;
  float per=0.0;
  printf("Things To Remember While Using This Program:- \n");
  printf("\n\n1) If You Accidently Entered The Wrong Marks In Any Specific Subject Then\n   You Should Enter '0' Value For The Very Next Subject, By Doing This You Could\n   Be Able To Input The Values From Start.\n");
  printf("\n\n2) If Your Work Is Done Or You Want To Finish The Program Then\n   You Should Press '999' To Finish The Program.\n\n");
  printf("-----------------------------------------------------------------------------------\n");
  
  t:while(a>=0)
  {
    
    printf("\nEnter The Marks Obtained In English   : ");
    scanf("%d", &a);
    if(a==0)
    goto t;
    if(a==999)
    break;
    
    printf("\nEnter The Marks Obtained In Hindi     : ");
    scanf("%d", &b);
    if(b==0)
    goto t;
    if(b==999)
    break;
    
    printf("\nEnter The Marks Obtained In Maths     : ");
    scanf("%d", &c); 
    if(c==0)
    goto t;  
    if(c==999)
    break;
    
    printf("\nEnter The Marks Obtained In S.St      : ");
    scanf("%d", &d); 
    if(d==0)
    goto t;
    if(d==999)
    break;
    
    printf("\nEnter The Marks Obtained In G.K       : ");
    scanf("%d",&e );
    if(e==0)
    goto t;
    if(e==999)
    break;
    
    printf("\nEnter The Marks Obtained In Science   : ");
    scanf("%d", &f);  
    if(f==0)
    goto t;
    if(f==999)
    break;
    
    printf("\nEnter The Marks Obtained In Computer  : ");
    scanf("%d", &g);
    if(g==0)
    goto t;
    if(g==999)
    break;
    
    printf("\nEnter The Marks Obtained In Drawing   : ");
    scanf("%d", &h);
    if(h==0)
    goto t;
    if(h==999)
    break;
    
    //Main Calculation Part
    total=a+b+c+d+e+f+g+h;
    per=(float)total/8;
    
    printf("\n\nTotal Marks Obtained By Student Is  : %d", total);
    printf("\nAnd Total Percentage Obtained  Is   : %.3f", per);
    
    printf("\n\n----------------------------------------------------------------------------------------");
    printf("\n-----------------------------------------------------------------------------------------\n\n");
    
  }
  
 return 0;
 
}
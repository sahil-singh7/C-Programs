/* Program to take 10 integer values and display them
by printing three numbers in a line seprated b commas */
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
  
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("Enter the fourth number: ");
    scanf("%d", &num4);
    printf("Enter the fifth number: ");
    scanf("%d", &num5);
    printf("Enter the sixth number: ");
    scanf("%d", &num6);
    printf("Enter the seventh number: ");
    scanf("%d", &num7);
    printf("Enter the eighth number: ");
    scanf("%d", &num8);
    printf("Enter the nineth number: ");
    scanf("%d", &num9);
    printf("Enter the tenth number: ");
    scanf("%d", &num10);
    
    printf("%d, %d, %d,\n%d, %d, %d,\n%d, %d, %d,\n%d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
    
    return 0;
} 
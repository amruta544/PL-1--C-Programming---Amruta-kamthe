/*
Program(8)→Write a C program to swap two numbers using a temporary variable.
Solution(2)→user define values
*/
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\n Enter first number:");
    scanf("%d",&a);
    printf("\n Enter second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping:\n");
    printf("\n first number=%d\n",a);
    printf("\n second number=%d\n",b);
    return 0;
}
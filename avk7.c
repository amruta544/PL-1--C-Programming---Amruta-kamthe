/*
Program(7)→Write a C program to swap two numbers using a temparary variable.
Solution(1)→Predefined values
*/
#include<stdio.h>
int main()
{
    int a,b,temp;
    a=111;
    b=222;
    printf("\n Before swapping:");
    printf("\na=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping:");
    printf("\na=%d,b=%d\n,a,b");
    return 0;
}
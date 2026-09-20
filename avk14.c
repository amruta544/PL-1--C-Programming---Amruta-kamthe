/*Program(14)→write a program to generate multiplication table of any number while loop,do while loop for loop

#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\n Multiplication Table of%d\n",num);
    while(i<=10)
        {
            printf("%dx%d=%d\n",num,i,num*i);
            i++;
        }
    return 0;
}
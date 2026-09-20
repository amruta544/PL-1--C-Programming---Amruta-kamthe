/*Program(16)→write a program to generate multiplication table of any number usingwhile loop,do while loop and for loop.

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\n Multiplication Table of 5d\n",num);
    for(i=1;i<=10;i++)
        {
            printf("%dx%d=%d\n",num,i,num*i);
                   }
                   return 0;
        }
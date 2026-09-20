/*Program(15)→write a program to generate the multiplication tabel of any number using while loop,do while loop and for loop.

#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter a number;");
    scanf("%d",&num);
    printf("\n Multiplication Table of %d\n",num);
    do
        {
            printf("%dx%d=%d\n",num,i,num*i);
            i++;
        }
        while(i<=10);
    return 0;
}
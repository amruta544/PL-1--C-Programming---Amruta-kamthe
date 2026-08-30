/*
Program(2)→Write a program to make use of basic input/output functions using different data types.
Solution(2)→user define values
*/
#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;
    printf("\n Enter Student Roll Number:");
    scanf("%d",&rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f",&per);
    printf("\n Enter student Grade:");
    scanf("% c",&grade);
    printf("\n----student Information----\n");
    printf("\n Roll Number is:%d",rollnum);
    printf("\n percentage is:%f",per);
    printf("\n Grade:%c",grade);
    return 0;
}
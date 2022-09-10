//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    x=x/10;
    printf("%d",x);
}
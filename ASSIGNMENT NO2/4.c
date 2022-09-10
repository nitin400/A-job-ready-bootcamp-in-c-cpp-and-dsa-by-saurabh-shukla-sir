// 4. Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d,%d",x,y);
}
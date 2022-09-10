// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter the number");
    scanf("%d %d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("%d,%d",x,y);
}
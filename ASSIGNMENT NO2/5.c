// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,m,sum=0;
    printf("enter the three digit number");
    scanf("%d",&x);
    while(x)
    {
       
       m=x%10;
       sum=sum+m;
       x=x/10;

    }
    printf("%d",sum);
    
    
}
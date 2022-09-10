// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int count=0,n;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
        n=n%10;
        printf("%d\n",n);


        
    }
    

}
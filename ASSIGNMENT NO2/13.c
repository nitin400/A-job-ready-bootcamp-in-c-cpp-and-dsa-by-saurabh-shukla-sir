/* 13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.*/

#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a three digit number");
    scanf("%d",&x);
    y=(((x%10)*100)+(x/10));
    printf("%d",y);
    
}
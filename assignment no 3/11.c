// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.

#include<stdio.h>
int main()
{
    int mar,hin,eng,math,sci,soci;
    printf("Enter the marks of marathi subject\n");
    scanf("%d",&mar);
    printf("Enter the marks of hindi   subject\n");
    scanf("%d",&hin);
    printf("Enter the marks of english subject\n");
    scanf("%d",&eng);
    printf("Enter the marks of maths subject\n");
    scanf("%d",&math);
    printf("Enter the marks of science subject\n");
    scanf("%d",&sci);
    printf("Enter the marks of social science subject\n");
    scanf("%d",&soci);

    if(mar>=35 && hin>=35 && eng>=35 && math>=35 && sci >=35 && soci>=35)
    {
        printf("congratulation you are passed ");
    }
    else
    {
        printf("Better luck next time ");
    }
}
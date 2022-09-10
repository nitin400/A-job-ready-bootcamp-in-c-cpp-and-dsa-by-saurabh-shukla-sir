// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character


#include<stdio.h>
int main()
{
    char c;
    printf("enter the character or digit or special symbol");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("It's a UPPERCASE CHARACTER");
    }
    else if(c>='a' && c<='z')
    {
        printf("LOWERCASE");
    }
    else if(c>=0 && c<=9)
    {
        printf("DIGIT");

    }
    else if(0<c>47 || 58<c>64 || 91<c>96 ||123<c>127 )
    {
        printf("SPECIAL SYMBOL");
    }
    else
    {
        printf("INVALID ERROR 502");
    }
}
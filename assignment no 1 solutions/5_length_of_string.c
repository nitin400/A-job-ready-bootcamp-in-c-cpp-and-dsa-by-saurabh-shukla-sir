#include<stdio.h>
int main()
{
    int len=0;
   char  str[100]="Nitin is very beautiful boy";
    printf("%s %n",str,&len);
    printf("%d",len);
}
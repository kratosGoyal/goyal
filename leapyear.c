#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("ENTER YOUR VALUE");
    scanf("%d",&a);
    if(a%400==0||a%4==0&a%100!=0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}

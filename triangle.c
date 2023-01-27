#include<stdio.h>
main()
{
    int a,b,c,sum;
    printf("Enter first angle of triangle");
    scanf("%d",&a);
    printf("Enter second angle of triangle");
    scanf("%d",&b);
    printf("Enter third angle of triangle");
    scanf("%d",&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }
}

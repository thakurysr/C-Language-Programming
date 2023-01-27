#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter first side of triangle");
    scanf("%d",&a);
    printf("enter second side of triangle");
    scanf("%d",&b);
    printf("enter third side of triangle");
    scanf("%d",&c);
    if(a>b&&a>c&&(b+c)>a)
    {
        printf("triangle is valid");
    }
    else if(b>a&&b>c&&(a+c)>b)
    {
        printf("triangle is valid");
    }
    else if(c>b&&c>a&&(b+a)>c)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
}


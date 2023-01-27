#include<stdio.h>
main()
{
    int y;
    printf("Enter year");
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
}

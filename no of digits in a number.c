#include<stdio.h>
main()
{
    int num,count=0;
    printf("Enter any number");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    printf("Number of digits in number = %d ",count);
}

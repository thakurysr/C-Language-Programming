#include<stdio.h>
main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if(num<0)
    {
        num=num*-1;
    }
    printf("\n%d",num);

}

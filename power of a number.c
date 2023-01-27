#include<stdio.h>
main()
{
    int num,exp,result=1;
    printf("Enter any number");
    scanf("%d",&num);
    printf("Enter exponentioal");
    scanf("%d",&exp);
    while(exp>0)
    {
        result*=num;
        --exp;
    }
    printf("Power of a number is %d ",result);
}

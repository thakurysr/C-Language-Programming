#include<stdio.h>
main()
{
    long long int num,result=0,rem;
    printf("Enter any number");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        result=(result*10)+rem;
        num=num/10;
    }
    printf("Reversed number is %d ",result);
}

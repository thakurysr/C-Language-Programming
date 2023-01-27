#include<stdio.h>
main()
{
    int a,b,c,d,e,num,f;
    printf("enter 5 digit number");
    scanf("%d",&num);
    a=num%10;
    a=a*10000;
    b=(num/10)%10;
    b=b*1000;
    c=(num/100)%10;
    c=c*100;
    d=(num/1000)%10;
    d=d*10;
    e=(num/10000)%10;
    f=a+b+c+d+e;
    if(f==num)
    {
        printf("reverse number=orignal number",f);

    }
    else
    {
        printf("reverse number is not=orignal number",f);
    }
}

#include<stdio.h>
main()
{
    int a,b,c,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            c=i;
    }
    printf("GCD of %d and %d is %d ",a,b,c);

}

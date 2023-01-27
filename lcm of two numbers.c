#include<stdio.h>
main()
{
    int n1,n2,n,result=1;
    printf("Enter two positive numbers");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        n=n1;
    }
    else
    {
        n=n2;
    }
    for(int i=2;i<=n;i++)
    {
        if(n%n1==0&&n%n2==0)
        {
            result=result*i;
        }
    }
    result=result*n1*n2;
    printf("LCM of numbers is %d",result);

}

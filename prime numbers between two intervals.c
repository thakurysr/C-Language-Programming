#include<stdio.h>
main()
{
    int n1,n2,i,j,count;
    printf("Enter first number ");
    scanf("%d",&n1);
    printf("Enter Second number ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
            printf("%d ",i);
    }
}

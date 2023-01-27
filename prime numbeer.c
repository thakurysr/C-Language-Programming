#include<stdio.h>
main()
{
    int n,i,count=0;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count>=1)
        {
            printf("not a prime number");
        }
        else if(count==0)
        {
            printf("It is a prime number");
        }
}

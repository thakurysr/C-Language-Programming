#include<stdio.h>
main()
{
    int num,i,n1=0,n2=1,nxt;
    printf("Enter the number of terms");
    scanf("%d",&num);
    printf("Fibonacci Sequence:");

    for(i=1;i<+num;i++)
    {
        printf("%d,",n1);
        nxt=n1+n2;
        n1=n2;
        n2=nxt;
    }
}

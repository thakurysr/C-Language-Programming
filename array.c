#include<stdio.h>
main()
{
    int a[5];
    printf("Enter any five values");
    for(int i=1;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<5;i++)
    {
        printf("\n%d\n",a[i]);
    }
}

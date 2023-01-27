#include<stdio.h>
main()
{
    int a[6]={2,3,4,5,6,9};
    int even=0,odd=0;
    for(int i=0;i<=5;i++)
    {
        if(i%2==0)
        {
            even+=a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
    printf("sum of even index is %d\n",even);
    printf("sum of odd index is %d",odd);
}

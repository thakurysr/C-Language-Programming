#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("Enter elements in array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements in second array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
     }
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             printf(" %d",c[i][j]);
         }
         printf("\n");
     }
}

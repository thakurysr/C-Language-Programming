#include<stdio.h>
main()
{
    int a[3][3][3],i,j,k;
    printf("Enter elements in 3D array");
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

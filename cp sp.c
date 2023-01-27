#include<stdio.h>
main()
{
    int cp,sp,tl,tp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(sp>cp)
    {
        tp=sp-cp;
        printf("profit is %d",tp);
    }
    else if(sp<cp)
    {
        tl=cp-sp;
        printf("loss is %d",tl);
    }
    else
    {
        printf("neither profit nor loss");
    }
}

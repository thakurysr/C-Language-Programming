#include<stdio.h>
main()
{
    float bs,hra=0.0f,da=0.0f,gs;
    printf("Enter basic salary");
    scanf("%f",&bs);
    if(bs>=3000)
    {
        hra=bs*0.2f;
        da=bs*0.4f;

       gs=hra+da+bs;
       printf("\nGross salary=%f",gs);
    }
    else
    {
        hra=bs*0.1f;
        da=bs*0.05f;
        gs=bs+hra+da;
        printf("\nGross salary=%f",gs);
    }
}



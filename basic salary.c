#include<stdio.h>

float main()
{
    float gs,bs,hra,da;
    printf("Enter basic salary ");
    scanf("%f",&bs);
    hra=bs*0.4f;
    da=bs*0.2f;
    gs=bs+hra+da;
    printf("HRA=%f",hra);
    printf("DA=%f",da);
    printf("gross salary is %f",gs);
}

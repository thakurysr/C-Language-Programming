#include<stdio.h>
main()
{
    float h,cc,ts;
    printf("Enter hardness of steel");
    scanf("%f",&h);
    printf("Enter carbon content of steel");
    scanf("%f",&cc);
    printf("Enter tensile strength of steel");
    scanf("%f",&ts);
    if(h>50&&cc<0.7f&&ts>5600)
    {
        printf("grade is 10");
    }
    else if(h>50&&cc<0.7f)
    {
        printf("grade is 9");
    }
    else if(cc<0.7f&&ts>5600)
    {
        printf("grade is 8");
    }
    else if(h>50&&ts>5600)
    {
        printf("grade is 7");
    }
    else if(h>50||cc<0.7f||ts>5600)
    {
        printf("grade is 6");
    }
    else
    {
        printf("grade is 5");
    }
}

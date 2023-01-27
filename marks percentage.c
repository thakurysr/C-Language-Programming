#include<stdio.h>
main()
{
    int a,b,c,d,e,sum;
    float per;
    printf("Enter marks of english");
    scanf("%d",&a);
    printf("Enter marks of hindi");
    scanf("%d",&b);
    printf("Enter marks of physics");
    scanf("%d",&c);
    printf("Enter marks of chemistry");
    scanf("%d",&d);
    printf("Enter marks of maths");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    per=sum*100.0f/500;
    if(per>=60.0f)
    {
        printf("\nFirst division");
    }
    else if(per<60&&per>=50)
    {
        printf("\nSecond division");
    }
    else if(per<50&&per>=30)
    {
        printf("\nThird division");
    }
    else
    {
        printf("\nfail");
    }
}

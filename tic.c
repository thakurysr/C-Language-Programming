#include<stdio.h>
#include<math.h>
main()
{
   float a,b,c,d,r1,r2;
   printf("Enter the coefficients a,b and c");
   scanf("%f%f%f",&a,&b,&c);
   d=(b*b) -(4*a*c);
   if(d>0)
   {
       r1=(-b+sqrt(d));
       r2=(-b-sqrt(d));
       printf(" root 1 =%f and root 2 =%f",r1,r2);
   }
    if(d==0)
   {
       r1=r2;
       printf("root1=root2=%f",r1);
   }
   if(d<0)
   {
       printf("not real roots");
   }


}

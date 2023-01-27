#include<stdio.h>
main()
{
   float p,r,t,si;
   printf("Enter principal \nRate \nTime");
   scanf("%f%f%f",&p,&r,&t);
   si=(p*r*t)/100;
   printf("Simple interest is %f",si);
}

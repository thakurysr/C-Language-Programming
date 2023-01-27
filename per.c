#include<stdio.h>

int main()

{
   float a,b,c,d,e,sum,per;

printf("Enter marks of subject english");
scanf("%f",&a);

printf("Enter marks of subject maths");
scanf("%f",&b);

printf("Enter marks of subject physics");
scanf("%f",&c);

printf("Enter marks of subject chemistry");
scanf("%f",&d);

printf("Enter marks of subject computer");
scanf("%f",&e);

sum=a+b+c+d+e;

printf("Sum of marks of 5 subjects is %f",sum);

per=sum/5.0;
printf("percentage of student is %f",per);
}

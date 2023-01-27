#include<stdio.h>

int main()
{
    int l,b,peri,ar;

printf("Enter the lenth of rectangle");
scanf("%d",&l);

printf("Enter the breadth of rectangle");
scanf("%d",&b);

peri=2*(l+b);
ar= l*b;

printf("perimeter of rectangle is %d",peri);

printf("area of rectangle is %d",ar);
}

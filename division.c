#include<stdio.h>

int main()
{
    int num,lsd,fsd,div;
printf("Enter a 5 digit number");
scanf("%d",&num);
lsd=num%10;
fsd=(num/10000)%10;
div=fsd/lsd;
printf("Division of first and last digit of number is %d",div);
}

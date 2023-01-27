#include<stdio.h>

int main()
{
    int num,tld;
    printf("Enter a number");
    scanf("%d",&num);
    tld=(num/100)%10;
    printf("Third last digit is %d",tld);
}

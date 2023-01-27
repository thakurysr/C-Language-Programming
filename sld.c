#include<stdio.h>

int main()
{
	int num,sld;
	printf("Enter a number");
	scanf("%d",&num);
	sld=(num/10)%10;
	printf("second last digit is %d",sld);	
}

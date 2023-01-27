#include <stdio.h>
int main()
 {
    int num,num1, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d",&num);
    num1=num;
    while (num>0)
    {
        remainder = num% 10;

       result += remainder * remainder * remainder;
       num=num/10;
    }

    if (result == num1)
        printf("number is an Armstrong number.");
    else
        printf("number is not an Armstrong number.");

}

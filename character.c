#include<stdio.h>
main()
{
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
        printf("Capital letter");
    }
    else if(c>=97&&c<=122)
    {
        printf("A small case letter");
    }
    else if(c>=48&&c<=57)
    {
        printf("Numeric digit");
    }
    else if(c>=0&&c<=47&&c>=58&&c<=64&&c>=91&&c<=96&&c>=123&&c<=127)
    {
        printf("A special symbol");
    }

}

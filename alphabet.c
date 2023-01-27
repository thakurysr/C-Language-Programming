#include<stdio.h>
main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90&&ch>=97&&ch<=122)
    {
        printf("Character is alphabet");
    }
    else
    {
        printf("Character is not an alphabet");
    }
}

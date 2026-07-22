#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character:- ");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Uppercase");
    }

    return 0;
}
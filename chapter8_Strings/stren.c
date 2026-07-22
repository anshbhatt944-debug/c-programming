#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = "Ansh";
    char st1[] = "Meera";
    printf("The length of the string is %d\n", strlen(st));
    char target[30];
    char target1[30];
    strcpy(target, st);
    strcpy(target1, st1);
    printf("%s %s", st , target);
    printf("%s %s", st , target1);



    return 0;
}
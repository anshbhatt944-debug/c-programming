#include <stdio.h>
int fib(int);
int fib(int a)
{
    if (a == 1)
    {
        return 0;
    }
    if (a == 2)
    {
        return 1;
    }
    else
    {
        return fib(a - 2) + fib(a - 1);
    }
}

int main()
{
    printf("%d", fib(11));
    //printf("%d\n", fib(22));
    return 0;
}
#include <stdio.h>
int sum(int*, int*);

int sum(int* x, int* y)
{
    *x=6;
    return *x + *y;
}

int main()
{
    int a=1, b=6;
    printf("The sum of 1 and 6 is %d\n", sum(&a, &b));
    printf("The value of x is %d\n", a);

    return 0;
}
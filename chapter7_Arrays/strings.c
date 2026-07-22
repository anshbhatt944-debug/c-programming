#include <stdio.h>
int square(int);
int square(int x)
{
    return x * x;
}
int pow1(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}
int fact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x;
    }
}
int fib(int);
int fib(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1 || x == 2)
    {
        return 1;
    }
    else
    {
        return fib(x - 2) + fib(x - 1);
    }
}
void leap_year_check(int x)
{
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("NOT a Leap Year");
    }
}
int main()
{
    printf("%d\n", pow1(25, 2));
    printf("%d\n", square(25));
    printf("%d\n", fact(5));
    printf("%d\n", fib(22));
    leap_year_check(2028);

    return 0;
}

#include <stdio.h>
// function prototype
int sum(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);

// Function defination
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x+y;
}
int sub(int x, int y)
{
    printf("The difference is %d\n", x - y);
    return x-y;

}

int mult(int x, int y)
{
    printf("The product is %d\n", x * y);
    return x*y;
}
int div(int x, int y)
{
    printf("The division is %d\n", x / y);
    return x/y;
}

int main()
{
    int a = 10;
    int b = 2;

     
    //function call
   int c= sum(a, b); 
    sub(a, b);
    mult(a, b);
    div(a, b);
    sum(24,76);
    printf("%d\n",c);

    return 0;
}
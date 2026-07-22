#include <stdio.h>
// function prototype
int sum(int, int);
int change(int a);


// function defination
int sum(int x, int y){
    return x+y;
}
int change(int a){
    a=77;
    return 0;
}

int main()
{
    int b = 22;
    change(b);
    //function call
   printf("b is %d", b);
}
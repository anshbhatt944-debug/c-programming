#include <stdio.h>
int fact(int);
int fact(int x){
    if(x==0){
        return 1;
    }if (x==1){
        return 1;
    }
    return fact(x-1)*x;
}

int main()
{
    int a = 6;
    printf("The term is %d", fact(a));

    return 0;
}
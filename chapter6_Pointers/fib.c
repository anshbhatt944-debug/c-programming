#include<stdio.h>
int fib(int);
int fib(int x){
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    return fib(x-2)+fib(x-1);
}    

int main(){
    int a=10;
    printf("The term is %d", fib(a));



    return 0;
}
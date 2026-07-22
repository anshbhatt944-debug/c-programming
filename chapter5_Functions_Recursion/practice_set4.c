#include<stdio.h>
int fib(int);
int fib(int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }

    return fib(x-1) + fib(x-2); 

}
int main(){
    int n;
    printf("Enter nth term:- ");
    scanf("%d", &n);
    int z = fib(n);
    printf("The term is:- %d", z);





    return 0;
}
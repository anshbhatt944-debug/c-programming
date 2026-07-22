#include<stdio.h>
int fib(int);
int fib(int x){
    if(x==0){
        return 0;
    }if(x==1 || x==2){
        return 1;
    }else{
        return fib(x-2) + fib(x-1);
    }

}


int main(){
    int n = 22;
    int a=0,b=1,c;
    printf("%d\n", fib(22));
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d", c);


    return 0;
}


/*
printing fib numbers by both functions and loops
*/
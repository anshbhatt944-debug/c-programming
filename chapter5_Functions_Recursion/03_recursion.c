#include<stdio.h>
int fact(int);
int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    return fact(x-1)*x;
     
}

int main(){
    int a;
    printf("Enter a number:- ");
    scanf("%d", &a);
    printf("The factorial of %d is %x", a, fact(a));




    return 0;
}
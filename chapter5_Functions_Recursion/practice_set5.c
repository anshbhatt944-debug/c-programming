#include<stdio.h>
int sum(int);
int sum(int x){
if(x==1){
    return 1;
}


return sum(x-1) + x;

}
int main(){
    int n;
    printf("Enter n:- ");
    scanf("%d", &n);
    int sum1 = sum(n);
    printf("The some of first %d natural numbers is %d", n, sum1);




    return 0;
}
#include<stdio.h>
float conv(float);
float conv(float x){
    return (x*1.8) + 32;
}
int main(){
    float a;
    printf("Enter the temp in celcsius):- ");
    scanf("%f", &a);
    float F = conv(a);
    printf("%.2f", F);



    return 0;
}
#include<stdio.h>
float FOA(float);
float FOA(float x){
    return 9.8*x;
}
int main(){
    float m;
    printf("Enter mass of body:- ");
    scanf("%f", &m);
    float F=FOA(m);
    printf("The force of attraction on the body will be %.2fN",F);





    return 0;
}
#include<stdio.h>
float avg(float, float, float);

float avg(float x, float y, float z){
    return (x+y+z)/3;
}



int main(){
    float a,b,c;
    printf("Enter a:- ");
    scanf("%f", &a);
    printf("Enter b:- ");
    scanf("%f", &b);
    printf("Enter c:- ");
    scanf("%f", &c);
     float avg1 = avg(a,b,c);
     printf("%.2f", avg1);




    return 0;
}
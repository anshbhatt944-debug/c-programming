#include<stdio.h>
int main(){
    float income;
    float tax;
    printf("Enter income(in L):- ");
    scanf("%f", &income);
    
    if(income>2.5 && income<=5.0){
        printf("your tax percentage is 5\n");
        tax = income * 0.05;
        printf("Total payable tax will be %f (in L)", tax);
    } else if(income>5.0 && income<=10.0){
        printf("your tax percentage is 20\n");
        tax = income * 0.20;
        printf("Total payable tax will be %f (in L)", tax);
    }else if(income>10.0){
        printf("your tax percentage is 30\n");
        tax = income * 0.30;
        printf("Total payable tax will be %f (in L)", tax);
    }else {
        printf("There is no tax on your income brokey");
    }






    return 0;
}

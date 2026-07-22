#include<stdio.h>
int main(){
    int number1,number2,number3,number4;
    printf("Enter a number1:- ");
    scanf("%d", &number1);
    printf("Enter a number2:- ");
    scanf("%d", &number2);
    printf("Enter a number3:- ");
    scanf("%d", &number3);
    printf("Enter a number4:- ");
    scanf("%d", &number4);
    if(number1 >number2 && number1>number3 && number1 > number4){
        printf("The greatest of the four is %d", number1);
    }else if(number2 >number3 && number2>number4 && number2 > number1){
        printf("The greatest of the four is %d", number2);
    }else if(number3 >number2 && number3>number1 && number3 > number4){
        printf("the greatest of the four is %d", number3);
    }else {
        printf("The greatest of the four is %d", number4);
    }








    return 0;
}
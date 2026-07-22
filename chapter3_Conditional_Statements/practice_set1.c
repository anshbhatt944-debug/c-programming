#include<stdio.h>
int main(){
    int marks1, marks2, marks3; 
    float TotalPercentage;
    
    printf("Enter marks1 ");
    scanf("%d", &marks1);
    printf("Enter marks2 ");
    scanf("%d", &marks2);
    printf("Enter marks3 ");
    scanf("%d", &marks3);
    TotalPercentage =(float)(marks1 + marks2 + marks3)/3;
    if(marks1>33 && marks2>33 && marks3>33 && TotalPercentage>40){
        printf("passed in each sub and overall also congrats");
        printf("TotalPercentage is %f", TotalPercentage);
    }else{
        printf("FAILED");
        printf("TotalPercentage is %f", TotalPercentage);
        
    }

    







    return 0;
}
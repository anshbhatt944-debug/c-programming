#include<stdio.h>
int main(){
    float price[3];
    float final_cost[3];
    printf("Enter price of item 1:- ");
    scanf("%f", &price[0]);
    printf("\nEnter price of item 2:- ");
    scanf("%f", &price[1]);
    printf("\nEnter price of item 3:- ");
    scanf("%f", &price[2]);
    for(int i=0;i<3;i++){
        final_cost[i] = price[i] + (0.18 * price[i]);
    }
    printf("Final Price of item 1 = %f\n", final_cost[0]);
    printf("Final Price of item 2 = %f\n", final_cost[1]);
    printf("Final Price of item 3 = %f\n", final_cost[2]);


    




    return 0;
}
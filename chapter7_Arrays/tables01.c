#include<stdio.h>
int main(){
    int arr_table[3][10];
    int mult[3]={2,5,8};
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            arr_table[i][j]= mult[i]* (j+1);
            //printf("%d X %d = %d\n", mult[i], (j+1), arr_table[i][j]);
        }
        //printf("----END----\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d X %d = %d\n", mult[i], (j+1), arr_table[i][j]);
        }
        printf("----END----\n");
    }
    return 0;
}
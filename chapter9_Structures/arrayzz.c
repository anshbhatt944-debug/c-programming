#include<stdio.h>
int main(){
    int arr[3][10];
    int mult[]={2,7,12};
    //printf("Which table:- ");
    //scanf("%d", &n);
    for(int i = 0;i<3;i++){
        for(int j=0;j<10;j++){
        arr[i][j]= mult[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("The value of arr[i][i] is %d\n", arr[i][j]);
        }
        printf("------END-------\n");

    }

     return 0;
}
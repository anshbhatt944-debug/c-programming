#include<stdio.h>
int main(){
    int arr[3][10];
    int mult[3] = {2,5,7};
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            arr[i][j] = (j+1) * mult[i];
            printf("%d X %d = %d\n", mult[i], (j+1),arr[i][j]);  
        }
        printf("------END-----\n");
    }


    return 0;
}
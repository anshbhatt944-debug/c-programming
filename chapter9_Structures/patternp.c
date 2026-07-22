#include<stdio.h>
int main(){
    int n=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<2*i+1;j++){
        printf("*");
        }
        printf("\n");

    }


    return 0;
}


/*
    0    1
    2    3
    3    5    
          2n-1   

*/
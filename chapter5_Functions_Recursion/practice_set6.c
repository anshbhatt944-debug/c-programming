#include<stdio.h>
int pattern(int);
// int pattern(int x){
//     int b;
//     for(int i=1;i<=x;i++){
//       b= printf("*\n");

//     }
//     return b;
// }
int pattern(int n){
for (int i=0;i<n;i++){
        for(int j=0;j<(2*i+1);j++){
            printf("*");
        }
        printf("\n");
        
    }
    
}

int main(){
    int n=5;
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<(2*i+1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }
    pattern(n);
    






    return 0;
}
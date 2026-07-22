#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}


/*

i=0         1
i=1         2
i=3         3
i=4         4 

*/

/*

i=0         j=5
i=2         j=4
*/
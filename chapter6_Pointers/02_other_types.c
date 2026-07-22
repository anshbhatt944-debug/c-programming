#include<stdio.h>
int main(){
    char i='A';
    char* j = &i;  // j is a pointer pointing to i
    float k = 69.420;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);





    return 0;
}
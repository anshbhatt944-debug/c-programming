#include <stdio.h>
int table(int);
int table(int x){
    for(int i=0;i<10;i++){
        int table = x * (i+1);
        printf("%d X %d = %d", x, i+1, table);
        printf("\n");
    }
    return 0;
}

int main()
{
    int a=5;
    table(a);
    printf("\n");


    int arr[3][10];
    int mult[] = {12, 15, 17};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mult[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            printf("%d X %d = %d", mult[i], (j+1), arr[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("----END----\n");
        printf("\n");
    }
    return 0;
    
}

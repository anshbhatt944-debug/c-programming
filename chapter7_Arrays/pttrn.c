#include <stdio.h>
int main() {
    int n=5;
    //printf("Enter the number of rows: ");
    //scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

// 0   9  
// 1   7
// 3   5
// 4   3


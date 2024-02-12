#include<stdio.h>

int main() {
    int i, j, n = 10;
    // Upper part of the diamond
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    for (i = 1; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf(" ");
        }
        for (j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

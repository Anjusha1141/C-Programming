#include <stdio.h>

int main() {
    int n, i, j, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }

    return 0;
}

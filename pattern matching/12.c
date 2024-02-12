#include <stdio.h>

int main() {
    int n, i, j, coef;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        coef = 1;
        for (j = 0; j <= i; j++) {
            if (j > 0)
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}

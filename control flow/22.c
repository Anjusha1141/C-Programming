#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, sum = 0, temp;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("Sum of Fibonacci numbers at even indexes up to %d terms: %d\n", n, sum);

    return 0;
}

#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n * n; 

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Neon number.\n", n);
    else
        printf("%d is not a Neon number.\n", n);

    return 0;
}

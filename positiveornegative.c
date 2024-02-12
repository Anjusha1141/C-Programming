#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num == 0) {
        printf("You entered zero, which is neither positive nor negative.\n");
    } else {
        printf("%d is negative.\n", num);
    }

    return 0;
}

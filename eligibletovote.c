#include <stdio.h>

int main() {
    int age;

    // Input the age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility to vote
    if (age >= 18) {
        printf("You are eligible to cast your vote.\n");
    } else {
        printf("You are not eligible to cast your vote yet.\n");
    }

    return 0;
}

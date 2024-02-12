#include <stdio.h>

int main() {
    int mathMarks, physicsMarks, chemistryMarks;

    // Input marks in Maths, Physics, and Chemistry
    printf("Enter marks in Maths: ");
    scanf("%d", &mathMarks);
    printf("Enter marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    // Check eligibility based on criteria
    if (mathMarks >= 65 && physicsMarks >= 55 && chemistryMarks >= 50 && mathMarks + physicsMarks + chemistryMarks >= 190) {
        printf("Congratulations! You are eligible for admission to the professional course.\n");
    } else {
        printf("You are not eligible for admission to the professional course.\n");
    }

    return 0;
}

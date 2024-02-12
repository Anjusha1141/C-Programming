#include <stdio.h>

int main() {
    float height;

    // Input the height
    printf("Enter the height of the person (in meters): ");
    scanf("%f", &height);

    // Categorize the person based on height
    if (height < 1.5) {
        printf("The person is categorized as short.\n");
    } else if (height >= 1.5 && height < 1.8) {
        printf("The person is categorized as average height.\n");
    } else {
        printf("The person is categorized as tall.\n");
    }

    return 0;
}

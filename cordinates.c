#include <stdio.h>

int main() {
    int x, y;

    // Input the coordinates
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    // Determine the quadrant
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) is in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) is in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) is in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) is in the fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else if (x != 0 && y == 0) {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    }

    return 0;
}

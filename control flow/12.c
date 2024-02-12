#include <stdio.h>

int findLCM(int x, int y) {
    int max = (x > y) ? x : y;

    while (1) {
        if (max % x == 0 && max % y == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, findLCM(a, b));

    return 0;
}

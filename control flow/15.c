#include<stdio.h>
#include<math.h>

int main() {
    int lower, upper, num, temp, rem, sum, digits;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);

    for (num = lower; num <= upper; num++) {
        temp = num;
        sum = 0;
        digits = 0;

        
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        
        temp = num;

        
        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        
        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}

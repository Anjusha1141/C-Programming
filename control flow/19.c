#include <stdio.h>

int main() {
    int low, high, n, i, isPrime;

    // Input lower and upper bounds of the interval
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    
    for (n = low; n <= high; ++n) {
        isPrime = 1;

        
        if (n <= 1)
            isPrime = 0;
        else {
            
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        
        if (isPrime)
            printf("%d ", n);
    }

    return 0;
}

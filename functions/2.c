#include <stdio.h>

int isPrime(int lower, int upper) {
    
    
    for (int i=lower; i  <= upper; i++) {
        int flag=0;
        for(int j=2;j<=i/2;j++){
            if (i% j == 0) 
                flag=1;
                break;
        }
        if (flag == 0 && i > 1) { 
            printf("%d ", i);
        }

        
    }
    return 0;
}

int main() {
    int lower,upper;
    printf("Enter the lower and upper imit:");
    scanf("%d %d",&lower,&upper);
    isPrime(lower,upper);
    return 0;
}

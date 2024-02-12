#include <stdio.h>

int main() {
    char operator;
    char ch;
    double num1, num2, result;

    
    do{
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break; 
    }
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    printf("\nDo you want to continue(y/n)?");
    scanf(" %c",&ch);
    }while(ch=='y');

    return 0;
}

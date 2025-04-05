#include <stdio.h>

void calculator() {
    int choice;
    float num1, num2;
    
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch (choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid input\n");
    }
}

int main() {
    calculator();
    return 0;
}
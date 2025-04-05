#include <stdio.h>

int main() {
    // Declare two variables
    int num1, num2;

    // Prompt the user for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display the original values
    printf("Original values:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Increment and Decrement for num1
    printf("\nIncrement and Decrement for the first number:\n");
    printf("Pre-increment: %d\n", ++num1); // Increment before use
    printf("Post-increment: %d\n", num1++); // Increment after use
    printf("Value after post-increment: %d\n", num1); // Show updated value
    printf("Pre-decrement: %d\n", --num1); // Decrement before use
    printf("Post-decrement: %d\n", num1--); // Decrement after use
    printf("Value after post-decrement: %d\n", num1); // Show updated value

    // Reset num1 for demonstration purposes
    num1 += 4; // Reset num1 to its original value for clarity in output

    // Increment and Decrement for num2
    printf("\nIncrement and Decrement for the second number:\n");
    printf("Pre-increment: %d\n", ++num2); // Increment before use
    printf("Post-increment: %d\n", num2++); // Increment after use
    printf("Value after post-increment: %d\n", num2); // Show updated value
    printf("Pre-decrement: %d\n", --num2); // Decrement before use
    printf("Post-decrement: %d\n", num2--); // Decrement after use
    printf("Value after post-decrement: %d\n", num2); // Show updated value

    return 0;
}
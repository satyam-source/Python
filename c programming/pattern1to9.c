#include <stdio.h>

void print_pattern() {
    int count = 1; // Initialize a counter for numbers

    // Loop for the number of rows
    for (int i = 1; i <= 4; i++) { // 4 rows
        // Loop for the number of elements in each row
        for (int j = 1; j <= i; j++) { // i elements in the i-th row
            printf("%d ", count++); // Print the current count and increment it
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    print_pattern();
    return 0;
}
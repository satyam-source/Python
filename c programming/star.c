#include <stdio.h>

int main() {
    int rows = 4; // Number of rows
    int cols = 4; // Number of columns

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Loop through each column
        for (int j = 0; j < cols; j++) {
            printf("*"); // Print an asterisk
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
#include <stdio.h>
int main() {
    int rows, i, j;

    // Number of rows for the triangle
    rows = 5;

    // Loop for each row
    for(i = 1; i <= rows; i++) {
        // Loop for printing spaces
        for(j = rows; j > i; j--) {
            printf(" ");
        }
        // Loop for printing asterisks
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
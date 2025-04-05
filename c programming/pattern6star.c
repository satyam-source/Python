#include <stdio.h>

void print_pattern() {
    // Pattern a
    printf("Pattern a:\n");
    for (int i = 0; i < 6; i++) { // Loop for 6 rows
        for (int j = 0; j < 6; j++) { // Loop for 6 columns
            printf("* "); // Print an asterisk followed by a space
        }
        printf("\n"); // Move to the next line after each row8
    }
}

int main() {
    print_pattern();
    return 0;
}
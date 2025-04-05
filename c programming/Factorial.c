#include <stdio.h>

void factorial() {
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    
    printf("Factorial of %d is %d\n", num, fact);
}

int main() {
    factorial();
    return 0;
}
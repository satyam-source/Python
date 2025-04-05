#include <stdio.h>

void sum_and_product_of_digits() {
    int num, sum = 0, product = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
}

int main() {
    sum_and_product_of_digits();
    return 0;
}
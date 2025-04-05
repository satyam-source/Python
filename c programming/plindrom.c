#include <stdio.h>

void check_palindrome() {
    int num, reversed_num = 0, original_num, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original_num = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    
    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }
}

int main() {
    check_palindrome();
    return 0;
}
#include <stdio.h>

void pointer_example() {
    int num = 10;
    int *ptr = &num;  // Pointer to num
    
    printf("Value of num: %d\n", num);
    printf("Value using pointer: %d\n", *ptr);
    
    *ptr = 20;  // Changing the value using pointer
    printf("New value of num: %d\n", num);
}

int main() {
    pointer_example();
    return 0;
}
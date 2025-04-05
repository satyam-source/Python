#include <stdio.h>

void check_leap_year() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

int main() {
    check_leap_year();
    return 0;
}
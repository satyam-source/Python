#include <stdio.h>

void sum_and_average() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    float sum = 0.0;
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    float average = sum / n;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
}

int main() {
    sum_and_average();
    return 0;
}
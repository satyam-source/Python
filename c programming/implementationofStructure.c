#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void student_example() {
    struct Student student1;
    
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student age: ");
    scanf("%d", &student1.age);
    
    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
}

int main() {
    student_example();
    return 0;
}
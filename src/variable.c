#include <stdio.h>

int main() {
    int age = 24;
    float height = 6.2f;
    char grade = 'A';
    char name[] = "ruby";

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Hello %s \n", name);
    
    return 0;
}
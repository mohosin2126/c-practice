// Variables
#include<stdio.h>

int main() {
    const int score = 95;
    const double pi = 3.14159265359;
    const float radius = 7.5f;
    const char grade = 'A';
    const long population = 7800000000;

    printf("\n--- Variables ---\n");
    printf("Integer: %d\n", score);
    printf("Double: %.10lf\n", pi);
    printf("Float: %.2f\n", radius);
    printf("Character: %c\n", grade);
    printf("Long Integer: %ld\n", population);
    return 0;
}
#include <stdio.h>

// First Print
void printHello() {
    printf("Hello there, this is me\n");
}

// Variables
void printVariables() {
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
}

// Input and Output using gets and puts
void inputOutput() {
    char name[50];
    printf("\n--- Input/Output ---\n");
    printf("Enter your name here: ");
    gets(name);  // Note: Using gets is not recommended due to safety concerns; consider using fgets instead.
    printf("Hello\n");
    puts(name);
}

// Size of Integer
void printSizeOfInteger() {
    int i;
    printf("\n--- Size of Integer ---\n");
    printf("Size of the integer: %d bytes\n", (int)sizeof(i));
}

// Convert ASCII value
void asciiConversion() {
    int num;
    printf("\n--- ASCII Conversion ---\n");
    printf("Enter your number here: ");
    scanf("%d", &num);
    printf("The ASCII value is: %c\n", num);
}

// Celsius to Fahrenheit
void celsiusToFahrenheit() {
    float celsius = 20.5;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("\n--- Celsius to Fahrenheit ---\n");
    printf("Celsius: %.2f => Fahrenheit: %.2f\n", celsius, fahrenheit);
}

int main() {
    printHello();
    printVariables();
    inputOutput();
    printSizeOfInteger();
    asciiConversion();
    celsiusToFahrenheit();

    return 0;
}

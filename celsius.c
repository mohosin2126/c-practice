// Celsius to Fahrenheit
#include <stdio.h>
int main() {
    float celsius = 20.5;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("\n--- Celsius to Fahrenheit ---\n");
    printf("Celsius: %.2f => Fahrenheit: %.2f\n", celsius, fahrenheit);
    return 0;
}

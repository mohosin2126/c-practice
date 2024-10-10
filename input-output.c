// Input and Output using gets and puts
#include <stdio.h>
int main() {
    char name[50];
    printf("\n--- Input/Output ---\n");
    printf("Enter your name here: ");
    gets(name); 
    printf("Hello\n");
    puts(name);
    return 0;
}
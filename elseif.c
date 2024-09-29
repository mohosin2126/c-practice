// #include <stdio.h>

// int main() {
//     int num;
//     printf("Please enter a number you want: ");

//     scanf("%d", &num);

//     if (num > 50) {
//         printf("You can buy the product.\n");
//     } else {
//         printf("Sorry, you will not get the product.\n");
//     }

//     return 0;
// }


// Largest Number Finder

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else {
        printf("%d is the largest number.\n", num2);
    }

    return 0;
}
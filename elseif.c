#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number you want: ");

    scanf("%d", &num);

    if (num > 50) {
        printf("You can buy the product.\n");
    } else {
        printf("Sorry, you will not get the product.\n");
    }

    return 0;
}

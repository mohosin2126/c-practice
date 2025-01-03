#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 100;
    int b = 200;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
#include <stdio.h>
// for no return need to use void function
void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d\n", sum);
}

void alphaCheck(char c)
{
    if ('a' <= c && c <= 'z')
    {
        printf("LOWER\n");
    }
    else
    {
        printf("UPPERCASE\n");
    }
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    add(a, b);
    char c;
    scanf("%c", &c);
    return 0;
}
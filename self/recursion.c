#include <stdio.h>
void distribute(int roll, int x)
{

    printf("Roll %d received 1 chocolate \n", roll);
    distribute(roll + 1, x - 1);
}
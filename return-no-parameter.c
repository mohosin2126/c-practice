#include <stdio.h>
int add()
{
    int a, b, sum;
    scanf("%d %d",&a,&b);
    sum = a + b;
    return sum;
}
int main()
{

    const result = add();
    printf("%d",result);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[100005] = {0};

    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }

    int val = -1, max = -1;
    for (int i = 0; i < 100005; i++)
    {
        if (fre[i] > max)
        {
            max = fre[i];
            val = i;
        }
    }

    printf("%d", val);

    return 0;
}

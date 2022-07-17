#include <stdio.h>

int main()
{

    int a, b, c, d, e, i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    // check which numbers are even
    if (a % 2 == 0)
    {
        i = i + 1;
    }
    if (b % 2 == 0)
    {
        i = i + 1;
    }
    if (c % 2 == 0)
    {
        i = i + 1;
    }
    if (d % 2 == 0)
    {
        i = i + 1;
    }
    if (e % 2 == 0)
    {
        i = i + 1;
    }
    // check which numbers are odd
    if (a % 2 == 1)
    {
        l = l + 1;
    }
    if (b % 2 == 1)
    {
        l = l + 1;
    }
    if (c % 2 == 1)
    {
        l = l + 1;
    }
    if (d % 2 == 1)
    {
        l = l + 1;
    }
    if (e % 2 == 1)
    {
        l = l + 1;
    }
    // check which numbers are positive
    if (a > 0)
    {
        j = j + 1;
    }
    if (b > 0)
    {
        j = j + 1;
    }
    if (c > 0)
    {
        j = j + 1;
    }
    if (d > 0)
    {
        j = j + 1;
    }
    if (e > 0)
    {
        j = j + 1;
    }
    // check which numbers are negative
    if (a < 0)
    {
        k = k + 1;
    }
    if (b < 0)
    {
        k = k + 1;
    }
    if (c < 0)
    {
        k = k + 1;
    }
    if (d < 0)
    {
        k = k + 1;
    }
    if (e < 0)
    {
        k = k + 1;
    }
    printf("%d valores par(es)\n%d valores impar(es)\n%d valores positivo(s)\n%d valores negativo(s)\n", i, l, j, k);

    return 0;
}

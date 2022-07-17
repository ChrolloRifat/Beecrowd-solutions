/**
 * C program to count minimum number of notes and coins in an amount
 */

#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    int conv, a, b, c, d, e, f, g, h, i, j, k, l, mod;

    conv = n * 100;

    a = conv / 10000;
    mod = conv % 10000;

    b = mod / 5000;
    mod = mod % 5000;

    c = mod / 2000;
    mod = mod % 2000;

    d = mod / 1000;
    mod = mod % 1000;

    e = mod / 500;
    mod = mod % 500;

    f = mod / 200;
    mod = mod % 200;

    g = mod / 100;
    mod = mod % 100;

    h = mod / 50;
    mod = mod % 50;

    i = mod / 25;
    mod = mod % 25;

    j = mod / 10;
    mod = mod % 10;

    k = mod / 5;
    mod = mod % 5;

    l = mod / 1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", a, b, c, d, e, f, g, h, i, j, k, l);

    return 0;
}
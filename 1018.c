/**
 * C program to count minimum number of notes  in an amount
 */

#include <stdio.h>

int main()
{
    int N, ini;
    int notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    /* Assigning the  initial number of notes to 0 */
    notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;

    /* Input amount from the user */

    scanf("%d", &N);
    ini = N;

    if (N >= 100)
    {
        notes100 = N / 100;
        N = N % 100;
    }
    if (N >= 50)
    {
        notes50 = N / 50;
        N = N % 50;
    }
    if (N >= 20)
    {
        notes20 = N / 20;
        N = N % 20;
    }
    if (N >= 10)
    {
        notes10 = N / 10;
        N = N % 10;
    }
    if (N >= 5)
    {
        notes5 = N / 5;
        N = N % 5;
    }
    if (N >= 2)
    {
        notes2 = N / 2;
        N = N % 2;
    }
    if (N >= 1)
    {
        notes1 = N;
    }
    printf("%d\n", ini);
    printf("%d nota(s) de R$ 100,00\n", notes100);
    printf("%d nota(s) de R$ 50,00\n", notes50);
    printf("%d nota(s) de R$ 20,00\n", notes20);
    printf("%d nota(s) de R$ 10,00\n", notes10);
    printf("%d nota(s) de R$ 5,00\n", notes5);
    printf("%d nota(s) de R$ 2,00\n", notes2);
    printf("%d nota(s) de R$ 1,00\n", notes1);
    return 0;
}
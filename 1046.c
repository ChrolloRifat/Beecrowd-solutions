#include <stdio.h>
int main()
{
    int x, y, time;
    scanf("%d%d", &x, &y);

    if (x > 12)
    {
        time = (24 - x) + y;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }

    else if (x < 12 && x != 0)
    {
        time = y - x;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    else if (x == 0 && y == 0)
    {
        time = 24;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    return 0;
}
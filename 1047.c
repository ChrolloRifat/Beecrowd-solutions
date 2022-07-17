#include <stdio.h>
int main()
{
    int h, h1, m, m1, df, mf, hf;
    scanf("%d%d%d%d", &h, &m, &h1, &m1);
    hf = h1 - h;
    mf = m1 - m;

    if (h == h1 && m == m1)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else
    {
        if (mf < 0)
        {
            mf = mf + 60;
            hf = hf - 1;
        }
        if (hf < 0)
        {
            hf = hf + 24;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    }

    return 0;
}
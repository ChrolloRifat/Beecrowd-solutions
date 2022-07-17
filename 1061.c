#include <stdio.h>
int main()
{
    int d, d1, h, h1, m, m1, s, s1, df, hf, mf, sf;
    printf("Dia "scanf("d",&d));
    /*
    scanf("%d:", &d);
    scanf("%d", &h);
    printf(" : ");
    scanf("%d", &m);
    printf(" : ");
    scanf("%d", &s);

    printf("Dia ");
    scanf("%d", &d1);
    scanf("%d", &h1);
    printf(" : ");
    scanf("%d", &m1);
    printf(" : ");
    scanf("%d", &s1);
    */
    df = d1 - d;
    hf = h1 - h;
    mf = m1 - m;
    sf = s1 - s;

    if (sf < 0)
    {
        sf = sf + 60;
        mf = mf - 1;
    }
    if (mf < 0)
    {
        mf = mf + 60;
        hf = hf - 1;
    }
    if (hf < 0)
    {
        hf = hf + 24;
        df = df - 1;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", df, hf, mf, sf);
    return 0;
}
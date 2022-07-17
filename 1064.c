#include <stdio.h>

int main()
{

    float a, b, c, d, e, f;
    int i = 0;
    float avg, sum = 0;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    if (a > 0)
    {
        i = i + 1;
        sum += a;
    }
    if (b > 0)
    {
        i = i + 1;
        sum += b;
    }
    if (c > 0)
    {
        i = i + 1;
        sum += c;
    }
    if (d > 0)
    {
        i = i + 1;
        sum += d;
    }
    if (e > 0)
    {
        i = i + 1;
        sum += e;
    }
    if (f > 0)
    {
        i = i + 1;
        sum += f;
    }
    avg = sum / i;
    printf("%d valores positivos\n%.1f\n", i, avg);

    return 0;
}
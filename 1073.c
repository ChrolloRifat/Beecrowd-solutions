#include <stdio.h>

int main()
{

    int n, sq;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)

    {
        sq = i * i;
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, sq);
        }
    }

    return 0;
}
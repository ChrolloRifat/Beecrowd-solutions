#include <stdio.h>

int main()
{

    int x, m, n, j, sum = 0;
    scanf("%d", &x);

    for (j = 0; j < x; j++)
    {
        scanf("%d %d", &m, &n);
        if (m > n && n % 2 == 0)
        {

            for (int i = n; i < m; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else if (m > n && n % 2 != 0)
        {

            for (int i = n + 1; i < m; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else if (n > m && m % 2 == 0)
        {

            for (int i = m; i > n; i--)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else
        {

            for (int i = m - 1; i > n; i--)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int n, x, j = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            j++;
        }
    }
    printf("%d in\n%d out\n", j, n - j);
    return 0;
}
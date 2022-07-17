#include <stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    if (x % 2 == 0)
    {
        x = x + 1;
        printf("%d\n", x);
        for (int i = 0; i < 5; i = i + 1)
        {
            x = x + 2;

            printf("%d\n", x);
        }
    }
    else
    {
        printf("%d\n", x);
        for (int i = 0; i < 5; i = i + 1)
        {
            x = x + 2;
            printf("%d\n", x);
        }
    }

    return 0;
}
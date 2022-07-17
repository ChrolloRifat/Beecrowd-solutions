/**
 * Multiplication - Times Table
 */
#include <stdio.h>
int main()
{
    int count, n, result;
    count = 1;
    scanf("%d", &n);
    while (count <= 10)
    {
        result = n * count;
        printf("%d x %d = %d\n", count, n, result);
        count = count + 1;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    float n, tax, rem;
    scanf("%f", &n);
    if (n >= 0 && n <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (n >= 2000.01 && n <= 3000.00)
    {

        tax = ((n - 2000) * 0.08); // up to first 2000, the tax rate is 0
        printf("R$ %.2f\n", tax);
    }
    else if (n >= 3000.01 && n <= 4500.00)
    {
        tax = 80 + ((n - 3000) * 0.18); // after 2000 til 3000.01, the tax is 0.08
        printf("R$ %.2f\n", tax);
    }
    else
    {
        tax = 350 + ((n - 4500) * 0.28);
        printf("R$ %.2f\n", tax);
    }

    return 0;
}
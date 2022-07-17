#include <stdio.h>

int main()
{

    float base, new, earn;
    int per;
    scanf("%f", &base);
    if (base >= 0 && base <= 400.00)
    {
        per = 15;
        new = base + base * 0.15;
        earn = new - base;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new, earn, per);
    }
    else if (base >= 400.01 && base <= 800.00)
    {
        per = 12;
        new = base + base * 0.12;
        earn = new - base;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new, earn, per);
    }
    else if (base >= 800.01 && base <= 1200.00)
    {
        per = 10;
        new = base + base * 0.10;
        earn = new - base;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new, earn, per);
    }
    else if (base >= 1200 && base <= 2000.00)
    {
        per = 7;
        new = base + base * 0.07;
        earn = new - base;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new, earn, per);
    }
    else
    {
        per = 4;
        new = base + base * 0.04;
        earn = new - base;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new, earn, per);
    }
    return 0;
}
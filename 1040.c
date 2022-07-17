#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, avg, n5, exm, fin;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %.1f\n", avg);
    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        exm = (n5 + avg) / 2.0;
        fin = (avg + n5) / 2.0;
        if (exm >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", fin);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
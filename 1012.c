#include <stdio.h>
#define PI 3.14159
int main()
{

    double A, B, C, tri, circ, trap, sq, rec;
    scanf("%lf%lf%lf", &A, &B, &C);
    tri = 0.5 * A * C;
    circ = PI * C * C;
    trap = 0.5 * (A + B) * C;
    sq = B * B;
    rec = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, circ, trap, sq, rec);

    return 0;
}
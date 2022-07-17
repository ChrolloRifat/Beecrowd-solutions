#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, det, x1, x2;
    scanf("%f%f%f", &a, &b, &c);
    det = (b * b - 4 * a * c);
    if (det >= 0 && a != 0)
    {
        x1 = (-b + sqrt(det)) / (2 * a);
        x2 = (-b - sqrt(det)) / (2 * a);
        printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}

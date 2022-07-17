#include <stdio.h>


int main() {

    double R,vol;
    double PI = 3.14159;
    scanf("%lf",&R);
    vol = (4.0/3) * PI * R * R * R;
    printf("VOLUME = %.3f\n",vol);

    return 0;
}
#include <stdio.h>

int main() {
    int X;
    float Y,avg_con;
    scanf("%d",&X);     //total distance traveled in km
    scanf("%f",&Y);     //total fuel spent
    avg_con = X/Y;      //average consumption
    printf("%.3f km/l\n",avg_con);
    return 0;
}
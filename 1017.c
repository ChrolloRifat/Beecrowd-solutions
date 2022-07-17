#include <stdio.h>

int main() {

    int time,speed;
    scanf("%d%d",&time,&speed);
    float distance = time * speed;
    float liter = distance / 12;
    printf("%.3f\n",liter);

    return 0;
}
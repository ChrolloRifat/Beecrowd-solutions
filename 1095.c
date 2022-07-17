#include <stdio.h>

int main()
{

    int I = -2;
    for (int J = 60; J>=0; J-= 5)
    {
        I = I +3;
        printf("I=%d J=%d\n", I, J);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int age, yr, m, d, temp;
    scanf("%d",&age);
    yr = age / 365;
    temp = age % 365;
    m = temp / 30;
    d = temp % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yr, m, d);
}
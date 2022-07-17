#include <stdio.h>

int main() {

    int pro1,pro2,num1,num2;
    float price1,price2,total;
    scanf("%d%d%f",&pro1,&num1,&price1);
    scanf("%d%d%f",&pro2,&num2,&price2);
    total = (num1 * price1) + (num2 * price2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
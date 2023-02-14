#include<stdio.h>

int main()
{
    // solution

    int prod_one, prod_one_unit, prod_two, prod_two_unit;
    float prod_one_price, prod_two_price, sum;

    scanf("%d %d %f %d %d %f",&prod_one, &prod_one_unit, &prod_one_price, &prod_two, &prod_two_unit, &prod_two_price);

    sum = (prod_one_unit * prod_one_price) + (prod_two_unit * prod_two_price);

    printf("VALOR A PAGAR: R$ %.2f\n",sum);

    return 0;
}
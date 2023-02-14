#include<stdio.h>

int main()
{
    // solution

    float salary, sales, result;
    char name[100];
    scanf("%s",name);
    scanf("%f %f", &salary, &sales);

    result = salary + ((sales/100) * 15 );

    printf("TOTAL = R$ %.2f\n",result);

    return 0;
}
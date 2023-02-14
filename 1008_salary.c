#include<stdio.h>

int main()
{
    // solution
    int empId, total_hour;

    float rate, result;

    scanf("%d %d %f",&empId,&total_hour, &rate);

    result = total_hour * rate;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",empId,result);

    return 0;
}
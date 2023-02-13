#include<stdio.h>

#define PI (3.14159);

int main()
{
    // solution 
    
    double r, rslt;

    scanf("%lf",&r);

    rslt = (r*r)* PI;

    printf("A=%.4lf\n",rslt);

    return 0;
}
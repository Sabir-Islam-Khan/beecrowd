#include<stdio.h>

int main()
{
    // solution 
    
    float num_one, num_two, average;

    scanf("%f %f",&num_one, &num_two);

    average = ((num_one*3.5)+(num_two*7.5)) / (3.5+7.5);

    printf("MEDIA = %.5lf\n",average);

    return 0;
}
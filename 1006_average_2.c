#include<stdio.h>

int main()
{
    float num_one, num_two, num_three, average;

    scanf("%f %f %f",&num_one, &num_two, &num_three);

    average = ((num_one*2)+(num_two*3) + (num_three * 5) ) / (2+3+5);

    printf("MEDIA = %.1lf\n",average);

    return 0;
}
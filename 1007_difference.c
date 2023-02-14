#include<stdio.h>

int main()
{
    // solution
    int num_one, num_two, num_three, num_four, diff;

    scanf("%d %d %d %d",&num_one, &num_two, &num_three, &num_four);

    diff = ((num_one * num_two) - (num_three * num_four));

    printf("DIFERENCA = %d\n",diff);

    return 0;
}
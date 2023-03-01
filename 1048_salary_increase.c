#include<stdio.h>

int main()
{
    double salary, newSalary;
    
    scanf("%lf",&salary);
    
    if(salary > 0 && salary <= 400){
        newSalary =  salary +  ( (salary*15) / 100 );
        
        printf("Novo salario: %0.2lf\n",newSalary);
        printf("Reajuste ganho: %0.2lf\n",newSalary - salary);
        printf("Em percentual: 15 %\n");
        
    } else if(salary > 400 && salary <= 800) {
        newSalary =  salary +  ( (salary*12) / 100 );
        
        printf("Novo salario: %0.2lf\n",newSalary);
        printf("Reajuste ganho: %0.2lf\n",newSalary - salary);
        printf("Em percentual: 12 %\n");
        
    } else if(salary > 800 && salary <= 1200) {
        newSalary =  salary +  ( (salary*10) / 100 );
        
        printf("Novo salario: %0.2lf\n",newSalary);
        printf("Reajuste ganho: %0.2lf\n",newSalary - salary);
        printf("Em percentual: 10 %\n");
        
    } else if(salary > 1200 && salary <= 2000) {
        newSalary =  salary +  ( (salary*7) / 100 );
        
        printf("Novo salario: %0.2lf\n",newSalary);
        printf("Reajuste ganho: %0.2lf\n",newSalary - salary);
        printf("Em percentual: 7 %\n");
        
    }  else if(salary > 2000 ) {
        newSalary =  salary +  ( (salary*4) / 100 );
        
        printf("Novo salario: %0.2lf\n",newSalary);
        printf("Reajuste ganho: %0.2lf\n",newSalary - salary);
        printf("Em percentual: 4 %\n");
    }
    
    return 0;
}
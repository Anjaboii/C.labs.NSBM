#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Basic_salary, yearsofservice, monthly_sales;
    float allowance , Bonus_payment, gross_monthly_remuneration;
    char city;

    printf("Enter Basic salary: ");
    scanf("%d", &Basic_salary);

    printf("Enter number of service years ");
    scanf("%d", &yearsofservice);

    printf("Enter your city (Input character 'C' if the city is Colombo) ");
    scanf(" %c", &city);

    if (yearsofservice > 5)
    {
        allowance = Basic_salary * 0.1;
    }

    if (city == 'C')
    {
        allowance = allowance + 2500;
    }

    printf("Enter your monthly sales ");
    scanf( "%d", &monthly_sales);

    if (0 <= monthly_sales &&  monthly_sales < 25000)
    {
        Bonus_payment = monthly_sales * 0.1;
    }
    else if (25000 <= monthly_sales && monthly_sales < 50000)
    {
        Bonus_payment = monthly_sales * 0.12;
    }
    else if (monthly_sales >= 50000)
    {
        Bonus_payment = monthly_sales * 0.15;
    }

    gross_monthly_remuneration = Basic_salary + allowance + Bonus_payment;

    printf("Gross monthly remuneration will be %f\n", gross_monthly_remuneration);

    return 0;
}




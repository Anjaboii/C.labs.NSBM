#include <stdio.h>
#include <stdlib.h>

int main()
{
int main()
{
     char employee_name[25];
     float new_salary,basic_salary,increment;

     printf("Enter employee name:");
     scanf("%s",&employee_name);

     printf("Enter basic salary:");
     scanf("%f",&basic_salary);

     if (basic_salary>=10000)
        increment=basic_salary*0.15;

     else if (basic_salary>=5000)
        increment=basic_salary*0.10;

     else
        increment=basic_salary*0.05;

     new_salary=basic_salary+increment;

     printf("Employee name is %s\n",employee_name);
     printf("new salary is %f",new_salary);

}

}

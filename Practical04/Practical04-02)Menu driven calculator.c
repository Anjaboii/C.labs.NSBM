#include <stdio.h>
#include <stdlib.h>

int main()

{
 double no1,no2,result;
 char operator;

 printf("Menu Driven Calculator ");
 printf("(+,-,/,*)\n");

 printf("Enter the operator ");
 scanf("%c", &operator);

 printf("Enter your first number ");
 scanf("%lf",&no1);
 printf("Enter your second number ");
 scanf("%lf",&no2);

 switch (operator)
{
     case '+':result = no1+no2;
     printf("The result is %lf",result);break;

     case '-':result = no1-no2;
     printf("the result is %lf", result);break;

     case '/':
         if (no2==0)
         {
             printf("Cannot be divided by 0");
         }
else
{
    result = no1/no2;
    printf("The result is %lf", result);
}
 break;

     case '*':
         result = no1*no2;
     printf ("The result is %lf", result);
     break;

default:
        printf("Invalid operator");break;
}
return 0;
}


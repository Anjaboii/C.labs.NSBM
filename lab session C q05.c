#include <stdio.h>
#include <stdlib.h>

int main()
{
     int no1,no2;

    printf("Enter the first integer");
    scanf("%d",&no1);

    printf("Enter the second integer ");
    scanf("%d",&no2);

    if (no1%no2==0)
        printf("%d is a multiple",no1,no2);
    else
        printf("%d is not a multiple",no1,no2);


}

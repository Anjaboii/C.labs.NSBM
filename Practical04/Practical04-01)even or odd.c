#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1;

    printf("Enter your number ");
    scanf("%d",&no1);

    if (no1%2==0)
    {
        printf("This number is an even number",no1);
    }
    else
    {
        printf("This number is an odd number",no1);
    }

}



#include <stdio.h>
#include <stdlib.h>

int main()
{
     {
int number,total,digit;

printf("Enter your number ");
scanf("%d",&number);

while (number!=0)
{
    digit=number % 10;
    total = total + digit;
    number = number / 10;
}
printf("The total is %d",total); return 0;

}

}

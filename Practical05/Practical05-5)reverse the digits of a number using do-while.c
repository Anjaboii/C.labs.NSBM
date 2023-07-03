#include <stdio.h>
#include <stdlib.h>

int main()
{
{
int number,reversed_number,digit;

printf("Enter your number ");
scanf("%d",&number);

do{
    digit = number % 10;
    reversed_number= reversed_number*10 + digit;
    number /= 10;
}
while (number!=0); printf("The reversed number is %d",reversed_number); return 0;
}


}

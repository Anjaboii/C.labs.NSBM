#include <stdio.h>
#include <stdlib.h>

int main()
{
int base,exponent,result=1,x; printf("Enter the base value ");
scanf("%d",&base);

printf("Enter the exponent value ");
scanf("%d",&exponent);

for(x = 1; x <= exponent;x++)
{
    result*= base;
}
printf("The result is %d",result);

return 0;
}




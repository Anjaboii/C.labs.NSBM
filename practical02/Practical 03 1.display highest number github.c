#include <stdio.h>
#include <stdlib.h>

int main()
{
 int no1,no2;
 printf("Enter first number ");
 scanf("%d",&no1);

 printf("Enter second number ");
 scanf("%d",&no2);

 if (no1>no2)
{
     printf("The highest number is %d",no1);

}
else if (no2>no1)
{
    printf("The highest number is %d",no2);
}
else
{
    printf("The two numbers are equal");
}
}

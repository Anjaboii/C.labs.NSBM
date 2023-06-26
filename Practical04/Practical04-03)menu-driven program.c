#include <stdio.h>
#include <stdlib.h>

int main()

{
double radius,result,pi=3.14159;
int choice;

printf("MENU\n\n");
printf("1.Calculate the circumference of a circle\n");
printf("2.Calculate the area of a circle\n");
printf("3.Calculate the volume of a sphere\n\n");
printf("Enter your choice number(1,2 or 3) ");
scanf("%d",&choice);

switch (choice)
{
case 1:
    printf("Enter the radius of your circle ");
    scanf("%lf",&radius);
    result = 2* pi * radius;
    printf("The circumference of the circle is %lf",result);break;

case 2:
    printf("Enter the radius of your circle ");
    scanf("%lf",&radius);
    result = pi*radius *radius ;
    printf("The area of your circle is %lf",result);break;

case 3:
    printf("Enter the radius of your sphere ");
    scanf("%lf",&radius);
    result= 4/3 * pi *radius *radius *radius;
    printf("The volume of your sphere is %lf", result);break;
default:
    printf("Invalid choice number");break;
}
}


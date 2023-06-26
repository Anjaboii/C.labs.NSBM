#include <stdio.h>
#include <stdlib.h>

int main()

{
int month_number;

printf("Enter your month number (1-12) ");
scanf("%d",&month_number);

switch (month_number)
{
    case 1:printf("31\n");break;
    case 2:printf("28\n");break;
    case 3:printf("31\n");break;
    case 4:printf("30\n");break;
    case 5:printf("31\n");break;
    case 6:printf("30\n");break;
    case 7:printf("31\n");break;
    case 8:printf("31\n");break;
    case 9:printf("30\n");break;
    case 10:printf("31\n");break;
    case 11:printf("30\n");break;
    case 12:printf("31\n");break;



default:
    printf("Invalid month number.\n");break;
}

}



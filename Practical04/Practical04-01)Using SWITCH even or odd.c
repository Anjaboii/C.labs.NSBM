#include <stdio.h>
#include <stdlib.h>

int main()

{
 int number;
 printf("Enter your number ");
 scanf("%d",&number);

 switch (number%2)
 {
     case 0: printf("This number is an even number");break;

     case 1: printf("This number is an odd number");break;
 }
 return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()

{
float average;
int mark,total,x=1;

printf("Enter your 10 marks\n ");
for (x=1;x<=10;x++)
{
     printf ("Mark %d ",x);
     scanf("%d",&mark);
     total+=mark;
}
     average = total / 10.0;



printf("Total = %d\n",total);
printf("Average = %f\n",average);

if(average<50)
{
    printf("Fail\n");
}
else
{
    printf("Pass");
}

}

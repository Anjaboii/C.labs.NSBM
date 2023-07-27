#include <stdio.h>
#include <stdlib.h>
int main()
{
int no,i;
printf("Enter a Positive Number:");
scanf("%d", &no);
printf("Factors of %d are: ", no);
for(i=1;i<=no;++i)
{
if(no%i==0)
{
printf("%d",i);
}
}
printf("\n");
return 0;
}
[Q12]
#include <stdio.h>
#include <stdlib.h>
int main()
{
int main()
int number;
int sum = 0;
printf("Enter numbers to be added (enter -1 to stop):\n");
while (1) {
scanf("%d", &number);
if (number == -1) {
break;
}
sum += number;
}
printf("The sum is: %d\n", sum);
return 0;
}

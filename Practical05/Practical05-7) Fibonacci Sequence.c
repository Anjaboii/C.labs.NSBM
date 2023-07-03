#include <stdio.h>
#include <stdlib.h>

int main()
 {
int no1=0,no2=1,nextnumber,x; printf("Fibonacci Sequence ");
for (x = 1 ;x<=10; ++x)
{
    printf("%d, ",no1);     nextnumber= no1+no2;     no1 = no2;
    no2 = nextnumber;
}
return 0;
}




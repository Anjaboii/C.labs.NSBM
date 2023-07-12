#include <stdio.h>
#include <stdlib.h>

int main()
{
char letter;
printf("ASCII values of letters A-Z\n");

for(letter = 'A';letter <= 'Z';++letter)
{
 printf("Letter: %c,ASCII value: %d\n",letter,letter);
}
return 0;



}

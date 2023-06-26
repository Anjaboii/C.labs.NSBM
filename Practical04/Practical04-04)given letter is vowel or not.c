#include <stdio.h>
#include <stdlib.h>

int main()

{
char character;

printf("Enter your character ");
scanf("%c",&character);

switch (character)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

printf("This character is a vowel.",character);break;

default:
    printf("This character is not a vowel.",character);break;
}

}


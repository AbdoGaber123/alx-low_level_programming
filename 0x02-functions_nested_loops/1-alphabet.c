#include "main.h"

/*
* prints the alphabet, in lowercase, followed by a new line.
* don't use return function this time
*/
void print_alphabet(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z' ;letter++)
	{
		_putchar(letter);

	}
	_putchar('\n');
}

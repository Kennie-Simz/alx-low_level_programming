#include "main.h"


/**
 * puts2 - prints every ther character of a string
 * starting with the first character, followed by a new line
 * @str: address of the first character in the string
 *
 **/

void puts2(char *str)
{
	int i = 0;


	while (*str)
	{
		if (i % 2 == 0)

			_putchar(*str);

		str++;
		i++;
	}


		_putchar('\n');
}

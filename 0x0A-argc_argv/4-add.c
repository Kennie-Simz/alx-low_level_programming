#include <stdio.h>
#include <stdlib.h>

int _is_valid_int(char *s);

/**
 * main - adds positive numbers
 * @argc: gives number of commandilene args
 * @argv: lists down the commandline args
 *
 * More info: If no. is passed to program, print 0 and a new line
 * if no. contains symbols, print Error, a new line and return 1
 *
 * Return: On success always 0, else return 1
 *
 **/

int main(int argc, char **argv)
{
	int i;
	int total = 0;

	if (argc < 2)
	{
		printf("%d/n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (_is_valid_int(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("error\n");
			return (1);
		}
	}

	printf("%d\n", total);

			return (0);
}

/**
 * _is_valid_int - checks if a string is a valide integer
 * @s: string given
 *
 * Return: Always 0 on succes, else return 1
 **/

int _is_valid_int(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

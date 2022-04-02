#include <stdio.h>

/**
 * main - Prints all arguments it receives per line
 *
 * @argc: give number of cmmandline arguments
 * @argv: gives a list of the commandline arguments
 *
 * Return: On succes always 0
 *
 **/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argc[i]);
	return (0);
}

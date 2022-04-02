#include <stdio.h>

/**
 * main - prints its name and a new line
 * @argc: gives number of command line arguments
 * @argv: gives list of commandline arguments
 *
 * Return: ON success 0 Always
 **/

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void)argc;

	return(0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: givesnumber of commandline arguments
 * @argv: give a list of commandline arguments
 *
 * More info: Program shouldreturn error if it does not receive two arguments,
 * and should return 1
 *
 * Return: On success always 0, On error 1
 *
 **/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

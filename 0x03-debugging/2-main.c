#include <stdio.h>
#include "main.h"


/**
 * main - prints the largest of 3 integers
 * Description: checks for the largest number
 * Return: 0
 *
 **/


int main(void)
{
int a, b, c;
int largest;

a = 0;
b = -2;
c = -98;

largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}

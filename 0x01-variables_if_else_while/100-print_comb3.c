#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the entry point of the code that prints all
 * possible combination of two digits
 * Return: Always success(0)
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i < '9' ; i++)
	{

	for (j = i + 1; j <= '9' ; j++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	if (i == '8' && j == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

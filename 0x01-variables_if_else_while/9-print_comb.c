#include <stdio.h>

/**
 * main - This is the entry point of the code that prints all possible
 * combination of single digit numbers
 *
 * Return: Always success(0)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

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
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

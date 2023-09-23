#include <stdio.h>

/**
 * main - This is the entry point of the code that
 * prints the lower and upper cases of the alphabet
 *
 * Return: Always success(0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

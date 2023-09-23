#include <stdio.h>

/**
 * main - This is the entry poin of the code that
 * prints alphabets and numbs together
 *
 * Return: always success(0)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

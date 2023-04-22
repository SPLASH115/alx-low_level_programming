#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - This code prints alphabets in upper as well as lowercases
 *
 * Return: Always (0)
 */

int main(void)

{
	char Uplow;

	for (Uplow = 'a'; Uplow <= 'z'; Uplow++)
	putchar(Uplow);

	for (Uplow = 'A'; Uplow <= 'Z'; Uplow++)
	putchar(Uplow);
	putchar('\n');

	return (0);
}

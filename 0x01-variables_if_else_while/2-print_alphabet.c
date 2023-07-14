#include <stdio.h>

/**
 * main - A program that prints alphabets
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

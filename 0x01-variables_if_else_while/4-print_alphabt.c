#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

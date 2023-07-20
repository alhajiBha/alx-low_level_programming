#include "main.h"

/**
 * _isupper - define a character is uppercase
 *
 * Description: Prints the alphabets with _putchar
 * @c: character
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}

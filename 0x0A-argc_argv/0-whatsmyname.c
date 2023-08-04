#include <stdio.h>
#include "main.h"

/**
 * main - print the name of progress
 * @argv: number of argument
 * @argc: arrays of argument
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}

#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while (p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}
	return (sum);
}

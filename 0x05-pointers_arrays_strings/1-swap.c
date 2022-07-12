#include "main.h"

/**
 * main 0- Entry point
 *
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

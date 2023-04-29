#include "main.h"
#include <stdio.h>

/**
 * print_triangle - entry point
 *Description: i Prints diagonals
 *@size: size of the triangle
 *
 *Return: void
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

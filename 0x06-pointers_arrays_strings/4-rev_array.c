#include "main.h"

/**
 *  reverse_array - function that reverses an array of integers
 *@a: array
 *@n: number of elements of the array
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
int i, j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
int tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}

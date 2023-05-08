#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;

int i;
int j;
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
}

for (j = 0; j < size; j++)
{
sum2 += *(a + j * size + size - 1 - j);
}
printf("Sum of diagonal 1: %d\n", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}

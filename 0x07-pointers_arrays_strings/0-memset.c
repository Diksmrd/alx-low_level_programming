#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address to fill
 * @b: value to be set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char arr[10];

_memset(arr, 'a', 10);
printf("%s\n", arr);
return (0);
}

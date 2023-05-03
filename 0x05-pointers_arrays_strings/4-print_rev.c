#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 *@s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;
int i;

while (*(s + len) != '\0')
{
len++;
}

for (i = len - 1; i >= 0; i--)
{
printf("%c", *(s + i));
}

printf("\n");
}

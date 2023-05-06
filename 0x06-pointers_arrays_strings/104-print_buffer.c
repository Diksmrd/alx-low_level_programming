#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
{
printf("%02x ", (unsigned char) b[j]);
}
else
{
printf("   ");
}
}
printf(" ");
for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (isprint((int) b[j]))
{
putchar(b[j]);
}
else
{
putchar('.');
}
}
else
{
break;
}
}
putchar('\n');
}
}

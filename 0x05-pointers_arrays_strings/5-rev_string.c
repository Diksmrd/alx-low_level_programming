#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: the string to be modified
 * Return: void
 */

void rev_string(char *s)
{
int index = 0, len = 0;
char temp;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
temp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = temp;
}
}

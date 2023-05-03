#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;
return (i);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - encode a string using rot13
 * @str: The input string.
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
char *result = (char *) malloc(sizeof(char) * (strlen(str) + 1));
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
result[i] = ((str[i] - 'A') + 13) % 26 + 'A';
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
result[i] = ((str[i] - 'a') + 13) % 26 + 'a';
}
else
{
result[i] = str[i];
}
}
result[i] = '\0';
return (result);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @s: The input string.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
char *result = malloc(strlen(s) + 1);
int i, j;
char *leet_table[256] = {0};

leet_table['a'] = leet_table['A'] = "4";
leet_table['e'] = leet_table['E'] = "3";
leet_table['o'] = leet_table['O'] = "0";
leet_table['t'] = leet_table['T'] = "7";
leet_table['l'] = leet_table['L'] = "1";

for (i = 0, j = 0; s[i]; i++, j++)
{
char *replacement = leet_table[(unsigned char) s[i]];
result[j] = replacement ? *replacement : s[i];
}
result[j] = '\0';

return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 *main - generates random valid password for the
 * program 101-crack me.
 *return: 0 (Success)
 */

int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i, r;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
r = rand() % 62;
if (r < 26)
{
password[i] = 'a' + r;
}
else if (r < 52)
{
password[i] = 'A' + (r - 26);
}
else
{
password[i] = '0' + (r - 52);
}
}

password[PASSWORD_LENGTH] = '\0';
printf("%s\n", password);
return (0);
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Generates random valid passs for the program 101-crackme.
 *
 * Return: int.
 */

int main(void)
{
int pass[100], i, n, total;
total = 0;

/* ascii val of zero = 48 */
srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 33;
total += (pass[i] + 48);
putchar(pass[i] + 48);
if ((8937 - total) - 48 < 33)
{
n = 8937 - total - 48;
total += n;
putchar(n + 48);
break;
}
}
return (0);
}

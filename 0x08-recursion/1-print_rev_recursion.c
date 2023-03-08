#include <string.h>
#include "main.h"

/**
 *print - prints a string in reverse.
 *@s: Char*
 *Return: void
 */

void print(char *s)
{
if (*s)
{
_putchar(*s);
print(s - 1);
}
else
_putchar('\n');
}
/**
 *_print_rev_recursion - prints a string in reverse.
 *@s: Char*
 *Return: void
 */
void _print_rev_recursion(char *s)
{
char *ptr = s + strlen(s) - 1;
print(ptr);
}


/**
 *string_toupper - changes all lowercase letters of a \
string to uppercase.
*@c: char
*Return: pointer
*/

char *string_toupper(char *c)
{
int i;
for (i = 0; c[i]; i++)
{
if (*(c + i) > 96 && *(c + i) < 123)
*(c + i) = *(c + i) - 32;
else
continue;
}
return (c);
}

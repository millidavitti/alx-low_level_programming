#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string*
 *@s2: string*
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *concat;
if (s1 == NULL || s2 == NULL)
return (NULL);

concat = (char *)malloc(sizeof(char) * (strlen(s2) + strlen(s1) + 1));

if (!concat)
return (NULL);

for (i = 0; i < (int)strlen(s1); i++)
concat[i] = s1[i];

for (i = 0; i < (int)strlen(s2); i++)
concat[i + strlen(s1)] = s2[i];

return (concat);
}

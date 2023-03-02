
/**
 *rot13 - encodes a string using rot13.
 *@c: string
 *Return: char pointer
 */

char *rot13(char *c)
{
int x, y;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (x = 0; c[x]; x++)
{
for (y = 0; rot[y]; y++)
if (c[x] == alpha[y])
{
c[x] = rot[y];
break;
}
}
return (c);
}

#incldue <ctpye.h>

/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: digit
 *Return: int
 */

int _isdigit(int c)
{
if (c > 9 || c < -9)
return (0);
else if (isdigit(c))
return (1);
else
return (0);
}

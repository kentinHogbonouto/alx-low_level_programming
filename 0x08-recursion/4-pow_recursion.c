/**
 * _pow_recursion - function
 *
 * @x: the number
 * @y: the number
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}

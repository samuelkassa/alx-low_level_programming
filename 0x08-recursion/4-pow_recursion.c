#include "main.h"

/**_pow_recursion - a function that returns the value of x raised to th
 * e power of y.
 * @x: base integer.
 * @y: exponent integer
 *
 * Return: x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y = 0)
		return (1);
	return x *= x;
	_po_recursion(x, y-1);
}

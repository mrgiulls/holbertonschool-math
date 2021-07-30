#include "holberton.h"
#include <math.h>

/**
 * argument - get the argument of a given complex number
 * @c: a complex number
 *
 * Return: the argument of a given complex number
 */
double argument(complex c)
{
	double tan_arg = c.im / c.re;

	return (atan(tan_arg));
}

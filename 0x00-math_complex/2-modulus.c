#include "holberton.h"
#include <math.h>

/**
 * modulus - get the modulus of a given complex number
 * @c: a complex number
 *
 * Return: the modulus of the complex number
 */
double modulus(complex c)
{
	double mod = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (mod);
}

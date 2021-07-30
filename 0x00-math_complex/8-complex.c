#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - update the real and the imaginary parts of a complex
 * number given its modulus and arguments
 * @m: a module of a complex number
 * @arg: an argument of a complex number
 * @c3: a pointer to a complex number to put its new parameters
 *
 * Return: Nothing
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}

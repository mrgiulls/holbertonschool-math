#include "holberton.h"

/**
 * conjugate - conjugate a given complex number
 * @c: a complex number
 *
 * Return: the conjugation of the given complex number
 */
complex conjugate(complex c)
{
	complex cj = c;
	
	cj.im *= -1;
	return (cj);
}

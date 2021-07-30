#include "holberton.h"

/**
 * substraction - subtracts two complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to a complex number to put the result of the operation
 *
 * Return: Nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}

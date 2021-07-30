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

/**
 * multiplication - multiplies two complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to a complex number to put the result of the operation
 *
 * Return: Nothing
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re * c2.re - c1.im * c2.im;
	c3->im = c1.re * c2.im + c1.im * c2.re;
}

/**
 * division - divides two complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to a complex number to put the result of the operation
 *
 * Return: Nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	complex cpl1 = c1, cpl2 = c2, dividend, divider;

	multiplication(cpl1, conjugate(cpl2), &dividend);
	multiplication(cpl2, conjugate(cpl2), &divider);
	c3->re = dividend.re / divider.re;
	c3->im = dividend.im / divider.re;
}

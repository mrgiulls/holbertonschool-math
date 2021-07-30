#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - Print real number and imaginary number
 * @c: Struct for complex number
 *
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%f\n", c.re);

	else if (c.re == 0)
		printf("%fi\n", c.im);

	else
		printf("%f + %fi\n", c.re, c.im);
}

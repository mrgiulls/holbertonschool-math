#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <math.h>

/**
 * struct complex_number - Defines a complex number
 * @re: real part of the complex numbrer
 * @im: imaginary part of the complex numbrer
 * @i: square root of (-1) -> for this project, its value defines the power of
 * the imaginary part of the complex number to which is raised
 *
 * Description: Parts of a complex number
 */
typedef struct complex_number
{
	double re;
	double im;
	int i;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif

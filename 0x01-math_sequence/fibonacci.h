#ifndef FIBO_H
#define FIBO_H

#include <stdlib.h>
#include <math.h>

/**
 * struct s_cell - a struct to store a Fibonacci sequence
 * @elt: a member of the Fibonacci sequence
 * @next: a pointer to the next node
 */
typedef struct s_cell
{
	int elt;
	struct s_cell *next;
} t_cell;

t_cell *Fibonnaci(void);
double gold_number(t_cell *head);

#endif

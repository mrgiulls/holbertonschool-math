#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct list_math - singly linked list
 * @elt: result of the sequence
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_math
{
int elt;
struct list_math *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* FIBONACCI_H */

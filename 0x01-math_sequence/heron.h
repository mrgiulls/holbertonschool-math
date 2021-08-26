#ifndef HERON_H
#define HERON_H

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
double elt;
struct list_math *next;
} t_cell;

void print_list(t_cell *head);
t_cell *heron(double p, double x0);

#endif /* HERON_H */

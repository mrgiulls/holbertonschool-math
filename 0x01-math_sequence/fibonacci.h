#ifndef FIBO_H
#definir FIBO_H

#incluir  <> stdlib.h
#incluir  <> math.h

/**
 * struct s_cell - un struct para almacenar una secuencia de Fibonacci
 * @elt: un miembro de la secuencia de Fibonacci
 * @next: un puntero al siguiente nodo
 */
s_cell typedef struct
{
	int elt;
	struct s_cell *next;
} t_cell;

t_cell *Fibonnaci(vacío);
doble gold_number(t_cell *cabeza);

#endif

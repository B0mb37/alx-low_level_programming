#ifndef	FUNCTIONS_H
#define FUNCTIONS_H
#include <stdlib.h>

void print_name(char *name, void(*f)(char *));
void arra_iteratior(int *array, size_t size, void(*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif

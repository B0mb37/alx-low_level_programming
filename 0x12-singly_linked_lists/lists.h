#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: malloce'd string
 * @len: length of string
 * @next: next node
 * Description: singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t power(size_t base, size_t power);
size_t print_list(const list_t *n);
void _putchar(char c);


#endif

#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
int _putchar(char c);
int _strlen(char *str);
size_t list_len(const list_t *h);
char *_strdup(const char *str);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);






#endif

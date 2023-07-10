#include "main.h"
#include <stdlib.h>
#include <string.h>

char **strtow(char *str);
int word_len(char *str);
int word_count(char *str);

/**
 * strtow - splits string to words
 * @str: the string to be split
 * Return: ptr (pointer to array of words) NULL (fails or str is invalid)
 */


char **strtow(char *str)
{
	int words, index = 0, w = 0, letters, x;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);

	if (words == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * (words + 1));

	if (ptr == NULL)
		return (NULL);

	while (str[index] == ' ')
		index++;

	for (; w < words; w++)
	{
		letters = word_len(str + index);
		ptr[w] = malloc(sizeof(char) * (letters + 1));

		if (ptr[w] == NULL)
		{
			while (--w >= 0)
				free(ptr[w]);
			free(ptr);
			return (NULL);
		}

		for (x = 0; x < letters; x++)
			ptr[w][x] = str[index++];
		ptr[w][letters] = '\0';

		while (str[index] == ' ')
			index++;
	}
	ptr[w] = NUL;
	return (ptr);
}

/**
 * word_count - counts number of words in a str
 * @str: the str to be checked
 * Return: words (number of words)
 */

int word_count(char *str)
{
	int index, words = 0;

	for (index = 0; index < strlen(str); index++)
	{
		if (str[index] == ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * word_len - returns length of a word
 * @str: pointer to word str char
 * Return: len (length of a word)
 */

int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

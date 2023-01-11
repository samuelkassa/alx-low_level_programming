#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
	int index = 0, word_length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		word_length++;
		index++;
	}
	return (word_length);
}

/**
 * count_words - counts the number of words contained within a string.
 * @str: The string to be searched
 *
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
	int index = 0, num_of_words = 0, str_len = 0;

	for (index = 0; *(str + index); index++)
		str_len++;

	for (index = 0; index < str_len; index++)
	{
		if (*(str + index) != ' ')
		{
			num_of_words++;
			index += word_len(str + index);
		}
	}
	return (num_of_words);
}

/**
 * strtow - a function that splits a string into words.
 * @str: string to be slitted
 *
 * Return: NULL if str == NULL or str == "".
 * NULL if a function fails.
 * a pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, num_of_words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_of_words = count_words(str);
	if (num_of_words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (num_of_words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < num_of_words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);

}

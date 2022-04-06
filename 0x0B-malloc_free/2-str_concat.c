#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1:first string
 * @s2:second string
 * * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *strings;

	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);
	strings = malloc(l1 + l2 + 1);
	if (strings == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		strings[i] = s1[i];
	for (i = 0; i < l2; i++)
		strings[l1 + i] = s2[i];
	return (strings);
}

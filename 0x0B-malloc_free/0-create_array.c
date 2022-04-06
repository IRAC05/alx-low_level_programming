#include <stdlib.h>
/**
 * create_array - a finction that ceeates an arraybof functions
 * and initializes it with a special character
 * @c: character to initialize array with
 * @size: size of array
 * Return: Returns null if fails or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar  == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

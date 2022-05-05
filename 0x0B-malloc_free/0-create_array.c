#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize the array with
 *
 * Return: NULL if size = 0 and pointer to the array/NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
unsigned int i;
char *b;

if (size == 0)
return (NULL);
b = malloc(size * sizeof(char));
if (b == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
b[i] = c;
}
return (b);

#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination memory to printed
 * @n: the size of the memory to print (bytes)
 * @src: source memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) = *(src + i);

return (dest);
}

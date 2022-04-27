#include "main.h"

/**
 * _memcpy: copies memory area
 * @dest: destination of memory area
 * @src: Source of memory to be copied
 * @n: bytes of the memory
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

i = 0;
while (i < n) 
{
*(dest + i) = *(src + i); i++;

}

return (dest);
}

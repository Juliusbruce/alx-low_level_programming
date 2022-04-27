#include "main.h"

/**
 * _memcpy - copies from memory area src
 * @dest: the address of memory to printed
 * @n: the size of the memory to print (bytes)
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

{
unsigned int i;

i = 0;
while (i < n)
{
*(dest + i) = *(src + i); i++;

}
return (dest);
}

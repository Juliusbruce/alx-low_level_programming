#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{

while (*s != '\0') /*Declaring WHILE*/
{
if (*s == c) /*if s ==  c*/
{
return (s); /*return s*/
}

++s;
}

if (*s == c)
{
return (s);

}


return (0);/* values null*/
}

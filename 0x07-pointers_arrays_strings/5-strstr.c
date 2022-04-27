#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char  *_strstr(char *haystack, char *needle)
{
char *str1, *str2; /*Declaring variables*/

while (*haystack != '\0')
{
str1 = haystack;
str2 = needle;

/*Star WHILE*/
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
return (str1);
haystack = str1 + 1;
}
return (0);
}

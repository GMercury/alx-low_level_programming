#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_addChar (char *str, char c)
{
int size, i;
char *m;

size = _strlen(str);

m = malloc((size + 1) * sizeof(char) + 1);
if (m == 0)
	return (0);

for (i = 0; i <= size; i++)
	m[i] = str[i];

m[i + 1] = c;
m[i + 2] = '\0';

return (m);
}


/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{


#include "main.h"

/**
 * _memset - fill the first @n bytes of the memory areapointed
 * to by @s with the constant byte @b
 * @n: bytes of the memory area
 * @s: memory area to fill
 * @b: constant byte to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;

	}
	return (s);
}

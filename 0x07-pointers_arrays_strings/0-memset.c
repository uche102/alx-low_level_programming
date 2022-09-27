include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: memory to block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to be used
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

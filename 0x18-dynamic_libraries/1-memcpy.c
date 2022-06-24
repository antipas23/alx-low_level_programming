#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the memory area dest
 * @src: pointer to memory area src
 * @n: bytes of the memory
 * Return: the pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

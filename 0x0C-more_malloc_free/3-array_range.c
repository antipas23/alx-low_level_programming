#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: range minimum.
 * @max: range maximum.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int index, xsize;

	if (min > max)
	{
		return (NULL);
	}
	xsize = (max - min) + 1;
	array = malloc(sizeof(*array) * xsize);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < xsize; index++)
	{
		array[index] = min;
		min++;
	}
	return (array);
}

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array to search in
 * @size: Number of elements in the array
 * @cmp: Pointer to function used to compare values
 *
 * Return: Index of first element for which cmp doesn't return 0,
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}

#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory (initialized to zero).
 *         NULL if nmemb or size is 0, or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total_size;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}

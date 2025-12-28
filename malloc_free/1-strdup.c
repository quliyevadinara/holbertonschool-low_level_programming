#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory containing
 *           a copy of the given string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or memory
 *         allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length, i;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}

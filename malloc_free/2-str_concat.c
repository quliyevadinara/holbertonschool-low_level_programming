#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory.
 * @s1: The first string. 
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if memory allocation
 *         fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths manually */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++)
		new_str[len1 + j] = s2[j];
	new_str[len1 + len2] = '\0';

	return (new_str);
}

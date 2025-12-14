#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing bytes to match
 *
 * Return:  number of bytes in initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (i);
		}
	}

	return (i);
}

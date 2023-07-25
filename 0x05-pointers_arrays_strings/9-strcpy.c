#include "main.h"
/**
* char *_strcpy - copies the stringfrom dest to src
* @dest: copy to
* @src: copy from
* Return: destination string
*/

char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int x = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for (; x < w; x++)
	{
	dest[x] = src[x];
	}
	dest[w] = '\0';
	return (dest);
}

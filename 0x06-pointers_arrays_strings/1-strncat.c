#include "main.h"
/**
  *_strncat - A function that concatenates two strings using
  * 'n' bytes from src.
  *
  *@n: Number of bytes to concatenate to dest
  *@src: First string to concatenate containing n or more bytes
  *@dest: Second string to concatenate and end with a terminating null byte
  *
  *Return: dest - concatenated strings for both src n bytes and dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m] = src[i];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}

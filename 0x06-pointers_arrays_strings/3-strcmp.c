#include "main.h"
/**
  *_strcmp - A function that compares two strings
  *
  *@s1: First string to compare
  *@s2: Second string to compare
  *
  *Return: returns 15 if s1 is greater than s2
  *returns -15 if s1 is less than s2
  *returns 0 if both strings are equal
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
	return (0);
}

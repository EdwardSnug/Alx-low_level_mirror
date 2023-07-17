#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_dog - A function that prints our struct dog elements
  *
  *@d: Our record variable for our data structure(struct dog)
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
		printf("Name: (nil)");
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}

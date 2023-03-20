#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
 /**
  *struct dog - dog is a structure to stor name and owner
  *@name: dog name
  *@owner: dog owner
  *@age:dog age
  *Description: struct dog is new data type which store dog information
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif

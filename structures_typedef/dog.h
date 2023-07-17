#ifndef DOG_H
#define DOG_H
/**
* struct dog - data for dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: data for dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif

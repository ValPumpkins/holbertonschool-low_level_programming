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
} dog;
/**
 * Others prototypes
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
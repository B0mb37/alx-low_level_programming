#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description:The name age and owner of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;


#endif

#ifndef dog_h_
#define dog_h_

/**
 * struct dog - data type including dog info
 * @name: the dogs name
 * @age: age of dog
 * @owner: name of dogs owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

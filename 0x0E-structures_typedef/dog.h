#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
  * struct dog - details of dog
  * @name: doggo name
  * @age: doggo age
  * @owner: doggo human friend
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

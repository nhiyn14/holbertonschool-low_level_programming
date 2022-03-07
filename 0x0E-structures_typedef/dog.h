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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif

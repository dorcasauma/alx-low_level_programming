#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  represents a dog with its name, age, and owner information.
 * struct dog_t - Typedef for the struct dog type.
 *@name: the name of the dog.
 *@age: the age of the dog.
 *@owner: the owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
} dog;
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

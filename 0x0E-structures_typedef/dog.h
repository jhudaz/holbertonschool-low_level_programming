#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - first strut for dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 *
 * Description: Longer description
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

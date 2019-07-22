
/**
 * struct dog - first strut for dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 *
 * Description: Longer description
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
}dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
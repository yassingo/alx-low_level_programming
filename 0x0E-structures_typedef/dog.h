#ifndef DOG_H
#define DOG_H

struct dog
{
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */


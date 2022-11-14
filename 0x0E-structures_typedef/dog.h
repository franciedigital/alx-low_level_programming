#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 *  * struct dog - a structure of dog
 *   * @name: name of dog
 *    * @age: age of dog
 *     * @owner: name of dog owner
 *      *
 *       * Description: the structure of a dog with dog name, age
 *       and age of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



#endif

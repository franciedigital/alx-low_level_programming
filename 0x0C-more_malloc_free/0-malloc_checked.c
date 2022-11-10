#include "main.h"

/**
 *  * malloc_checked - allocates a memory using malloc
 *   * @b: size
 *    *
 *     * Return: pointer to the allocated memor
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

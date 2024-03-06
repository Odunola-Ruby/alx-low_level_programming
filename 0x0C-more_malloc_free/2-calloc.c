#include "main.h"

/**
 * _calloc - allocates memory using malloc, and initializes it to zero
 * @size: size of the memory block to be allocated
 * @nmemb: number of elements
 *
 * Return: pointer to the address of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *a;
    unsigned int b;

    if (nmemb == 0 || size == 0)
        return (NULL);
    a = malloc(nmemb * size);
    if (a == NULL)
	    return (NULL);
    for (b = 0; b < (nmemb * size); b++)
            a[b] = 0;
        return (a);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: nb to copy
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory prev allocated
* @old_size: size in bytes of allocated space for ptr
* @new_size: new size in bytes of the new memory bock
* Return: new pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *copy_ptr;
	unsigned int copy_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	copy_ptr = malloc(new_size);

	if (copy_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
	{
		copy_size = old_size;
	}
	else
	{
		copy_size = new_size;
	}

	_memcpy(copy_ptr, ptr, copy_size);

	free(ptr);

	return (copy_ptr);
}

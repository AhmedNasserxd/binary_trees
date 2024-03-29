#include "binary_trees.h"

/**
 * array_to_avl - to create an AVL from an array
 * @array: array to use
 * @size: size of the array used
 *
 * Return: a pointer to the node's root
 *         NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}

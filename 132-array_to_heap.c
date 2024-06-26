#include "binary_trees.h"

/**
 * array_to_heap - to create a MB Heap tree
 * @array: pointer to the array's first element
 * @size: the number of elements
 *
 * Return: a pointer to the node's root
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}

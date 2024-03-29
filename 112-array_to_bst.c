#include "binary_trees.h"

/**
 * array_to_bst - to create a BST from an array
 * @array: pointer to use
 * @size: number of elements to use
 * Return: A pointer to node's root of created BST
 *         NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}

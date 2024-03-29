#include "binary_trees.h"

/**
 * bst_search - to look for a value in BST
 * @tree: pointer to use
 * @value: the value to use
 * Return: A pointer to the node containing "value"
 *         NULL if no match is found or the tree is NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}

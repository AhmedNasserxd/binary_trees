#include "binary_trees.h"

/**
 * binary_tree_size - to evaluate the size of binary tree
 * @tree: tree to use
 *
 * Return: size of the tree
 *         0 when tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

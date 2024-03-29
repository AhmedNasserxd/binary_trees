#include "binary_trees.h"

/**
 * binary_tree_is_full - to see if a binary tree is complete
 * @tree: pointer to use
 *
 * Return: 1 if the tree is complete
 *         0 if tree is NULL or not complete    
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

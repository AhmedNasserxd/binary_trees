#include "binary_trees.h"

/**
 * binary_tree_is_bst - to see if a binary tree is valid for search
 * @tree: pointer to use
 *
 * Return: 1 if tree is valid for search
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - to see if a binary tree is valid for search
 * @tree: pointer to use
 * @min: Lower bound of checked nodes
 * @max: Upper bound of checked nodes
 *
 * Return: 1 if tree is a valid for search
 *         0 otherwise
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
}

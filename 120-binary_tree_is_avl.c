#include "binary_trees.h"

/**
 * binary_tree_is_avl - to see if a binary tree is an AVL
 * @tree: pointer to the node's root
 *
 * Return: 1 if tree is AVL
 *         0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (btia_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btia_helper - helper to see if a binary tree is an AVL
 * @tree: pointer to the node's root
 * @min: minimum value required
 * @max: maximum value required
 *
 * Return: 1 if tree is AVL
 *         0 otherwise
 */
int btia_helper(const binary_tree_t *tree, int min, int max)
{
	int path_l, path_r;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	path_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	path_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(path_l - path_r) > 1)
		return (0);

	return (btia_helper(tree->left, min, tree->n - 1) &&
		btia_helper(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_height - to evaluate the height of a binary tree
 * @tree: tree to use
 *
 * Return: height of the tree
 *         0 when tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

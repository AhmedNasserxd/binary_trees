#include "binary_trees.h"

/**
 * binary_tree_is_complete - to see if a binary tree is complete
 * @tree: pointer to use
 *
 * Return: 1 if the tree is complete
 *         0 if tree is NULL or not complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - to see if a binary tree is complete
 * @tree: pointer to use
 * @index: node index to use
 * @size: number of nodes to use
 *
 * Return: 1 if the tree is complete
 *         0 if tree is NULL or not complete
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - to evaluate the size of a binary tree
 * @tree: tree to use
 *
 * Return: size of the tree
 *         0 when tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

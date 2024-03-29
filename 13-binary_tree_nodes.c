#include "binary_trees.h"

/**
 * binary_tree_nodes - to assess the nodes with at least 1 child
 * @tree: tree to use
 *
 * Return: number of nodes counted
 *         0 when tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
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

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - to assess the leaves in a binary tree
 * @tree: tree to use
 *
 * Return: number of leaves
 *         0 when tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

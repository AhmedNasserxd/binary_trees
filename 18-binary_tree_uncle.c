#include "binary_trees.h"

/**
 * binary_tree_uncle - to search for the uncle of a node
 * @node: pointer to use
 *
 * Return: pointer to the uncle node
 *         NULL if the parent or node are NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - to search for the sibling of a node
 * @node: pointer to use
 *
 * Return: pointer to the sibling node
 *         NULL if the parent or node are NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

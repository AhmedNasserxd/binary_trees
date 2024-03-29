#include "binary_trees.h"

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

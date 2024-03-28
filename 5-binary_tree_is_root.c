#include "binary_trees.h"

/**
 * binary_tree_is_root - to check if it is a root
 * @node: node to use
 *
 * Return: 1 if node is a root
 *         0 if node is NULL or not a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}

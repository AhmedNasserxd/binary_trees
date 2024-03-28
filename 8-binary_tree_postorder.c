#include "binary_trees.h"

/**
 * binary_tree_postorder - to check through a binary tree with post-traverse
 * @tree: tree to use
 * @func: pointer to use
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

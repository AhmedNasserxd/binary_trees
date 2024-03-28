#include "binary_trees.h"

/**
 * binary_tree_preorder - to check through a binary tree with pre-traversal
 * @tree: tree to use
 * @func: pointer to use
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

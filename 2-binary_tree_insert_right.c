#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node
 *                            as the right child of a parent node
 * @parent: Pointer to the parent node
 *          where the right child will be inserted
 * @value: Value to store in
 *
 * Return: Pointer to the newly created node
 *         NULL if parent is NULL and on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}

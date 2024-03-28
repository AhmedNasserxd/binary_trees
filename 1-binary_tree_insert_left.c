#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of a parent node
 * @parent: Pointer to the parent node where the left child will be inserted
 * @value: Value to store
 *
 * Return: Pointer to the newly created node
 *         NULL if parent is NULL or failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}

#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right of a binary tree node
 * @parent: Parent node
 * @value: Value stored in the new node
 *
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

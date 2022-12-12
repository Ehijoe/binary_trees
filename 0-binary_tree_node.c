#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_node - Create a node of a binary tree
 * @parent: Parent of the new node
 * @value: Value stored in the node
 *
 * Return: Pointer to the new node or NULL on error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	return (new);
}

#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: The node to find the uncle of
 *
 * Return: The uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	node = node->parent;
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

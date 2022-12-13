#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node of a binary tree is the root node
 * @node: The node to check
 *
 * Return: 1 if it is a root node and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}

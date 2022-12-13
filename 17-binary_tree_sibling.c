#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_sibling - Get the sibling of a node in a tree
 * @node: Node to get the sibling of
 *
 * Return: Pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

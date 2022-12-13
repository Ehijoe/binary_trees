#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_depth - Find the depth of a node in a binary tree
 * @tree: Node whose depth to find
 *
 * Return: The depth of the node in the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

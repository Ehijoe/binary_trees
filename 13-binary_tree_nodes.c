#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least one child
 * @tree: The root node of the child
 *
 * Return: The number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}

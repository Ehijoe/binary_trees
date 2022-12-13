#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_size - Count the nodes in a binary tree
 * @tree: The root node of the tree
 *
 * Return: The number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left)
		+ binary_tree_size(tree->right));
}

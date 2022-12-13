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

/**
 * binary_tree_is_perfect - Check if a tree is perfect
 * @tree: Root node
 *
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
	{
		if (binary_tree_size(tree->left) ==
		    binary_tree_size(tree->right))
			return (1);
	}
	return (0);
}

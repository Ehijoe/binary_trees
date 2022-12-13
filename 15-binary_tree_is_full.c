#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Root node
 *
 * Return: 1 if full. 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_full(tree->left) &&
	    binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}
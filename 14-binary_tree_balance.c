#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_height - Find the height of a binary tree
 * @tree: The root node of the tree
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h, max_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	max_height = (left_h > right_h) ? left_h : right_h;
	return (max_height + 1);
}

/**
 * binary_tree_balance - Calculate the balance factor of a tree
 * @tree: The root node of the tree
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		return (-1 * binary_tree_height(tree));
	if (tree->right == NULL)
		return (binary_tree_height(tree));
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}

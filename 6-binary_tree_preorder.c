#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a tree in the using preorder traversal
 * @tree: Root of the tree
 * @func: Function to run on each node of the tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

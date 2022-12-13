#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a tree using inorder traversal
 * @tree: Root of the tree
 * @func: Function to run on each node of the tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

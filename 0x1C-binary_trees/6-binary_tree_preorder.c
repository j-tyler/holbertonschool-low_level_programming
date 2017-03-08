#include "binary_trees.h"

/**
 * binary_tree_preorder - Operate through the binary tree
 * @tree: tree to operate through
 * @func: function to run on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - Operate through the binary tree
 * @tree: tree to operate through
 * @func: function to run on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;


	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

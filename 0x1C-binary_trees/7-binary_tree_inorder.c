#include "binary_trees.h"

/**
 * binary_tree_inorder - Operate through the binary tree
 * @tree: tree to operate through
 * @func: function to run on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;


	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}

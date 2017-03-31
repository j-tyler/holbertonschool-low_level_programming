#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: tree to measure
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;

	if (l > r)
		return (l);
	else
		return (r);
}

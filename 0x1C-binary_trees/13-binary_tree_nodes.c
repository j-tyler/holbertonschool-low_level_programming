#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: tree to operate on
 * Return: Number of nodes with 1+ child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

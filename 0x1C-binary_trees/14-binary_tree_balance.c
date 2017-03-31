#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: tree to operate on
 * Return: Balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	if (tree->left)
		balance = binary_tree_balance(tree->left) + 1;
	else
		balance = 0;
	if (tree->right)
		balance += binary_tree_balance(tree->right) - 1;

	return (balance);
}

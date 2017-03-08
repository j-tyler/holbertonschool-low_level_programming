#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left child node
 * @parent: parent of node to be inserted
 * @value: value to store in node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (new_node->parent->left != NULL)
	{
		new_node->left = new_node->parent->left;
		new_node->left->parent = new_node;
	}
	new_node->parent->left = new_node;

	return (new_node);
}

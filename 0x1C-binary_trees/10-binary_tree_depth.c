#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node
 * @node: node to measure
 * Return: Depth of node given
 */
size_t binary_tree_depth(const binary_tree_t *node)
{

	if (node->parent != NULL)
		return (binary_tree_depth(node->parent) + 1);
	else
		return (0);
}

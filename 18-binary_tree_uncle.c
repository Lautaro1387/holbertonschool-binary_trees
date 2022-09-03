#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: The node to find the uncle.
 * Return: binary_tree_t.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	binary_tree_uncle(node->parent);
	return (0);
}

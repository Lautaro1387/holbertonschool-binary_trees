#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: The quantity, otherwhise 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;

	if (!tree)
		return 0;
	if (!tree->left && !tree->right)
		return (0);
	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);
	return(nodes);
}

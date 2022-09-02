#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a BT is full
 * @tree: pointer to the root node
 * Return: 1 if is FULL, 0 otherwhise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: The rrot node of the tree to check.
 * Return: int.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->right) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

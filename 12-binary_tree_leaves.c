#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: The root node of the tree to count the number of leaves.
 * Return: Function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		count += binary_tree_leaves(tree->left);
	if (tree->right)
		count += binary_tree_leaves(tree->right);
	return (count);
}

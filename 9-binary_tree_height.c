#include "binary_trees.h"

/**
 * size_t binary_tree_height - mesures the height of a binary tree
 * @tree: pointer to the root node of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (!tree->left && !tree->right)
		return (0);

	if (tree->left)
		h_l = 1 + binary_tree_height(tree->left);
	if (tree->right && !tree->left)
		h_l++;
	if (tree->right)
		h_r = 1 + binary_tree_height(tree->right);
	if (tree->left && !tree->right)
		h_r++;
	if (h_l > h_r)
		return (h_l);
	return (h_r);
}

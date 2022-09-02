#include "binary_trees.h"

/**
 * binary_tree_height - mesures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: The height, otherwhise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);

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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root
 * Return: The size, 0 otherwhise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_full - check if a BT is full
 * @tree: pointer to the root node
 * Return: 1 if is FULL, 0 otherwhise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t Size = 0, Height = 0;

	Size = binary_tree_size(tree);
	Height = binary_tree_height(tree);

	if ((2 * Height) + 1 == Size)
		return (1);
	return (0);
}

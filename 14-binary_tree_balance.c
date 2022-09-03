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
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: The root node of the tree to measure the balance factor.
 * Return: int.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_left, balance_right;

	if (!tree)
		return (0);
	if (tree->left)
	{
		balance_left = binary_tree_height(tree->left) + 1;
	}
	else
	{
		balance_left = binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		balance_right = binary_tree_height(tree->right) + 1;
	}
	else
	{
		balance_right = binary_tree_height(tree->right);
	}
	return (balance_left - balance_right);
}

#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: The root node of the tree to measure the balance factor.
 * Return: int.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_left = 0, balance_right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree)
	{
		balance_left = binary_tree_balance(tree->left);
		balance_right = binary_tree_balance(tree->right);
	}
	return (balance_left + balance_right);
}

#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree using in-order traversal
 * @tree: pointer to root
 * func(int): pointer to a function to call for each node, int is value of node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}

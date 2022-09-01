#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node
 * in a binary tree.
 * @tree: The node to measure the depth.
 * Return: size_t.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
	{
		if (tree->parent)
		{
			return (binary_tree_depth(tree->parent) + 1);
		}
	}
	return (0);
}

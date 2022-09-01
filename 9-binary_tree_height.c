#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: the height as a size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	binary_tree_t *aux1 = NULL;
	
	if (!tree)
		return (0);
	while (1)
	{
		if (tree->left)
		{
			aux1 = tree->left; 
			while (aux1)
			{
				height++;
				if (aux1->left)
					aux1 = aux1->left;
				else
					break;
			}
			if (aux1->right)
				height++;
			break;
		}
		if (tree->right)
		{
			aux1 = tree->right;
			while (aux1)
			{
				height++;
				if (aux1->right)
					aux1 = aux1->right;
				else
					break;
			}
			if (aux1->left)
				height++;
		}
		break;
	}
	return (height);
}

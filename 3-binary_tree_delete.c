#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *aux = NULL;

	aux = tree;
	while (tree->left->left || tree->left->right)
	{
		while (aux->left)
			aux = aux->left;
		if (aux->right == NULL)
			aux = aux->parent;
		if (aux->left)
		{
			free(aux->left);
			aux->left = NULL;
		}
		if (aux->right)
		{
			free(aux->right);
			aux->right = NULL;
		}
		aux = tree;
	}
	aux = tree;
	while (tree->right->left || tree->right->right)
	{
		while (aux->right)
			aux = aux->right;
		if (aux->left == NULL)
			aux = aux->parent;
		if (aux->right)
		{
			free(aux->right);
			aux->right = NULL;
		}
		if (aux->left)
		{
			free(aux->left);
			aux->left = NULL;
		}
		aux = tree;
	}
	free(tree->left);
	free(tree->right);
	free(tree);
}

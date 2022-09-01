#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree
 */

void right_delete(binary_tree_t **);
void left_delete(binary_tree_t **);

void binary_tree_delete(binary_tree_t *tree)
{
	if ((!tree->left) && (!tree->right))
		free(tree);
	if (tree == NULL)
		return;
	right_delete(&tree);
	left_delete(&tree);
	free(tree->left);
	free(tree->right);
	free(tree);

}
/**
 * right_delete - delete right side of the tree
 * @tree: pointer to pointer to root node
 */
void right_delete(binary_tree_t **tree)
{
	binary_tree_t *aux = NULL;

	aux = *tree;
	while ((*tree)->left->left || (*tree)->left->right)
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
		aux = *tree;
	}
}
/**
 * left_delete - delete left side of the tree
 * @tree: pointer to pointer to root node
 */
void left_delete(binary_tree_t **tree)
{
	binary_tree_t *aux = NULL;

	aux = *tree;
	while ((*tree)->right->left || (*tree)->right->right)
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
		aux = *tree;
	}
}

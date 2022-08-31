#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: value of node to be inserted
 * Return: pointer to new_node or NULL if fails or parent is NULL
 * Note - if parent already has a left-child, the new node must take its place
 * and  the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL, *aux = NULL;

	if (parent == NULL)
		return (NULL);
	left_node = binary_tree_node(parent, value);
	if (left_node)
	{
		aux = parent->left;
		if (aux)
		{
			aux->parent = left_node;
			left_node->left = aux;
			parent->left = left_node;
		}
		if (aux == NULL)
			parent->left = left_node;
	}
	return (left_node);
}

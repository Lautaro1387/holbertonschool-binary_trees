#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that insert a node the right-child
 * of another node.
 * @parent: right-child.
 * @value: newnode.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL, *aux = NULL;

	if (!parent)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (right_node)
	{
		aux = parent->right;
		if (!aux)
			parent->right = right_node;
		else
		{
			aux->parent = right_node;
			right_node->right = aux;
			parent->right = right_node;
		}
	}
	return (right_node);
}

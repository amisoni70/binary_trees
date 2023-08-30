#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: data inside the node
 * Return: the new node or NULL on failure
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	new->n = value;
	return (new);
}

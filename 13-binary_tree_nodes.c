#include "binary_trees.h"

/**
  * binary_tree_nodes - counts the nodes with at least
  *						1 child in a binary tree
  * @tree: pointer to the root node of the tree
  *			to count the number of nodes
  * Return: 0 if the tree NULL else number of nodes with 1 child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, nodes;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
		nodes = left_nodes + right_nodes + 1;
		return (nodes);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	nodes = left_nodes + right_nodes;

	return (nodes);
}

#include "binary_trees.h"

/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree : pointer to the root node of the tree
			to count the number of nodes
  * Return : 1 if full els 0 if the tree NULL or node has one child
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node, right_node, full;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return(1);

	if (tree->left && tree->right)
	{
		left_node = binary_tree_is_full(tree->left);
		right_node = binary_tree_is_full(tree->right);
		full = left_node && right_node;
		return (full);
	}

	return (0);
}

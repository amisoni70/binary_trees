#include "binary_trees.h"

/**
  * binary_tree_leaves - count the leaves in a binary tree
  * @tree: a pointer to the root node of the tree to count num leaves
  * Return: 0 if the tree NULL else size of tree
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	leaves = left_leaves + right_leaves;

	return (leaves);
}

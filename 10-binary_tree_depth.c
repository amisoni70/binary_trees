#include "binary_trees.h"

/**
  * binary_tree_depth - measures the depth of a binary tree
  * @tree:	a pointer to the node to measure the depth
  * Return: 0 if the tree NULL else height of tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}

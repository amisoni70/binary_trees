#include "binary_trees.h"

/**
 * binary_tree_delete - deletes (frees) an entire binary tree using recursion
 * @tree: tree that needs to be deleted
**/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}

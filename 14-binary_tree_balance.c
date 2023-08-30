#include "binary_trees.h"

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree : a pointer to the root node of the tree to traverse
  * Return : 0 if the tree NULL else height of tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height, height;

    if (!tree)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    height = (left_height > right_height ? left_height : right_height) + 1;

    return (height);
}

/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree : a pointer to the root node of the tree to traverse
  * Return : 0 if the tree NULL else  balance factor of tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, bal_factor;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	bal_factor = left_height - right_height;

	return (bal_factor);
}

#include "binary_trees.h"

/**
  * binary_tree_depth - measures the depth of a binary tree on left
  * @tree: a pointer to the root node of the tree to traverse
  * Return: 0 if the tree NULL else height of tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree)
	{
		tree = tree->left;
		depth++;
	}

	return (depth);
}

/**
  * is_perfect_recursive - recursively checks if a binary tree is perfect
  * @tree: pointer to the root node of the tree to check
  * @depth: depth of the tree
  * @level: current level being checked
  * Return: 1 if perfect else 0 if the tree is NULL or not perfect
  */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	int perfect;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	perfect = is_perfect_recursive(tree->left, depth, level + 1) &&
				is_perfect_recursive(tree->right, depth, level + 1);
	return (perfect);
}

/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: pointer to the root node of the tree to check
  * Return: 1 if perfect, else 0 if the tree is NULL or not perfect
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_depth(tree);

	if (!tree)
		return (0);

	return (is_perfect_recursive(tree, depth, 0));
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary is full
 * @tree: pointer to the root node to check
 *
 * Return: 1 if tree is complete else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left & right);
}

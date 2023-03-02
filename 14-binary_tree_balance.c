#include "binary_trees.h"

/**
 * max - finds maximum height between two paths in a tree
 * @left: length of left path
 * @right: length of right path
 *
 * Return: max between the two paths
 */
int max(int left, int right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (max(left, right) + 1);
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node of the tree to measure balance factor
 *
 * Return: balance factor else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}

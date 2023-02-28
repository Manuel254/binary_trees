#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of the created node
 * @value: value to be inserted to created node
 *
 * Return: pointer to created node else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tempNode == NULL)
		return (NULL);

	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}

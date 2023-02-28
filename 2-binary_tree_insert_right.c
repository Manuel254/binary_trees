#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to be inserted to created node
 *
 * Return: pointer to created node else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current = NULL;
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		current = parent->right;
		parent->right = newNode;
		newNode->right = current;
		current->parent = newNode;
	}
	return (newNode);
}

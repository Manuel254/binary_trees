#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to be inserted to created node
 *
 * Return: pointer to created node else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current = NULL;
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (parent == NULL || newNode == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = newNode;
	else
	{
		current = parent->left;
		parent->left = newNode;
		newNode->left = current;
		current->parent = newNode;
	}
	return (newNode);
}

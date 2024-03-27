#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of node.
 * @parent: the parent node pointer
 * @value: the value of the node.
 *
 * Return: Pointer to the node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	parent->left = node;

	return (node);
}

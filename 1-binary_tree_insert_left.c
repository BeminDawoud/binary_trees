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
	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}

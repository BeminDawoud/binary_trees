#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of node.
 * @parent: the parent node pointer
 * @value: the value of the node.
 *
 * Return: Pointer to the node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}

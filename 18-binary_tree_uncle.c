#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node.
 * @node: the node pointer
 *
 * Return: Pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	if (node->parent->parent->right == node->parent)
		uncle = node->parent->parent->left;
	return (uncle);
}

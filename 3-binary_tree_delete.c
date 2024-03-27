#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of node.
 * @tree: the root node pointer
 *
 * Return: Pointer to the node.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	return;
}

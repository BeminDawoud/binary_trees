#include "binary_trees.h"

/**
 * binary_tree_nodes -  measures the nodes of a binary tree.
 * @tree: the root node pointer
 * Return: nodes of the tree, 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0, nodes_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}

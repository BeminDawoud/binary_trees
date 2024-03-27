#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a binary tree.
 * @tree: the root node pointer
 * Return: Depth of the tree, 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_l = 0, depth_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		depth_l = 1 + binary_tree_depth(tree->left);

	if (tree->right)
		depth_r = 1 + binary_tree_depth(tree->right);

	return ((depth_l > depth_r) ? depth_l : depth_r);
}

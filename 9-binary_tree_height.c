#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree.
 * @tree: the root node pointer
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	static size_t height_l, height_r;

	if (tree == NULL)
		return ((height_l > height_r) ? height_l : height_r);

	if (tree->left)
	{
		height_l++;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		height_r++;
		binary_tree_height(tree->right);
	}

	return ((height_l > height_r) ? height_l : height_r);
}

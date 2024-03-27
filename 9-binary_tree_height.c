#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree.
 * @tree: the root node pointer
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (height);
	height++;
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
}

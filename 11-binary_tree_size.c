#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree.
 * @tree: the root node pointer
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	static size_t size;

	size = 0;
	if (tree == NULL)
		return (size);
	size++;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

	return (size);
}

#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size of the tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	static size_t size;

	if (tree == NULL)
		return (size);
	size++;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);

	return (size);
}

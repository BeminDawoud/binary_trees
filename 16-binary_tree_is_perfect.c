#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree.
 * @tree: the root node pointer
 * Return: height of the tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	return ((height_l > height_r) ? height_l : height_r);
}

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

/**
 * binary_tree_is_perfect- Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: 1 or 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, full_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	full_size = (2 << height) - 1;

	return (size == full_size);
}
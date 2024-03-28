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
 * binary_tree_balance -  measures the balance factor of a binary tree.
 * @tree: the root node pointer
 * Return: nodes of the tree, 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right, balance;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_left = binary_tree_height(tree->left);
	else
		h_left = -1;

	if (tree->right != NULL)
		h_right = binary_tree_height(tree->right);
	else
		h_right = -1;

	balance = h_left - h_right;
	return (balance);
}

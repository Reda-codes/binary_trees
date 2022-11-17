#include "binary_trees.h"

/**
 * bin_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the  root node of the tree
 * Return: height on success, otherwise 0
 */
int bin_tree_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = 1 + bin_tree_height(tree->left);
	rightHeight = 1 + bin_tree_height(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight);

	return (rightHeight);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = bin_tree_height(tree->left);
	rightHeight = bin_tree_height(tree->right);
	return (leftHeight - rightHeight);
}

#include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the  root node of the tree
 * Return: height on success, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (leftHeight < rightHeight)
		height = rightHeight + 1;
	else
		height = leftHeight + 1;
	return (height);
}

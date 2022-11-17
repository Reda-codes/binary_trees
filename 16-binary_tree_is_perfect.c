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

/**
 * binary_tree_is_perfect - function that checks if a
 * binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if true, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

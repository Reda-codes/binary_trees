#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves
 * in a binary tree
 * @tree: pointer to the root node of the tree to count
 * Return: number of leaf nodes, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		num += 1;
	num += binary_tree_leaves(tree->left);
	num += binary_tree_leaves(tree->right);
	return (num);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with atleast one child, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;
	
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);
	return (1 + leftNodes + rightNodes);
}

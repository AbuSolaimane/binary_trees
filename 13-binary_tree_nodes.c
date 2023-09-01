#include "binary_trees.h"
/**
 * binary_tree_nodes - func
 * @tree: param
 * Return: int
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  numNodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		numNodes += ((tree->left || tree->right) ? 1 : 0);
		numNodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (numNodes);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - test if
 * @node: param
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

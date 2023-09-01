#include "binary_trees.h"

/**
 * binary_tree_sibling - fun
 * @node: param
 * Return: result
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->right)
		return (node->parent->right);
	else
		return (node->parent->left);
}

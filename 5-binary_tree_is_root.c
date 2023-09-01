#include "binary_trees.h"

/**
 * binary_tree_is_root - func
 * @node: param
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}

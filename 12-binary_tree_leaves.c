#include "binary_trees.h"
/**
 * binary_tree_leaves - func
 * @tree: param
 * Return: int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaf = left + right;
		return ((!left && !right) ? leaf + 1 : leaf + 0);
	}
}

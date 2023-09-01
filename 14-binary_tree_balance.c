#include "binary_trees.h"

/**
 * binaryTreeHeight - fun
 * @tree: param
 * Return: num
 */

size_t binaryTreeHeight(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binaryTreeHeight(tree->left) : 1;
			right = tree->right ? 1 + binaryTreeHeight(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - fun
 * @tree: param
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binaryTreeHeight(tree->left));
		right = ((int)binaryTreeHeight(tree->right));
		total = left - right;
	}
	return (total);
}

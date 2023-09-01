#include "binary_trees.h"
/**
 * balance - func
 * @tree: param
 * Return: 0 or 1
 */
int balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + balance(tree->left);
		right = 1 + balance(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - fun
 * @tree: param
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = balance(tree);
		return (result == 0 ? 0 : 1);
	}
}

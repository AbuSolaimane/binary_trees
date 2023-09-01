#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: param
 * @value: param
 * Return: binary
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *myNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	myNode = binary_tree_node(parent, value);
	if (myNode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		myNode->right = parent->right;
		parent->right->parent = myNode;
	}
	parent->right = myNode;
	return (myNode);
}

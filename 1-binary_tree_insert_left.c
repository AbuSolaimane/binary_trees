#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: param
 * @value: param
 * Return: binary
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		myNode->left = parent->left;
		parent->left->parent = myNode;
	}
	parent->left = myNode;
	return (myNode);
}

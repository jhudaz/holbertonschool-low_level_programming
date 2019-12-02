#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int st_value = 0;

	if (!parent->right)
	{
		parent->right = (binary_tree_node(parent, value));
		return (parent);
	}
	else
	{
		st_value = parent->right->n;
		parent->right->n = value;
		parent->right->right = (binary_tree_node(parent->right, st_value));
		return (parent);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int st_value = 0;

	if (!parent->left)
	{
		parent->left = (binary_tree_node(parent, value));
		return (parent);
	}
	else
	{
		st_value = parent->left->n;
		parent->left->n = value;
		parent->left->left = (binary_tree_node(parent->left, st_value));
		return (parent);
	}
}

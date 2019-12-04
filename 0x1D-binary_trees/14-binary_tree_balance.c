#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, total = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);
	total = left - right;
	
	return (total);
}

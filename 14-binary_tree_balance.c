#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the tree
 * Return: 0 on fail, height of highest + 1 on success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
        	left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (left > right ? left : right);
}

/**
 * binary_tree_balance - calculates the difference between left and right trees
 * @tree: pointer to tree
 * Return: value of balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}

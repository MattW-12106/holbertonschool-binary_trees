#include "binary_trees.h"

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

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the tree
 * Return: 0 on fail, height of highest + 1 on success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h) + 1;
}

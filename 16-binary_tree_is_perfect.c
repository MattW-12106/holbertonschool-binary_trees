#include "binary_trees.h"

/**
 * find_depth - finds depth of tree
 * @tree: pointer to tree
 * Return: depth
 */
size_t find_depth(const binary_tree_t *tree)
{
	size_t depth = 0

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - checks if its a perfect tree
 * @tree: pointer to tree
 * @depth: depth
 * @level: level of node
 * Return: 0 or 1 on fail, returns if tree is perfect
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) && is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = find_depth(tree);

	return (is_perfect(tree, depth, 0));
}

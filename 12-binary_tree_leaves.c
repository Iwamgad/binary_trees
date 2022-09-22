#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: returns 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node->left && !node->right) ? 1 : 0);
}

/**
 * binary_tree_leaves- counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the
 * number of leaves
 * Return: returns the number of leaves in binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}

#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree:  is a pointer to the root node of the tree to measure the height
* Return: returns the height or return 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right, height;

	if (tree == NULL)
		return (0);

	depth_left = binary_tree_height(tree->left);
	depth_right = binary_tree_height(tree->right);
	height = ((depth_left > depth_right) ? depth_left : depth_right) + 1;

	return (height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 * Return: returns 1 if perfect otherwise 0 also if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

	return (0);
}

#include "binary_trees.h"

/**
* binary_tree_is_root -  checks if a given node is a root
* @node: is a pointer to the node to check
* Return: 1 if node is a root, otherwise 0 if node is NULL too
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((!node->parent) ? 1 : 0);
}

#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
* Return: pointer to the created node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftNode = NULL;

	if (parent == NULL)
		return (NULL);

	newLeftNode = binary_tree_node(parent, value);

	newLeftNode->left = parent->left;
	if (newLeftNode->left != NULL)
		newLeftNode->left->parent = newLeftNode;

	parent->left = newLeftNode;
	return (newLeftNode);
}

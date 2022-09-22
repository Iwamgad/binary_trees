#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightNode;

	if (parent == NULL)
		return (NULL);

	newRightNode = binary_tree_node(parent, value);

	newRightNode->right = parent->right;
	if (newRightNode->right != NULL)
		newRightNode->right->parent = newRightNode;

	parent->right = newRightNode;
	return (newRightNode);
}

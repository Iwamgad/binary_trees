#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent:  is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: pointer to the binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}

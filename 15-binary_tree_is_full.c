#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If a node has no children, it's a leaf node. */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* If a node has one child, the tree is not full. */
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL))
return (0);

/* Check left and right subtrees recursively. */
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

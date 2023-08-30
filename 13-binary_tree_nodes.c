#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes.
* @tree: Pointer to the root node of the tree to count the nodes.
*
* Return: Number of nodes with at least one child in the tree. If tree is NULL,
* return 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If it's a leaf node, return 0 */
if (tree->left == NULL && tree->right == NULL)
return (0);

/* Recursively count the nodes in the left and right subtrees */
/* Return the sum of nodes in both subtrees plus 1 (current node) */
return (binary_tree_size(tree) - binary_tree_leaves(tree));

}

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
*
* Return: Size of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Add 1 for the current node */
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: Pointer to the root node of the tree to count the leaves.
*
* Return: Number of leaves in the tree. If tree is NULL, return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If it's a leaf node, return 1 */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Recursively count the leaves in the left and right subtrees */
/* Return the sum of leaves in both subtrees */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

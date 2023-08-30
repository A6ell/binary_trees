#include <stdlib.h>
#include "binary_trees.h"

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
size_t left_leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);

/* Return the sum of leaves in both subtrees */
return (left_leaves + right_leaves);
}

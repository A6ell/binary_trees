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
size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);

/* Return the sum of nodes in both subtrees plus 1 (current node) */
return (left_nodes + right_nodes + 1);
}

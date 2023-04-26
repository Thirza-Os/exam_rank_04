#include <unistd.h>
#include <stdio.h>

int search_item(tree *root, int value)
{
    int ret;

    ret = 0;
    if (root == NULL)
        return (0);
    if (value == root->content)
        ret = value;
    else if (value > root->content && root->right)
        search_item(root->right, value);
    else if (value < root->content && root->left)
        search_item(root->left, value);
    return(ret);
    
}
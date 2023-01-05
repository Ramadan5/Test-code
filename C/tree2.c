#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

node *create_tree (int value);
node *create_left (node *root, int value);
node *create_right (node *root, int value);
void print_tree (node *root);
void free_tree (node *root);
int tree_depth_left (node *root);
int tree_depth_right (node *root);

int main(void)
{
    int n;
    printf("How many leafs in the tree? ");
    scanf("%i", &n);
    node *tree = create_tree (2);
    printf("%i", tree -> number);

    for (int i = 0; i < n; i++)
    {
        if (i > tree -> number)
        {
            create_left(tree, i);
        }
        else if (i < tree -> number)
        {
            create_right(tree, i);
        }
    }

    tree_depth_left (tree);
    tree_depth_right (tree);

    print_tree (tree);
    free_tree (tree);
}

node *create_tree (int value)
{
    node *root = malloc(sizeof(node));
    root -> number = value;
    root -> left = NULL;
    root -> right = NULL;
    return root;
}

node *create_left (node *root, int value)
{
    root -> left = create_tree (value);
    return root -> left;
}

node *create_right (node *root, int value)
{
    root -> right = create_tree (value);
    return root -> right;
}

void print_tree (node *root)
{
    if (root != NULL)
    {
        print_tree (root -> left);
        printf("%i\n", root -> number);
        print_tree (root -> right);
    }
}

void free_tree (node *root)
{
    if (root != NULL)
    {
        free_tree (root -> left);
        free_tree (root -> right);
        free (root);
    }
}

int tree_depth_left (node *root)
{
    int l = 0;
    while (root != NULL)
    {
        l++;
        root = root -> left;
    }
    return l;
}

int tree_depth_right (node *root)
{
    int r = 0;
    while (root != NULL)
    {
        r++;
        root = root -> right;
    }
    return r;
}
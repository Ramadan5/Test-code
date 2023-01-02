#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void print_tree(node *root);
void free_tree(node *root);
bool search(node *tree, int number);

int main(void)
{
    node *tree = NULL;

    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    n -> number = 2;
    n -> left = NULL;
    n -> right = NULL;

    tree = n;

    n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }

    n -> number = 1;
    n -> left = NULL;
    n -> right = NULL;

    tree -> left = n;

    n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }

    n -> number = 3;
    n -> left = NULL;
    n -> right = NULL;

    tree -> right = n;

    search(tree, 2);

    print_tree(tree);
    free_tree(tree);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root -> left);
    printf("%i\n", root -> number);
    print_tree(root -> right);
}

void free_tree(node *root)
{
    if (root != NULL)
    {
        free_tree(root -> left);
        free_tree(root -> right);
        free(root);    
    }
    
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (tree -> number > number)
    {
        return search(tree -> right, number);
    }
    else if (tree -> number < number)
    {
        return search(tree -> left, number);
    }
    else
    {
        return true;
    }
}
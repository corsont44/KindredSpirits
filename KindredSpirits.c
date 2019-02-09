//Temple A.Corson IV
//te789951
//Due: 11/6/12


#include <stdio.h>
#include <stdlib.h>
#include "KindredSpirits.h"


int isReflection(node *a, node *b)
{
   //initialize return var
    int status, leftStatus, rightStatus;

    //if the height of the trees are different,
    //they cannot be reflections of each other
    if (height(a) != height(b))
        return status = 0;

    //if both are the empty tree, they must be reflections of each other
    else if ((height(a) == -1) && (height(b) == -1))
        return status = 1;

    //if one tree is empty and the other is not,
    //they cannot be reflections
    //****note: this line is only reached if the above else if statement
    //is false, so a simple or statement will suffice****
    else if ((height(a) == -1) || (height(b) == -1))
        return status = 0;

    //neither tree is the empty tree, and they are equal in height
    //check the values, not reflections if values are not equal
    else
    {
        if (a->data != b->data)
            return 0;
    }

    //iff all these conditions are met, we check the subtrees

    //recursive call, right subtree root of a,
    //must be equal to left subtree root of b
    rightStatus = isReflection(a->right, b->left);

    //recursive call, left subtree root of a,
    //must be equal to right subtree root of b
    leftStatus = isReflection(a->left, b->right);

    //set status equal to 1 if both of the above calls return true
    //set equal to zero if either returns false
    status = (leftStatus == rightStatus)? rightStatus : 0;

   return status;
}

node *makeReflection(node *root)
{








    return ;
}

//helper funcs for kindredSpirits

//max function
long long max(long long a, long long b)
{
    return (a > b)? a : b;
}

long long height(node *root)
{
    //takes a root as input and returns the height as a
    //long long to allow for excessivley large trees
    long long size = 0;

    //height of the empty tree
    if(root == NULL)
        return size = -1;

    //increment height if a single node is present
    size++;

    //set size
    //if both subtrees are empty add 0 instead of -1
    size = size + max(height(root->left), height(root->right));

    return size;
}

    //preorder transversal
    //returns pointer to an array of ints, holding the preorder transversal
int *preorder(node *root)
{
    int *array;

    if (root == NULL)


        //initialize and allocate return array
        // since log n = h , h^2 will be the maximum size of an array holding every
        //value in the tree
    int *array = malloc(sizeof(int) * (height(root) * height(root)));




    return array;
}



int kindredSpirits(node *a, node *b)
{
    //initialize return var
    int status;














    return status;
}

double difficultyRating(void)
{
    return 4.4;
}

double hoursSpent(void)
{
    //4
    return 24.0;
}
























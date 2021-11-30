#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;

};

class bt
{
    node *root , *newNode;

    public:

    bt()
    {
        root = NULL;
        newNode = NULL;
    }

    node *create(int);


};

node* bt:: create(int x)
{

    if(root == NULL)
    {
        root = new  node;
        root-> data = x;
        root -> left = NULL;
        root -> right = NULL;

        return root;

    
    }

    newNode = new node;
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;

}

int main()
{
    bt obj;

    node *r,*c1,*c2, *n;

    //creating the root node and its children

    r = obj.create(2);
    c1 = obj.create(1);
    c2 = obj.create(4);

    r->left = c1;
    r -> right = c2;

    //creating children of children

    //creating children of left child

    n = obj.create(11);
    n->left = NULL;
    n -> right = NULL;
    c1 -> left = n;

    n = obj.create(12);
    n->left = NULL;
    n -> right = NULL;
    c1 -> right = n;

    c1 -> right = n;

    //creating children for right child

    c2 -> left = NULL;

    n = obj.create(3);
    

    n->left = NULL;
    n->right = NULL;

    c2 -> right = n;

    n = NULL;




    

}
#include <iostream>
using namespace std;

/*

preorder =  root     left  right (4,1,5,2,6)

postorder =          left right root (5,2,1,6,4 )

inorder =               left root right (5,1,2,4,6)



        root->4
            /   \
            1    6
           / \
           5  2



*/

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

    void preorder(node *rot);
    void postorder(node *rot);
    void inorder(node *rot);


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


void bt :: preorder(node *rot)
{
    if(rot != NULL)
    {
    cout<<rot->data<<" ";
    }

    if(rot -> left != NULL)
    {
    preorder(rot->left);

    }

    if(rot -> right != NULL)
    {
    
    preorder(rot -> right);

    }
    return;
    
}

void bt:: postorder(node *rot)
{
    if(rot -> left != NULL)
    {
        postorder(rot -> left);
    }

    if(rot -> right != NULL)
    {
        postorder(rot -> right);

    }

    cout<< rot ->data << " ";
    return;


   



}

void bt :: inorder(node *rot)
{
    if(rot -> left != NULL)
    {
        inorder(rot -> left);
    }

    cout << rot -> data<<" ";

    if(rot -> right != NULL)
    {
        inorder( rot -> right);
    }

    

    return;

    


    


   
    
    
   
}

int main()
{
    bt obj;

    node *r,*c1,*c2, *c3, *c4;

    r = obj.create(4);
    c1 = obj.create(1);
    c2 = obj.create(6);
    c3 = obj.create(5);
    c4 = obj.create(2);

    r -> left = c1;
    r -> right = c2;

    c1 -> left = c3;
    c1 -> right = c4;

    c2 -> right = NULL;
    c2 -> left = NULL;
    //the tree is made 

    obj.preorder(r);
    cout<< endl; // preorder traversal

    obj.postorder(r);
    cout<<endl; //postorder traversal

    obj.inorder(r); // inorder traversal

    cout<<endl;

    




    

    




    

}
#include <iostream>
using namespace std;

struct node 
{
    int info;
    node *left, *right;

};


class BST 
{
    node *root;
    node *newNode;

    public:

    BST()
    {
        root = NULL;
        newNode = NULL;

    }

    void insert(int);
    void search(int, node*);
    void remove(int,node*);
    void trav(node*);
    

};



int main()
{

}
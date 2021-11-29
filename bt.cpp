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
    }

    void create(int);


};

void bt:: create(int x)
{

    if(root == NULL)
    {
        root = new  node;
        root-> data = x;
        root -> left = NULL;
        root -> right = NULL;

    
    }
}

int main()
{

}
#include <iostream>
using namespace std;

class Node
{
private:
    int info;
    Node * left;
    Node *right;
    friend class BST;
};

class BST
{
private:
    Node *root;
    void addtoBST(int ele,Node *root);
    void preOrderTraversal(Node *root);
    void do_inOrderTraversal(Node *root);
    void do_preOrderTraversal(Node *root);
    void do_postOrderTraversal(Node *root);
public:
    BST();
    ~BST();
    void addBST(int ele);
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();

};

BST::BST()
{
    root=NULL;
}

BST::~BST(){}

void BST::addBST(int ele)
{
    addtoBST(ele,root);
}

void BST::addtoBST(int ele ,Node *root)
{
    if (root==NULL)
    {
        root->info=ele;
    }
    else
    {
        if(root->info>ele)
        {
            if (root->left==NULL)
            {
                Node *newNode=new Node();
                newNode->info=ele;
                newNode->left=NULL;
                newNode->right=NULL;
                root->left=newNode;
            }
            else
            {
                addtoBST(ele,root->left);
            }
        }
        else if(root->info<ele)
        {
            if (root->right==NULL)
            {
                Node *newNode=new Node();
                newNode->info=ele;
                newNode->left=NULL;
                newNode->right=NULL;
                root->right=newNode;
            }
            else
            {
                addtoBST(ele,root->right);
            }
        }
    }
}

void BST::postOrderTraversal()
{
    do_postOrderTraversal(root);
}

void BST::preOrderTraversal()
{
    do_preOrderTraversal(root);
}

void BST::inOrderTraversal()
{
    do_inOrderTraversal(root);
}

void BST::do_inOrderTraversal(Node * root)
{
    if (root==NULL) return;
    do_inOrderTraversal(root->left);
    cout<<root->info;
    do_inOrderTraversal(root->right);
}

void BST::do_preOrderTraversal(Node * root)
{
    if (root=NULL) return;
    cout<<root->info;
    do_preOrderTraversal(root->left);
    do_preOrderTraversal(root->right);
}

void BST::do_postOrderTraversal(Node * root)
{
    if (root=NULL) return;
    do_postOrderTraversal(root->left);
    do_postOrderTraversal(root->right);
    cout<<root->info;
}


int main()
{
    BST t1;
    t1.addBST(5);

    t1.addBST(3);
    t1.addBST(4);
    t1.addBST(9);
    t1.addBST(11);
    t1.addBST(2);
    cout<<"Added"<<endl;


    t1.preOrderTraversal();
    t1.postOrderTraversal();
    t1.preOrderTraversal();
    return 0;
}






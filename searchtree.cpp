#include<iostream>
#include<string>
using namespace std;

class node
{
    public:
        string info;
        node *leftchild;
        node *rightchild;
        //construotor for node class
        node(string i, node *l=NULL, node *r)
        {
            info=i;
            leftchild=l;
            rightchild=r;
        }
};

class binaryTree
{
    public:
    node *root; //Initially root is null
    binaryTree()
    {
        root=NULL;
    }

    //insert a node in the binary search tree
    void insert(string element)
    {
        node *newnode=new node(element, NULL, NULL);
        
        
    }
}   


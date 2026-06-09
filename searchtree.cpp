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


#include<iostream>
#include "treeNode.h"
using namespace std;

void print(treeNode<int>* root)
{
    if(root==nullptr)
        return;

    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
        cout<<root->children[i]->data<<",";

    cout<<endl;
     for(int i=0;i<root->children.size();i++)
            print(root->children[i]);
}

treeNode<int>* takeIn()
{
    int rootData,n;
    cout<<"enter data"<<endl;
    cin>>rootData;
    treeNode<int>* root=new treeNode<int>(rootData);

    cout<<"\nEnter number of children"<<endl;
    cin>>n;
    while(n>0)
    {
        treeNode<int>*child=takeIn();
        root->children.push_back(child);
        n--;
    }
 return root;
}

int main()
{
    /*treeNode<int> *root= new treeNode<int>(1);
    treeNode<int> *node1= new treeNode<int>(2);
    treeNode<int> *node2= new treeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
*/
treeNode<int>*root=takeIn();
    print(root);
return 0;
}

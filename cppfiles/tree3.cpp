#include<iostream>
#include "treeNode.h"
#include<queue>
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

treeNode<int>* takelevel()
{
    int rootData,n;
    cout<<"enter data"<<endl;
    cin>>rootData;
    treeNode<int>* root=new treeNode<int>(rootData);

    queue <treeNode<int>*> pendingNodes;
    pendingNodes.push(root);  //push krdia data ko

    while(pendingNodes.size()!=0)
    {
     treeNode<int>* front =pendingNodes.front();
     pendingNodes.pop();
     cout<<"Enter number of children of "<<front->data<<endl;
     int numChild;
     cin>>numChild;
     for(int i=0;i<numChild;i++)
     {
         int childData;
         cout<<"enter "<<i<<"th child of "<<front->data<<endl;
         cin>>childData;
         treeNode<int>*child=new treeNode<int>(childData);
         front->children.push_back(child);
         pendingNodes.push(child);
     }
    }
return root;
}

int main()
{
treeNode<int>*root=takelevel();
    print(root);
return 0;
}

#include<iostream>
#include<string>

using namespace std;

struct node
{
    string data;
    int nodenumber;
    string nodeid;
    string referencenodeid;
    string genesisreferencenodeid;
    node *childreferencenodeid[10];
    node *parent;
    node(string xyz,int val)
    {
        data=xyz;
        nodenumber=val;
    }
};

node* newgenisisnode(string info,int value)
{
  node* root =new node(info,value);
  for(int i=0;i<10;i++)
    root->childreferencenodeid[i]=NULL;
  root->parent=NULL;
  return root;
}


int k=0;

int main()
{
    int i=0,x;
    string temp;
    int val;
    node *genroot=newgenisisnode("A",10); //Creation of GENESIS node
    cout<<endl<<"Enter the no. of children you need ?";
    cin>>x;
    while(i<x)
    {
        cin>>temp;
        cin>>val;
        node *xyzz=new node(temp,val);
        for(int i=0;i<10;i++)
            xyzz->childreferencenodeid[i]=NULL;
        xyzz->data=temp;
        xyzz->nodenumber=val;
        genroot->childreferencenodeid[k]=xyzz;
        k++;
        i++;
    }

}

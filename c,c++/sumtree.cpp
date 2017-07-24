#include <iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * before;
};

node * insert(int number, node * nodes)
{
    if(nodes==NULL)
    {
        nodes = (struct node *) malloc(sizeof(struct node));
        nodes->data = number;
        nodes->next=NULL;
        nodes->before=NULL;
        cout<<"\n inserted"<<nodes->data;
        
    }
    else
    {
        nodes->next = insert(number,nodes->next);
        nodes->next->before=nodes;
        cout<<"\n before: "<<nodes->next->before->data;
    }
    
    return nodes;
}


node * change(node * nodes )
{
    struct node * temp = NULL, * tempRev = NULL;
    temp = (struct node *) malloc(sizeof(struct node));
    tempRev = (struct node *) malloc(sizeof(struct node));
    temp = nodes;
    tempRev = nodes;
    cout<<"\n nodes: "<<nodes->data;
    do
    {
    	
    	tempRev = tempRev->next;
    	cout<<"\n nodes: "<<tempRev->data;
	}while(tempRev->next!=NULL);
	
	cout<<"\n nodes: "<<tempRev->data;
	cout<<"\n temp"<<nodes->data;
	while(tempRev->data !=nodes->data)
    {
    	nodes->data =  tempRev->data - nodes->data ;
    	cout<<"\n changed: "<<nodes->data;
    	nodes= nodes->next;
    	tempRev = tempRev->before;
    	
    	
	}
	
	return temp;
    
    
}

int main() {
	// your code goes here
	vector<int> values;
	struct node * nodes = NULL;
	int number,i;
	for( i=0;cin.get()!='\n';i++)
	{
	    cin>>number;
	     values.push_back(number);
	     
	}
	

for(int j=0;j<i;j++)
{
    nodes = insert(values[j],nodes);
   
}

nodes = change(nodes);
	do
	{
	    cout<<"\n"<<nodes->data;
	     nodes=nodes->next;
	}while(nodes!=NULL);
	 
	
	return 0;
}

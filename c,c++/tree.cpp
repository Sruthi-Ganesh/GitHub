#include<iostream>
#include<iomanip>
#include<vector>
#include<stdlib.h>
using namespace std;
vector <int> store;
vector < vector < int > > pairs;
bool insert[20]={0};

 struct tree 
{
	int value;
	int cost;
struct	tree * left = NULL;
struct	tree * right = NULL;
};

tree* findRoot(tree * ,int);

void insertTree(tree *root,int i,int j=0 )
{
	
	cout<<"\n insert tree";
	
	int number = store[pairs[i][j]-1];
	
	cout<<endl<<i<<endl<<number<<endl<<pairs[i][j]<<endl<<insert[pairs[i][j]];
	
	if(insert[pairs[i][j]]==0)
{
     cout<<"\n entered";
	if(root==NULL)
	{
		cout<<"Root tends to NULL";
	root = ( struct tree * ) malloc ( sizeof ( struct tree ) );
		
		root->value= number;
		cout<<"\n inserted "<<root->value;
		insert[pairs[i][j]]=1;
		root->left =NULL;
		root->right=NULL;
		
	}
	if(j==1)
	 return;
 if( root->left == NULL)
	{
	insertTree(root->left,i,1);
	return;
	}
	else if(root->right == NULL)
	{
		insertTree(root->right,i,1);
		return;
	}
}
else
{

 root=findRoot(root,number);
 if(root==NULL)
  return;
  else
  insertTree(root,i,1);
}
}

tree* findRoot(tree * root,int no)
{
cout<<"\n find root";


	 if(root != NULL)
	 {
	    if(root->value==no)
		{
	       return root;
        } 
		else 
		{
            tree * foundNode = findRoot(root->left,no);
            if(foundNode == NULL) 
			{
                foundNode = findRoot(root->right,no);
            }
            return foundNode;
         }
    } else 
	{
        return NULL;
    }
}

int main()
{
	int num,noVertex;
	struct tree * node=NULL;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
	cin>>noVertex;
	 store.push_back(noVertex);
}
	
	for(int i=1;i<num;i++)
	{
	vector <int> temp;
	cout<<"\n entering"<<i;
	fflush(stdin);
	 for(int j=1;j<=2;j++)
	 {
	 	
	 cin>>noVertex;
	 temp.push_back(noVertex);
	  
}
pairs.push_back(temp);

}
for(int i=0;i<num-1;i++)
for(int j=0;j<num-1;j++)
  cout<<endl<<pairs[i][j];
	for(int i=0;i<num-1;i++)

	{
		cout<<" \n calling "<< pairs[i][0];
		insertTree(node,i);
	}
	return 0;
}

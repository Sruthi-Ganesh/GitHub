#include<iostream>
#include<iomanip>
#include<vector>
#include<stdlib.h>
#include<string>
using namespace std;
vector <int> store  ;
vector < vector < int > > pairs(0,vector<int>(100));
bool insert[20]={0};
bool inserts[20]={0};
int num;
 struct tree
{
	int value;
	int position;
	struct tree * parent = NULL;
struct	tree * left = NULL;
struct	tree * right = NULL;

};

struct tree * nodes=NULL;
struct tree * node = NULL;
tree* findRoot(tree * ,int,int);
int min(tree * root, int number1, int number2);
tree * insertTree(tree *root,int i,int j=0, int k=0 )
{
static int level = 0;
	cout<<"\n insert tree";

	int number = store[pairs[i][j]-1];

	cout<<endl<<i<<endl<<number<<endl<<pairs[i][j]<<endl<<insert[pairs[i][j]]<<endl;

	if(insert[pairs[i][j]]==0)
{
     cout<<"\n entered";
	if(root==NULL)
	{
		cout<<"\n Root tends to NULL";
	root = ( struct tree * ) malloc ( sizeof ( struct tree ) );

		root->value= number;
		root->position = pairs[i][j];
		cout<<"\n inserted "<<root->value<<setw(2)<<root->position;
		insert[pairs[i][j]]=1;
		root->left =NULL;
		root->right=NULL;

	}
	if(i==0 && j==0)
	  nodes=root;
if(k==0)
{
cout<<"\n the initial root value is"<<root->value;
 if( root->left == NULL)
	{
		cout<<"\n entered left";
		
	root->left = insertTree(root->left,i,1,1);
    root->left->parent=root;
	return root;
	}
	else if(root->right == NULL)
	{
		;
		cout<<"\n the left value"<<root->left->value<<"full";
		cout<<"\n entered right";
	root->right =	insertTree(root->right,i,1,1);
root->right->parent=root;
		return root;
	}

} }
else
{
cout<<"pairs"<<pairs[i][j];
 root=nodes;
 root=findRoot(root,number,pairs[i][j]);
 cout<<endl<<"value:"<<root->value<<endl << i;
 if(root==NULL)
  return NULL;
  else
 root = insertTree(root,i,1);
}
return root;
}


tree* findRoot(tree * root,int no,int l)
{
cout<<"\n find root";

cout<<"\nthe value of no and l is"<<no<<setw(2)<<l;
	 if(root != NULL)
	 {
	    if(root->value==no && root->position==l)
		{
	       return root;
        }
		else
		{
            tree * foundNode = findRoot(root->left,no,l);
            if(foundNode == NULL)
			{
				
                foundNode = findRoot(root->right,no,l);
            }
            return foundNode;
         }
    } else
	{
        return NULL;
    }
}
void printPreOrder(tree * root)

{
	if(root==NULL)
	 return;
	  cout<<"\n value"<<root->value ;
	 if(root->parent!=NULL)
	 cout<<"\n parent"<<root->parent->value;
	
	 printPreOrder(root->left);
	 printPreOrder(root->right);
}

static int stack[30];
static int ij=0;
int findMin(tree * root,int num1, int num2)
{
	
	cout<<"\n the value of num1 and num2"<<num1 << setw(2)<<num2;
	if(root->parent->position == num2)
	{
		cout<<"\n if part";
		stack[ij]=store[num2-1];
		ij++;
		stack[ij]-store[num1-1];
		ij++;
	}
	else
	{
		cout<<"\n else part";
		stack[ij]-store[num1-1];
		ij++;
		stack[ij]=store[num2-1];
		ij++;
	}
	
}
	 
	 



int main()
{
	int noVertex;


	cin>>num;
	for(int i=0;i<num;i++)
	{
	cin>>noVertex;
	 store.push_back(noVertex);
}

	for(int i=0;i<num-1;i++)
	{
	vector <int> temp;
	cout<<"\n entering"<<i;
	fflush(stdin);
	 for(int j=0;j<2;j++)
	 {

	 cin>>noVertex;
	 temp.push_back(noVertex);

}
pairs.push_back(temp);

}
for(int i=0;i<num-1;i++)
for(int j=0;j<2;j++)
  cout<<endl<<pairs[i][j];

	for(int i=0;i<num-1;i++)

	{
		cout<<" \n calling "<< pairs[i][0];
		node=insertTree(node,i);
	}

node = nodes;
printPreOrder(node);
node= nodes;

for(int i=0;i<num-1;i++)
{
	int j=0;
	int value[num-1]={0};
	
	
	int number = store[pairs[i][j]-1];
	int x = pairs[i][j];

	stack[i+1]=0;
	
		node=findRoot(node,number,pairs[i][j]);
		cout<<"\n found node value is"<<node->value<<pairs[i][j];
		if(node!=NULL)
		{
	cout<<"\n minimum element";
		  value[j] = findMin(node,x,pairs[i][++j]);
	}
	
	if(j!=0)
	value[i]=abs(value[j]-value[j-1]);
	cout<<value[i];
	j++;
}
for(int k=0;k<num*2-1;k++)
	{
		cout<<endl<<stack[k];
	}
return 0;
}

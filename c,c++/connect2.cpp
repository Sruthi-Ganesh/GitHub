#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;
int m,n,count=0;
int f[10][10]={0};
void countGraph(int[10][10],int ,int );

int main()
{
	 int a[10][10];
	int i=0,j=0, store=1;
	cin>>m;
	cin>>n;

	for(int i=0;i<m;i++)
    {
    	
    	for(int j=0;j<n;j++)
	     {
	     	cin>>a[i][j];
	     	
	     	
		 }
		 
	}
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
  
countGraph(a,i,j);
if( store<=count)
store=count;
count=0;
}
	cout<<endl<<store;
}

		void countGraph(int a[][10],int i,int j)
		{
			
			
			
			if(a[i][j]!=0 && f[i][j]==0 && (i>=0 && i<m && j>=0 && j<n ) )
			{
				f[i][j]=1;
				count++;
				
				countGraph(a,i+1,j);
				countGraph(a,i,j+1);
				countGraph(a,i+1,j+1);
				countGraph(a,i-1,j-1);
				countGraph(a,i-1,j);
				countGraph(a,i,j-1);
				
				
			}
		
	}
			
			
		

#include<iostream>
#include<iomanip>
using namespace std;
void leftToRight(int a[][100])
{
	
	int sum =0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		sum=0;
			for(int k=j;k<2+j;k++)
			{
				
				
				sum+=a[i][k];
			}
			if(sum==10)
			{
				cout<<endl<<"left to right"<<setw(5)<<a[i][j]<<setw(5)<<a[i][j+1];
			}
		}
	}
}

void topToBottom(int a[][100])
{
		int sum =0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		sum=0;
			for(int k=i;k<2+i;k++)
			{
				
				
				sum+=a[k][j];
			}
			if(sum==10)
			{
				cout<<endl<<"top to bottom"<<setw(5)<<a[i][j]<<setw(5)<<a[i+1][j];
			}
		}
	}
}

void diagonal(int a[][100])
{
		int sum =0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		
			for(int k=j-1; k<2+j;k+=2)
			{
				sum=0;
				if(k>=0 && k<=4)
				{
				sum+=a[i][j];
				sum+=a[i+1][k];
			}
				if(sum==10)
			{
				cout<<endl<<" diagonal"<<setw(5)<<a[i][j]<<setw(5)<<a[i+1][k];
			}
			}
		
		}
	}
}

int main()
{
	int array[100][100];
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>array[i][j];
		}
	}
	
	leftToRight(array);
	topToBottom(array);
	diagonal(array);
	
	
}

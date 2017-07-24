#include<iostream>
#include<iomanip>
using namespace std;
void sort(int [],int);
void occurrence(int a[],int i)
{
	int max=INT_MIN;
	int maxval=0;
	int c[100]={0};
	 
	for( int j=0;j<i;j++)
	{
		int k =a[j];
		c[k]++;
		cout<<endl<<c[k];
		if(c[k]>max)
		{
		
		max = c[k];
		maxval = j;
	}
		
	}
	int *ax ; 
	ax = new int[2];
	int k=0;
	for(int m=0;m<100;m++)
	{
		
		if(c[m]==max)
		{
				
				ax[k]=m;
				cout<<"\n "<< ax[k];
				k++;
		}
}

	for(int i=0;i<k;i++)
	{
		cout<<endl<<ax[i];
	}
	sort(ax,k);

}

void sort(int array [],int length)
{

cout<<endl<<length;
	for(int i=0;i<length-1;i++)
	{
		cout<<"\n entering "<<i;
		for(int j=i+1;j<length;j++)
		{
			cout<<"\n entering j " << j;
			if(array[j]>array[i])
			{
				int temp = array[j];
				array[j]=array[i];
				array[i]=temp;
				cout<<endl<<i<<setw(5)<<j;
			}
		}
	}
	
	for(int i=0;i<length;i++)
	{
		cout<<"Result"<<endl<<array[i];
	}
}

int main()
{
	int array[100];
	int i;
	for(i=0;cin.get()!='\n';i++)
	{
		cin>>array[i];
	}
	occurrence(array,i);
	
	
	return 0 ;
}

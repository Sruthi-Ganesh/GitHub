#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[100];
	int b[100];
	char temp;
	int i=0;
do
{
scanf("%d%c",&a[i],&temp);	
i++;
}while(temp!='\n');
	
	
	
	
	int m=0;
	for(int j=0;j<i-1;j++)
	{
		for(int k=j+1;k<i;k++)
	{
		if(a[j]==a[k])
		{
			cout<<"\n equal 1";
			int l;
			for( l=0;l<m;l++)
			{
			if(b[l]==a[j])
			{
				cout<<"\n equal 2";
			break;
			
		}
		}
		
		if(l==m)
		{
			b[m]=a[j];
			
			m++;
		}
		}
	}
	}
	cout<<endl<<m;
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char   word[100];
	char letter[100];
	int i=0,j=0;

	for(i=0;cin.get()!='\n';i++)
	{

		cin>> word[i];
	}


	fflush(stdin);
		for(j=0;cin.get()!='\n';j++)
	{

		cin>>letter[j];
	}
	fflush(stdin);
	cout<<endl;
	for(int m=0;m<i;m++)
	{
		cout<<m<<word[m];
	}
	cout<<endl;
	for(int n=0;n<j;n++)
	{
		cout<<n<<letter[n];
	}
	
	cout<<endl << i<<endl<<j;
	int n=0;
	for(int m=0;m<i;m++)
	{
		cout<<endl<<"entering loop: " << m;
		if(word[m]== letter[n])
		{
			n++;
		}

		if(n==j)
		{
			for(int l=0;l<j;l++)
			{
			cout<<"\n entering inner loop 1: " << l;
			for(int k=m-j+1;k<i;k++)
			{
				cout<<"\n entering inner loop 2: " << k;
				if(l==j-1)
				{
				
				 word[k]='x';
				
				cout<<endl<<word[k];
					 n=0;
					 m = m-1;
					 break;
				}
				else
				{

			x:word[k]=  word[k+1];
			cout<<endl<<word[k];
}
		}

	}
        
		}
	}
	cout<<endl;
	for(int n=0;n<i;n++)
	{
		cout<<word[n];
	}
	return 0;
}

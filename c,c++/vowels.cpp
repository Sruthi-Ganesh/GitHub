#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

bool isvowel(char a)
{
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char a[100];
	char x;
	cin>>a;
	int length = 0;
	for(int i=0;i<a[i]!='\0';i++)
	{
		length++;
	}
	cout<<"\n"<<length;
	int i=0;
	int j=length-1;
while(i<length/2 && j>=length/2)
			{
			
			if(isvowel(a[i])  && i<length/2 )
			{
				if(isvowel(a[j]))
				{
				
					
				
				cout<<endl<<a[i]<<a[j];
				
				x = a[i];
				a[i]=a[j];
				a[j]=x;
				i++;
				j--;
				
				
			}
			else
			{
			
			j--;
		
			}
		}
			else
			{
			
			i++;
			
		}
		}
	
	
	cout<<"\n"<<a;
	
	return 0;
}

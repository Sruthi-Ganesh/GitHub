#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int  number [100] ;
	int maximum[100];
	int max=INT_MIN;
	int min=INT_MAX;
	int maxValue=0;
	int i=0,j=0;
	
	for(i=0;cin.get()!='\n';i++)
	{
		
		cin>>number[i];
	}
	for(int n=0;n<i;n++)
	{
		printf("%d",number[n]);
	}
while(true)
{
max=INT_MIN;
	for(int n=0;n<i;n++)
	{
		cout<<endl<<"Entering "<<n;;
		if(number[n]>max)
		{
			
		  max=number[n];
		  maxValue = n;
		  cout<<endl<<number[n]<<setw(2)<<maxValue;
		}
	}
		
		
		maximum[j]=number[maxValue];
		j++;
		number[maxValue]=0;
	
	if(j==i/2)
	{
		break;
	}
		
	}
	
	for(int j=0;j<i/2;j++)
	  cout<<endl <<"maximum : " << maximum[j];;
int numbers[100] ;
int k=0,m=0;
	for(int j=0;j<i;)
	{
		if(j%2==0)
		{
			numbers[j] = maximum[k];
			k++;
			j++;
		}
		else
		{
			if(number[j]!=0)
			{
				numbers[j] = number[m];
				m++;
				j++;
			}
		}
	}
	
	for(int j=0;j<i;j++)
	{
		cout<<numbers[j];
	}

}


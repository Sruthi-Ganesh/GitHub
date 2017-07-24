#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int number[100];
	int max = INT_MIN;
	int maxLoc = 0;
	int temp=0;
	int i=0;
	for (i=0;cin.get()!='\n';i++)
	{
		cin>>number[i];
	}
	
	for(int k=0;k<i;k+=2)
	{
	max = 0;
	for (int n=k-1;n<i;n++)
	{
		if(number[n]>max)
		{
			max = number[n];
			maxLoc = n;
		}
}
    temp = number[maxLoc];
     number[maxLoc] = number [k];
     number[k]=temp;

	}
	
	for(int k=0;k<i;k++)
	{
		cout<<setw(3)<<number[k];
	}
}

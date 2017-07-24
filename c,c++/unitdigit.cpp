#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int number;
	int start,end;
	cin>>start;
	cin>>end;
	cin>>number;
	int no;
	no = start%10;
	
int numb = number-no; 

if(numb>=0)
{
	start = start +numb;
}
else
{
	start = 10 + numb + start;
} 


for(int i=start;i<=end;i+=10)
{
	cout<<i<<" ";
}
}

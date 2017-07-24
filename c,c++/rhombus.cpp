#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
int x=n;

for(int i=0;i<n;i++)
{
	cout<<"\n";
    for(int j=i;j<n-1;j++)
    {
        cout<<"*";
    }
    cout<<"/";
    for(int k=2*i;k>0;k--)
    {
        cout<<"*";
    }
    cout<<"\\";
    for(int l=i;l<n-1;l++)
    {
        cout<<"*";
    }
}

for(int i=n-1;i>=0;i--)
{
	cout<<"\n";
    for(int j=i;j<n-1;j++)
    {
        cout<<"*";
    }
    cout<<"\\";
    for(int k=2*i;k>0;k--)
    {
        cout<<"*";
    }
    cout<<"/";
    for(int l=i;l<n-1;l++)
    {
        cout<<"*";
    }
}
}

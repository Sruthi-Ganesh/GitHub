#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
long long int a;
int b[10]={0};
char t;
int i=0;
cin>>a;

while(a>0)
{
	int ax = a%10;
	b[ax]++;

	a=a/10;


}

int max = INT_MIN;
int k=0;
for(int i=0;i<10;i++)
{
int j;
max=INT_MIN;
for( j=0;j<10;j++ )
{
	if(b[j]!=0)
	{
		if(max<b[j])
		{
			max = b[j];
			k=j;
		}
	}
}
b[k]=0;
for(int i=0;i<max;i++)
{
	cout<<k;
}
}


return 0;
}

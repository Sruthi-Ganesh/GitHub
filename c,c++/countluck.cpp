#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
char a[10][10];
int m,n,sum=0,count=0;
int bx[]={0,0,1,-1} ,by[]={1,-1,0,0} ; 

bool countNo(int i ,int j)
{
	return (i>=0 && i<m && j>=0 && j<n);
}

bool countWaves(int  i,int j,int dx=-1,int dy=-1)

{
int c=0;
int d=0;
	
	
if(a[i][j]== '*')
	{
	   return 1;
	}
	

	

for(int x=0;x<4;x++)
{

int nx=i+bx[x];
int ny=j+by[x];

if(a[i][j]=='X')
continue;


if(nx==dx && ny==dy)
continue;

if(!countNo(nx,ny))
continue;

if(countWaves(nx,ny,i,j))
{

  c=1;
}
d++;
}
 if(c && d>1)
    ++count;


return c;
	  
}
int main()
{
	
	int i,j,k,time,x=0;
	int f[10]={0};
	cin>>time;
	while(time!=0)
	{
	
	cin>>m;cin>>n;
	for(i=0;i<m;i++)
	{
		cout<<"for "<<i<<" row";
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
	
		if(a[i][j]=='M')
		{
		
		cout<<i<<j;
		  goto x;
	}
	}
	}
	x:fflush(stdin);
	cout<<"\n k:";
	cin>>k;
	
	
	countWaves(i,j);
	if(count == k)
        {
		
		f[x]=1;
    }
    x++;
time--;
}
for(int i=0;i<x;i++ )
{
	cout<<"\n i:"<<i;
	if(f[i]==1)
	cout<<"\n impressed";
	else
	cout<<"\n oops!";
}
 
	return 0;
	
	
}



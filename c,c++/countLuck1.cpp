#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
char a[10][10];
bool p [10][10]={0};
int m,n,sum=0,count=-1;
int bx[]={0,0,1,-1} ,by[]={1,-1,0,0} ; 

bool countNo(int i ,int j)
{
	return (i>=0 && i<m && j>=0 && j<n);
}

int countWaves(int  i,int j,int dx=-1,int dy=-1)

{


	

	int c=0;

 if(a[i][j]=='*')
 {
 
 cout<<"\n inside 2nd if";
 
   return 1;
}



for(int x=0;i<4;x++)
{
	if(a[i][j]== 'X' && (!(countNo(i,j))) && (i==dx && j==dy)  )
	{
		continue;
	}
	int nx = i+bx[i];
	int ny= j+by[i];



if(countWaves(nx,ny,i,j)!=0)
 c++;

 
 x:if(c>1)
  {
  	cout<<"\n inside 3rd if";
  sum++;
  }
  return c;
}
	


	  
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
	
	
	
	if(countWaves(i,j) == k)
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
	cout<<"\n oops";
}
 
	return 0;
	
	
}



	  
	  

